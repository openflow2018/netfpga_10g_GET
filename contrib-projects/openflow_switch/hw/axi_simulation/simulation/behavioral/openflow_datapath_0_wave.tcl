#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     openflow_datapath_0_wave.tcl (Mon May  7 12:17:54 2018)
#
#  Module   openflow_datapath_0_wrapper
#  Instance openflow_datapath_0
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

# wave add $tbpath${ps}openflow_datapath_0${ps}asclk -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}aclk -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}aresetn -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tdata_0 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tstrb_0 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tuser_0 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tvalid_0 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tready_0 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tlast_0 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tdata_1 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tstrb_1 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tuser_1 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tvalid_1 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tready_1 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tlast_1 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tdata_2 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tstrb_2 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tuser_2 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tvalid_2 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tready_2 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tlast_2 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tdata_3 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tstrb_3 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tuser_3 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tvalid_3 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tready_3 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tlast_3 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tdata_4 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tstrb_4 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tuser_4 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tvalid_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tready_4 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}m_axis_tlast_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tdata_0 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tstrb_0 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tuser_0 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tvalid_0 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tready_0 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tlast_0 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tdata_1 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tstrb_1 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tuser_1 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tvalid_1 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tready_1 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tlast_1 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tdata_2 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tstrb_2 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tuser_2 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tvalid_2 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tready_2 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tlast_2 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tdata_3 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tstrb_3 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tuser_3 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tvalid_3 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tready_3 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tlast_3 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tdata_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tstrb_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tuser_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tvalid_4 -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tready_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}s_axis_tlast_4 -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}awaddr -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}awvalid -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}awready -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}wdata -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}wstrb -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}wvalid -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}wready -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}bresp -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}bvalid -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}bready -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}araddr -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}arvalid -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}arready -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}rdata -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}rresp -into $id
  wave add $tbpath${ps}openflow_datapath_0${ps}rvalid -into $id
# wave add $tbpath${ps}openflow_datapath_0${ps}rready -into $id

