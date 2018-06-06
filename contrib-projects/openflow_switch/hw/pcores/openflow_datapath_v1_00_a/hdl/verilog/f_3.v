module f_3
#(
	parameter DEPTH_WIDTH = 10,
	parameter TIMESTAMP_WIDTH = 40,
	parameter CNT_PKT_WIDTH = 2,
	parameter NUM_FLOW_WIDTH = 32
)
(
	input asclk,
	input aresetn,

	input [27:0] cnt_time,
	input [2:0] proc_port,
	input [DEPTH_WIDTH-1:0] addr_hash,

	output reg [NUM_FLOW_WIDTH-1:0] num_flow_1pkt_1s,
	output reg [NUM_FLOW_WIDTH-1:0] num_flow_1s
);

// clk_1
// read from table 1 and 2
wire [CNT_PKT_WIDTH-1:0] cnt_pkt_read [1:0];
wire [TIMESTAMP_WIDTH-1:0] timestamp_read [1:0];

reg [2:0] proc_port_2nd;
reg [DEPTH_WIDTH-1:0] addr_hash_2nd;

// clk_2
reg start_del_table;
reg pri_table, pri_table_3rd;
reg [TIMESTAMP_WIDTH-1:0] cnt_timestamp;

reg [2:0] proc_port_3rd;
reg [DEPTH_WIDTH-1:0] addr_hash_3rd;
reg [CNT_PKT_WIDTH-1:0] cnt_pkt_read_3rd [1:0];
reg iat;

// clk_3
// data_in per table
reg [TIMESTAMP_WIDTH-1:0] timestamp_write [1:0]; 
reg [CNT_PKT_WIDTH-1:0] cnt_pkt_write [1:0];

reg [NUM_FLOW_WIDTH-1:0] num_flow_1pkt [1:0];
reg [NUM_FLOW_WIDTH-1:0] num_flow [1:0];

reg [1:0] wr_en;
reg [DEPTH_WIDTH-1:0]  addr_hash_4th;

reg [DEPTH_WIDTH-1:0]  addr_hash_del;
reg  del_table;

// clk_4
reg [TIMESTAMP_WIDTH-1:0] timestamp_write_final [1:0]; 
reg [CNT_PKT_WIDTH-1:0] cnt_pkt_write_final [1:0];

reg [1:0] wr_en_final;

reg [DEPTH_WIDTH-1:0] addr_hash_5th;

