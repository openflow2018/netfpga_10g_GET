module f_4_5 
(
	input asclk,
	input aresetn,

	input [27:0] cnt_time,
	input [2:0] proc_port_3rd,
	input [15:0] stats_3rd,
	input [15:0] tp_source,

	// dns response
   output reg [31:0] num_suitable_dns_response,
   output reg [31:0] num_total_dns_response
);

	// dns response
   reg [31:0] num_suitable_dns_response_tmp;
   reg [31:0] num_total_dns_response_tmp;

	// dns response
   always @(posedge asclk) begin
      if (~aresetn) begin
         num_suitable_dns_response <= 0;
         num_total_dns_response <= 0;
         num_suitable_dns_response_tmp <= 0;
         num_total_dns_response_tmp <= 0;
      end
      else begin
         if (cnt_time == 28'd160000000) begin   // 1 second
            num_suitable_dns_response <= num_suitable_dns_response_tmp;
            num_total_dns_response <= num_total_dns_response_tmp;
            num_suitable_dns_response_tmp <= 0;
            num_total_dns_response_tmp <= 0;
         end
         else if ((proc_port_3rd <= 3) && (tp_source == 16'd53)) begin   // dns protocol
            num_total_dns_response_tmp <= num_total_dns_response_tmp + 1;
            if (stats_3rd > 16'd450) begin
               num_suitable_dns_response_tmp <= num_suitable_dns_response_tmp + 1;
            end
         end
      end
   end

endmodule