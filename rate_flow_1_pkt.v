module rate_flow_1_pkt
#(
	parameter DEPTH_WIDTH = 10,
	parameter TIMESTAMP_WIDTH = 40,
	parameter CNT_PKT_WIDTH = 2,
	parameter NUM_FLOW_WIDTH = 32
)
(
	input asclk,
	input aresetn,

	input [2:0] proc_port,
	input [DEPTH_WIDTH-1:0] addr_hash,

	output reg [NUM_FLOW_WIDTH-1:0] num_flow_1pkt_6s,
	output reg [NUM_FLOW_WIDTH-1:0] num_flow_6s
);

// read from table 1 and 2
wire [CNT_PKT_WIDTH-1:0] cnt_pkt_read [1:0];
wire [TIMESTAMP_WIDTH-1:0] timestamp_read [1:0];

// shift signals to clk_2
reg [DEPTH_WIDTH-1:0] addr_hash_2nd;
reg [2:0] proc_port_2nd;

// shift signals to clk_3
reg [DEPTH_WIDTH-1:0] addr_hash_3rd;

// number flow 1 packet and total number flow per table
reg [NUM_FLOW_WIDTH-1:0] num_flow_1pkt [1:0];
reg [NUM_FLOW_WIDTH-1:0] num_flow [1:0];

// write enable per table
reg [1:0] wr_en;

// data_in per table
reg [TIMESTAMP_WIDTH-1:0] timestamp_write [1:0]; 
reg [CNT_PKT_WIDTH-1:0] cnt_pkt_write [1:0];

// misc
reg [TIMESTAMP_WIDTH-1:0] cnt_timestamp;
reg [31:0] cnt_time;
reg pri_table;

reg del_table;

/// clk_1 - read, clk_3 - write
///--------------------------------------------------
// table 1
dp_bram_1024x42 table_1
   (
   .clka (asclk),	// port 1 - write
   .addra (addr_hash_3rd), 
   .dina ({timestamp_write[0], cnt_pkt_write[0]}), 
   .douta (),
   .wea (wr_en[0]),
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
   .addra (addr_hash_3rd), 
   .dina ({timestamp_write[1], cnt_pkt_write[1]}), 
   .douta (),
   .wea (wr_en[1]),
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
		proc_port_2nd <= 0;
	end
	else begin
		addr_hash_2nd <= addr_hash;
		proc_port_2nd <= proc_port;
	end
end

/// clk_2 - update
///--------------------------------------------------
// switch pri_table and enable statistic processing
always @(posedge asclk) begin
	if (~aresetn) begin
		pri_table <= 1'b1;
	end
	else begin
		if (cnt_time == 32'd160000000) begin
			pri_table <= ~pri_table; // switch pri_table
		end
	end
end

// determine use which table
always @(posedge asclk) begin
	if (~aresetn) begin
		cnt_timestamp <= 0;
		cnt_time <= 0;
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
		num_flow_1pkt_6s <= 0;
		num_flow_6s <= 0;
		del_table <= 0;
	end
	else begin
		wr_en[0] <= 0;
		wr_en[1] <= 0;
		del_table <= 0;
		cnt_timestamp <= cnt_timestamp + 1;
		cnt_time <= cnt_time + 1;
		if (cnt_time == 32'd160000000) begin 	// statistical
			cnt_time <= 0;
			num_flow_1pkt_6s <= num_flow_1pkt[pri_table]; // get result from pri_table
			num_flow_6s <= num_flow[pri_table];
			num_flow_1pkt[pri_table] <= 0;
			num_flow[pri_table] <= 0;
			del_table <= 1'b1;
			wr_en[pri_table] <= 1'b1;
			timestamp_write[pri_table] <= 0;
			cnt_pkt_write[pri_table] <= 0;
		end
		else if (del_table) begin 	// delete ~pri_table
			wr_en[~pri_table] <= 1'b1;
			timestamp_write[~pri_table] <= 0;
			cnt_pkt_write[~pri_table] <= 0;
			if (addr_hash_3rd != 10'd1022) begin
				del_table <= 1'b1;
			end 
		end
		else if (proc_port_2nd <= 3) begin // new packet from physical ports
			// REMOVED: new flow in pri_table (first 6s)	
			if ((cnt_pkt_read[pri_table] != 2'b00) && 
					(cnt_timestamp - timestamp_read[pri_table] < 40'd160000000)) begin // exist flow in pri_table
				wr_en[pri_table] <= 1'b1;
				timestamp_write[pri_table] <= cnt_timestamp;
				cnt_pkt_write[pri_table] <= 2'b10;
				if (cnt_pkt_read[pri_table] == 2'b01) begin 		// become flow > 1 packet
					num_flow_1pkt[pri_table] <= num_flow_1pkt[pri_table] - 1;
				end
			end
			else begin  		// add to flow in ~pri_table
				wr_en[~pri_table] <= 1'b1;
				timestamp_write[~pri_table] <= cnt_timestamp;
				if (cnt_pkt_read[~pri_table] == 2'b00) begin
					cnt_pkt_write[~pri_table] <= 2'b01;
					num_flow_1pkt[~pri_table] <= num_flow_1pkt[~pri_table] + 1;
					num_flow[~pri_table] <= num_flow[~pri_table] + 1;
				end
				else begin
					cnt_pkt_write[~pri_table] <= 2'b10;
					if (cnt_pkt_read[~pri_table] == 2'b01) begin
						num_flow_1pkt[~pri_table] <= num_flow_1pkt[~pri_table] - 1;
					end
				end
			end
		end
	end
end

// shift signal
always @(posedge asclk) begin
	if (~aresetn) begin
		addr_hash_3rd <= 0;
	end
	else begin
		if (cnt_time == 32'd960000000) begin
			addr_hash_3rd <= 0;
		end
		else if (del_table) begin
			addr_hash_3rd <= addr_hash_3rd + 1;
		end
		else begin
			addr_hash_3rd <= addr_hash_2nd;
		end
	end
end

endmodule