/// clk_1 - read, clk_5 - write
///--------------------------------------------------
// table 1
dp_bram_1024x42 table_1
   (
   .clka (asclk),	// port 1 - write
   .addra (addr_hash_5th), 
   .dina ({timestamp_write_final[0], cnt_pkt_write_final[0]}), 
   .douta (),
   .wea (wr_en_final[0]),
   .rsta (~aresetn),
   .clkb (asclk),	// port 2 - read
   .addrb (addr_hash), 
   .dinb (64'b0),
   .doutb ({timestamp_read[0], cnt_pkt_read[0]}),
   .web (1'b0),
   .rstb (~aresetn)
   );

// table 2
dp_bram_1024x42 table_2
   (
   .clka (asclk),	// port 1 - write
   .addra (addr_hash_5th), 
   .dina ({timestamp_write_final[1], cnt_pkt_write_final[1]}), 
   .douta (),
   .wea (wr_en_final[1]),
   .rsta (~aresetn),
   .clkb (asclk),	// port 2 - read
   .addrb (addr_hash), 
   .dinb (64'b0),
   .doutb ({timestamp_read[1], cnt_pkt_read[1]}),
   .web (1'b0),
   .rstb (~aresetn)
   );

// shift signal
always @(posedge asclk) begin
	if (~aresetn) begin
		addr_hash_2nd <= 0;
		proc_port_2nd <= 6;
	end
	else begin
		addr_hash_2nd <= addr_hash;
		proc_port_2nd <= proc_port;
	end
end

/// clk_2 - check 1s
///--------------------------------------------------
// switch pri_table
always @(posedge asclk) begin
	if (~aresetn) begin
		cnt_timestamp <= 0;
		pri_table <= 1'b1;
		start_del_table <= 0;
		num_flow_1pkt_1s <= 0;
		num_flow_1s <= 0;
	end
	else begin
		cnt_timestamp <= cnt_timestamp + 1;
		start_del_table <= 0;
		if (cnt_time == 28'd160000000) begin
			pri_table <= ~pri_table; // switch pri_table
			start_del_table <= 1'b1;
			num_flow_1pkt_1s <= num_flow_1pkt[pri_table]; // get result from pri_table
			num_flow_1s <= num_flow[pri_table];
		end
	end
end

// calculate IAT
always @(posedge asclk) begin
	if (~aresetn) begin
		iat <= 0;
	end
	else begin
		iat <= 0;
		if (cnt_timestamp - timestamp_read[pri_table] < 40'd160000000) begin
			iat <= 1'b1;
		end
	end
end

// shift signal
always @(posedge asclk) begin
	if (~aresetn) begin
		addr_hash_3rd <= 0;
		proc_port_3rd <= 6;
		pri_table_3rd <= 0;
		cnt_pkt_read_3rd[0] <= 0;
		cnt_pkt_read_3rd[1] <= 0; 
	end
	else begin
		addr_hash_3rd <= addr_hash_2nd;
		proc_port_3rd <= proc_port_2nd;
		pri_table_3rd <= pri_table;
		cnt_pkt_read_3rd[0] <= cnt_pkt_read[0];
		cnt_pkt_read_3rd[1] <= cnt_pkt_read[1];
	end
end

/// clk_3 - update
///--------------------------------------------------
// determine use which table
always @(posedge asclk) begin
	if (~aresetn) begin
		wr_en[0] <= 0;
		wr_en[1] <= 0;
		timestamp_write[0] <= 0;
		timestamp_write[1] <= 0;
		cnt_pkt_write[0] <= 0;
		cnt_pkt_write[1] <= 0;
		num_flow_1pkt[0] <= 0;
		num_flow[0] <= 0;
		num_flow_1pkt[1] <= 0;
		num_flow[1] <= 0;	
	end
	else begin
		wr_en[0] <= 0;
		wr_en[1] <= 0;
		if (start_del_table) begin
			num_flow_1pkt[pri_table_3rd] <= 0;
			num_flow[pri_table_3rd] <= 0;
		end
		else if ((proc_port_3rd <= 3) && (~del_table)) begin // new packet from physical ports
			if ((cnt_pkt_read_3rd[pri_table_3rd] != 2'b00) && iat) begin // exist flow in pri_table
				wr_en[pri_table_3rd] <= 1'b1;
				timestamp_write[pri_table_3rd] <= cnt_timestamp;
				cnt_pkt_write[pri_table_3rd] <= 2'b10;
				if (cnt_pkt_read_3rd[pri_table_3rd] == 2'b01) begin 		// become flow > 1 packet
					num_flow_1pkt[pri_table_3rd] <= num_flow_1pkt[pri_table_3rd] - 1;
				end
			end
			else begin  		// add to flow in ~pri_table
				wr_en[~pri_table_3rd] <= 1'b1;
				timestamp_write[~pri_table_3rd] <= cnt_timestamp;
				if (cnt_pkt_read_3rd[~pri_table_3rd] == 2'b00) begin
					cnt_pkt_write[~pri_table_3rd] <= 2'b01;
					num_flow_1pkt[~pri_table_3rd] <= num_flow_1pkt[~pri_table_3rd] + 1;
					num_flow[~pri_table_3rd] <= num_flow[~pri_table_3rd] + 1;
				end
				else begin
					cnt_pkt_write[~pri_table_3rd] <= 2'b10;
					if (cnt_pkt_read_3rd[~pri_table_3rd] == 2'b01) begin
						num_flow_1pkt[~pri_table_3rd] <= num_flow_1pkt[~pri_table_3rd] - 1;
					end
				end
			end
		end
	end
end

// delete table
always @(posedge asclk) begin
	if (~aresetn) begin
		addr_hash_del <= 0;
		del_table <= 0;
	end
	else begin
		if (start_del_table) begin
			addr_hash_del <= 0;
			del_table <= 1'b1;
		end
		else if (del_table) begin
			addr_hash_del <= addr_hash_del + 1;
			if (addr_hash_del == 10'd1023) begin
				addr_hash_del <= 0;
				del_table <= 0;
			end
		end
	end
end

// shift signal
always @(posedge asclk) begin
	if (~aresetn) begin
		addr_hash_4th <= 0;
	end
	else begin
		addr_hash_4th <= addr_hash_3rd;
	end
end

/// clk_4 - confirm
///--------------------------------------------------
// selector
always @(posedge asclk) begin
	if (~aresetn) begin
		addr_hash_5th <= 0;
		wr_en_final[0] <= 0;
		wr_en_final[1] <= 0;
		timestamp_write_final[0] <= 0;
		timestamp_write_final[1] <= 0;
		cnt_pkt_write_final[0] <= 0;
		cnt_pkt_write_final[1] <= 0;
 	end
	else begin
		if (del_table) begin
			addr_hash_5th <= addr_hash_del;
			wr_en_final[~pri_table_3rd] <= 1'b1;
			wr_en_final[pri_table_3rd] <= 1'b0;
			timestamp_write_final[~pri_table_3rd] <= 0;
			cnt_pkt_write_final[~pri_table_3rd] <= 0;
		end
		else begin
			addr_hash_5th <= addr_hash_4th;
			wr_en_final[0] <= wr_en[0];
			wr_en_final[1] <= wr_en[1];
			timestamp_write_final[0] <= timestamp_write[0];
			cnt_pkt_write_final[0] <= cnt_pkt_write[0];
			timestamp_write_final[1] <= timestamp_write[1];
			cnt_pkt_write_final[1] <= cnt_pkt_write[1];
		end
	end
end

endmodule