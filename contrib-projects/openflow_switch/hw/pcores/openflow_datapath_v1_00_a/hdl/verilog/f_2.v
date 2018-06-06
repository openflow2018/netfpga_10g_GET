module f_2 
(
	input asclk,
	input aresetn,

	input [27:0] cnt_time,
	input [2:0] proc_port_3rd,

	// inter-arrival time packet
   output reg [31:0] num_suitable_p_iat,
   output reg [31:0] num_total_p_iat
);

	// inter-arrival time packet
   reg [14:0] timestamp_p;
   reg enb_timestamp_p;
   reg true_p;
   reg start_cnt_p;
   reg [31:0] num_suitable_p_iat_tmp;
   reg [31:0] num_total_p_iat_tmp;

   // inter-arrival time packet
   always @(posedge asclk) begin
      if (~aresetn) begin
         start_cnt_p <= 0;
         timestamp_p <= 0;
         enb_timestamp_p <= 0;
         true_p <= 0;
         num_suitable_p_iat <= 0;
         num_total_p_iat <= 0;
         num_suitable_p_iat_tmp <= 0;
         num_total_p_iat_tmp <= 0;
      end
      else begin
         if (cnt_time == 28'd160000000) begin   // 1 second
            num_suitable_p_iat <= num_suitable_p_iat_tmp;
            num_total_p_iat <= num_total_p_iat_tmp;
            num_suitable_p_iat_tmp <= 0;
            num_total_p_iat_tmp <= 0;
         end
         else if (proc_port_3rd <= 3) begin
            timestamp_p <= 0;
            enb_timestamp_p <= 1'b1;
            true_p <= 1'b1;
            if (~start_cnt_p) begin
               start_cnt_p <= 1;
            end
            else begin
               num_total_p_iat_tmp <= num_total_p_iat_tmp + 1;
               if (true_p) begin // 0.2ms
                  num_suitable_p_iat_tmp <= num_suitable_p_iat_tmp + 1;
               end
            end
         end
         else if (enb_timestamp_p) begin
            timestamp_p <= timestamp_p + 1;
            if (timestamp_p == 15'd32000) begin
               true_p <= 0;
               enb_timestamp_p <= 0;
            end
         end
      end
   end

endmodule