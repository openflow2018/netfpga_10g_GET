//-----------------------------------------------------------------------------
// openflow_datapath_0_wrapper.v
//-----------------------------------------------------------------------------

`timescale 1 ps / 100 fs

`uselib lib=unisims_ver lib=openflow_datapath_v1_00_a

module openflow_datapath_0_wrapper
  (
    asclk,
    aclk,
    aresetn,
    m_axis_tdata_0,
    m_axis_tstrb_0,
    m_axis_tuser_0,
    m_axis_tvalid_0,
    m_axis_tready_0,
    m_axis_tlast_0,
    m_axis_tdata_1,
    m_axis_tstrb_1,
    m_axis_tuser_1,
    m_axis_tvalid_1,
    m_axis_tready_1,
    m_axis_tlast_1,
    m_axis_tdata_2,
    m_axis_tstrb_2,
    m_axis_tuser_2,
    m_axis_tvalid_2,
    m_axis_tready_2,
    m_axis_tlast_2,
    m_axis_tdata_3,
    m_axis_tstrb_3,
    m_axis_tuser_3,
    m_axis_tvalid_3,
    m_axis_tready_3,
    m_axis_tlast_3,
    m_axis_tdata_4,
    m_axis_tstrb_4,
    m_axis_tuser_4,
    m_axis_tvalid_4,
    m_axis_tready_4,
    m_axis_tlast_4,
    s_axis_tdata_0,
    s_axis_tstrb_0,
    s_axis_tuser_0,
    s_axis_tvalid_0,
    s_axis_tready_0,
    s_axis_tlast_0,
    s_axis_tdata_1,
    s_axis_tstrb_1,
    s_axis_tuser_1,
    s_axis_tvalid_1,
    s_axis_tready_1,
    s_axis_tlast_1,
    s_axis_tdata_2,
    s_axis_tstrb_2,
    s_axis_tuser_2,
    s_axis_tvalid_2,
    s_axis_tready_2,
    s_axis_tlast_2,
    s_axis_tdata_3,
    s_axis_tstrb_3,
    s_axis_tuser_3,
    s_axis_tvalid_3,
    s_axis_tready_3,
    s_axis_tlast_3,
    s_axis_tdata_4,
    s_axis_tstrb_4,
    s_axis_tuser_4,
    s_axis_tvalid_4,
    s_axis_tready_4,
    s_axis_tlast_4,
    awaddr,
    awvalid,
    awready,
    wdata,
    wstrb,
    wvalid,
    wready,
    bresp,
    bvalid,
    bready,
    araddr,
    arvalid,
    arready,
    rdata,
    rresp,
    rvalid,
    rready
  );
  input asclk;
  input aclk;
  input aresetn;
  output [63:0] m_axis_tdata_0;
  output [7:0] m_axis_tstrb_0;
  output [127:0] m_axis_tuser_0;
  output m_axis_tvalid_0;
  input m_axis_tready_0;
  output m_axis_tlast_0;
  output [63:0] m_axis_tdata_1;
  output [7:0] m_axis_tstrb_1;
  output [127:0] m_axis_tuser_1;
  output m_axis_tvalid_1;
  input m_axis_tready_1;
  output m_axis_tlast_1;
  output [63:0] m_axis_tdata_2;
  output [7:0] m_axis_tstrb_2;
  output [127:0] m_axis_tuser_2;
  output m_axis_tvalid_2;
  input m_axis_tready_2;
  output m_axis_tlast_2;
  output [63:0] m_axis_tdata_3;
  output [7:0] m_axis_tstrb_3;
  output [127:0] m_axis_tuser_3;
  output m_axis_tvalid_3;
  input m_axis_tready_3;
  output m_axis_tlast_3;
  output [63:0] m_axis_tdata_4;
  output [7:0] m_axis_tstrb_4;
  output [127:0] m_axis_tuser_4;
  output m_axis_tvalid_4;
  input m_axis_tready_4;
  output m_axis_tlast_4;
  input [63:0] s_axis_tdata_0;
  input [7:0] s_axis_tstrb_0;
  input [127:0] s_axis_tuser_0;
  input s_axis_tvalid_0;
  output s_axis_tready_0;
  input s_axis_tlast_0;
  input [63:0] s_axis_tdata_1;
  input [7:0] s_axis_tstrb_1;
  input [127:0] s_axis_tuser_1;
  input s_axis_tvalid_1;
  output s_axis_tready_1;
  input s_axis_tlast_1;
  input [63:0] s_axis_tdata_2;
  input [7:0] s_axis_tstrb_2;
  input [127:0] s_axis_tuser_2;
  input s_axis_tvalid_2;
  output s_axis_tready_2;
  input s_axis_tlast_2;
  input [63:0] s_axis_tdata_3;
  input [7:0] s_axis_tstrb_3;
  input [127:0] s_axis_tuser_3;
  input s_axis_tvalid_3;
  output s_axis_tready_3;
  input s_axis_tlast_3;
  input [63:0] s_axis_tdata_4;
  input [7:0] s_axis_tstrb_4;
  input [127:0] s_axis_tuser_4;
  input s_axis_tvalid_4;
  output s_axis_tready_4;
  input s_axis_tlast_4;
  input [31:0] awaddr;
  input awvalid;
  output awready;
  input [31:0] wdata;
  input [3:0] wstrb;
  input wvalid;
  output wready;
  output [1:0] bresp;
  output bvalid;
  input bready;
  input [31:0] araddr;
  input arvalid;
  output arready;
  output [31:0] rdata;
  output [1:0] rresp;
  output rvalid;
  input rready;

  openflow_datapath
    #(
      .C_AXIS_DATA_WIDTH ( 64 ),
      .C_AXIS_TUSER_WIDTH ( 128 ),
      .C_AXIS_LEN_DATA_WIDTH ( 16 ),
      .C_AXIS_SPT_DATA_WIDTH ( 8 ),
      .C_AXIS_DPT_DATA_WIDTH ( 8 ),
      .C_S_AXI_ADDR_WIDTH ( 32 ),
      .C_S_AXI_DATA_WIDTH ( 32 ),
      .C_S_AXI_BASEADDR ( 32'h7a010000 ),
      .C_S_AXI_HIGHADDR ( 32'h7a01ffff )
    )
    openflow_datapath_0 (
      .asclk ( asclk ),
      .aclk ( aclk ),
      .aresetn ( aresetn ),
      .m_axis_tdata_0 ( m_axis_tdata_0 ),
      .m_axis_tstrb_0 ( m_axis_tstrb_0 ),
      .m_axis_tuser_0 ( m_axis_tuser_0 ),
      .m_axis_tvalid_0 ( m_axis_tvalid_0 ),
      .m_axis_tready_0 ( m_axis_tready_0 ),
      .m_axis_tlast_0 ( m_axis_tlast_0 ),
      .m_axis_tdata_1 ( m_axis_tdata_1 ),
      .m_axis_tstrb_1 ( m_axis_tstrb_1 ),
      .m_axis_tuser_1 ( m_axis_tuser_1 ),
      .m_axis_tvalid_1 ( m_axis_tvalid_1 ),
      .m_axis_tready_1 ( m_axis_tready_1 ),
      .m_axis_tlast_1 ( m_axis_tlast_1 ),
      .m_axis_tdata_2 ( m_axis_tdata_2 ),
      .m_axis_tstrb_2 ( m_axis_tstrb_2 ),
      .m_axis_tuser_2 ( m_axis_tuser_2 ),
      .m_axis_tvalid_2 ( m_axis_tvalid_2 ),
      .m_axis_tready_2 ( m_axis_tready_2 ),
      .m_axis_tlast_2 ( m_axis_tlast_2 ),
      .m_axis_tdata_3 ( m_axis_tdata_3 ),
      .m_axis_tstrb_3 ( m_axis_tstrb_3 ),
      .m_axis_tuser_3 ( m_axis_tuser_3 ),
      .m_axis_tvalid_3 ( m_axis_tvalid_3 ),
      .m_axis_tready_3 ( m_axis_tready_3 ),
      .m_axis_tlast_3 ( m_axis_tlast_3 ),
      .m_axis_tdata_4 ( m_axis_tdata_4 ),
      .m_axis_tstrb_4 ( m_axis_tstrb_4 ),
      .m_axis_tuser_4 ( m_axis_tuser_4 ),
      .m_axis_tvalid_4 ( m_axis_tvalid_4 ),
      .m_axis_tready_4 ( m_axis_tready_4 ),
      .m_axis_tlast_4 ( m_axis_tlast_4 ),
      .s_axis_tdata_0 ( s_axis_tdata_0 ),
      .s_axis_tstrb_0 ( s_axis_tstrb_0 ),
      .s_axis_tuser_0 ( s_axis_tuser_0 ),
      .s_axis_tvalid_0 ( s_axis_tvalid_0 ),
      .s_axis_tready_0 ( s_axis_tready_0 ),
      .s_axis_tlast_0 ( s_axis_tlast_0 ),
      .s_axis_tdata_1 ( s_axis_tdata_1 ),
      .s_axis_tstrb_1 ( s_axis_tstrb_1 ),
      .s_axis_tuser_1 ( s_axis_tuser_1 ),
      .s_axis_tvalid_1 ( s_axis_tvalid_1 ),
      .s_axis_tready_1 ( s_axis_tready_1 ),
      .s_axis_tlast_1 ( s_axis_tlast_1 ),
      .s_axis_tdata_2 ( s_axis_tdata_2 ),
      .s_axis_tstrb_2 ( s_axis_tstrb_2 ),
      .s_axis_tuser_2 ( s_axis_tuser_2 ),
      .s_axis_tvalid_2 ( s_axis_tvalid_2 ),
      .s_axis_tready_2 ( s_axis_tready_2 ),
      .s_axis_tlast_2 ( s_axis_tlast_2 ),
      .s_axis_tdata_3 ( s_axis_tdata_3 ),
      .s_axis_tstrb_3 ( s_axis_tstrb_3 ),
      .s_axis_tuser_3 ( s_axis_tuser_3 ),
      .s_axis_tvalid_3 ( s_axis_tvalid_3 ),
      .s_axis_tready_3 ( s_axis_tready_3 ),
      .s_axis_tlast_3 ( s_axis_tlast_3 ),
      .s_axis_tdata_4 ( s_axis_tdata_4 ),
      .s_axis_tstrb_4 ( s_axis_tstrb_4 ),
      .s_axis_tuser_4 ( s_axis_tuser_4 ),
      .s_axis_tvalid_4 ( s_axis_tvalid_4 ),
      .s_axis_tready_4 ( s_axis_tready_4 ),
      .s_axis_tlast_4 ( s_axis_tlast_4 ),
      .awaddr ( awaddr ),
      .awvalid ( awvalid ),
      .awready ( awready ),
      .wdata ( wdata ),
      .wstrb ( wstrb ),
      .wvalid ( wvalid ),
      .wready ( wready ),
      .bresp ( bresp ),
      .bvalid ( bvalid ),
      .bready ( bready ),
      .araddr ( araddr ),
      .arvalid ( arvalid ),
      .arready ( arready ),
      .rdata ( rdata ),
      .rresp ( rresp ),
      .rvalid ( rvalid ),
      .rready ( rready )
    );

endmodule

