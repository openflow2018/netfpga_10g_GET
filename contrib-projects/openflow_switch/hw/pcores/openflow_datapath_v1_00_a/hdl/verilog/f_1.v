module f_1 
(
	input asclk,
	input aresetn,

	input [27:0] cnt_time,
	input [2:0] proc_port_7th,
	input use_ex_7th,

	// inter-arrival time flow
    output reg [31:0] num_suitable_f_iat,
    output reg [31:0] num_total_f_iat
);

	// inter-arrival time flow
   reg [14:0] timestamp_f;
   reg enb_timestamp_f;
   reg true_f;
   reg start_cnt_f;
   reg [31:0] num_suitable_f_iat_tmp;
   reg [31:0] num_total_f_iat_tmp;

   // inter-arrival time flow
   always @(posedge asclk) begin
      if (~aresetn) begin
         start_cnt_f <= 0;
         timestamp_f <= 0;
         enb_timestamp_f <= 0;
         true_f <= 0;
         num_suitable_f_iat <= 0;
         num_total_f_iat <= 0;
         num_suitable_f_iat_tmp <= 0;
         num_total_f_iat_tmp <= 0;
      end
      else begin
         if (cnt_time == 28'd160000000) begin   // 1 second
            num_suitable_f_iat <= num_suitable_f_iat_tmp;
            num_total_f_iat <= num_total_f_iat_tmp;
            num_suitable_f_iat_tmp <= 0;
            num_total_f_iat_tmp <= 0;
         end
         else if ((proc_port_7th <= 3) && (~use_ex_7th)) begin
            timestamp_f <= 0;
            enb_timestamp_f <= 1'b1;
            true_f <= 1'b1;
            if (~start_cnt_f) begin
               start_cnt_f <= 1;
            end
            else begin
               num_total_f_iat_tmp <= num_total_f_iat_tmp + 1;
               if (true_f) begin // 0.2ms
                  num_suitable_f_iat_tmp <= num_suitable_f_iat_tmp + 1;
               end
            end
         end
         else if (enb_timestamp_f) begin
            timestamp_f <= timestamp_f + 1;
            if (timestamp_f == 15'd32000) begin
               true_f <= 0;
               enb_timestamp_f <= 0;
            end
         end
      end
   end

endmodule