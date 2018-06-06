module f_6_7 
(
	input asclk,
	input aresetn,

	input [27:0] cnt_time,
	input [2:0] proc_port_3rd,
	input [15:0] stats_3rd,

	// total packet length
    output reg [31:0] total_pkt_len,
    output reg [31:0] cnt_pkt
);

	// total packet length
   reg [31:0] total_pkt_len_tmp;
   reg [31:0] cnt_pkt_tmp;

   // total packet length
   always @(posedge asclk) begin
      if (~aresetn) begin
         total_pkt_len <= 0;
         cnt_pkt <= 0;
         total_pkt_len_tmp <= 0;
         cnt_pkt_tmp <= 0;
      end
      else begin
         if (cnt_time == 28'd160000000) begin   // 1 second
            total_pkt_len <= total_pkt_len_tmp;
            cnt_pkt <= cnt_pkt_tmp;
            total_pkt_len_tmp <= 0;
            cnt_pkt_tmp <= 0;
         end
         else if (proc_port_3rd <= 3) begin
            total_pkt_len_tmp <= total_pkt_len_tmp + stats_3rd;
            cnt_pkt_tmp <= cnt_pkt_tmp + 1;
         end
      end
   end

endmodule