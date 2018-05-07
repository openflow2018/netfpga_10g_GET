#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_axis_converter_3_wave.tcl (Mon May  7 15:53:53 2018)
#
#  Module   nf10_axis_converter_3_wrapper
#  Instance nf10_axis_converter_3
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

# wave add $tbpath${ps}nf10_axis_converter_3${ps}axi_aclk -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}axi_resetn -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}m_axis_tdata -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}m_axis_tstrb -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}m_axis_tuser -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}m_axis_tvalid -into $id
# wave add $tbpath${ps}nf10_axis_converter_3${ps}m_axis_tready -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}m_axis_tlast -into $id
# wave add $tbpath${ps}nf10_axis_converter_3${ps}s_axis_tdata -into $id
# wave add $tbpath${ps}nf10_axis_converter_3${ps}s_axis_tstrb -into $id
# wave add $tbpath${ps}nf10_axis_converter_3${ps}s_axis_tuser -into $id
# wave add $tbpath${ps}nf10_axis_converter_3${ps}s_axis_tvalid -into $id
  wave add $tbpath${ps}nf10_axis_converter_3${ps}s_axis_tready -into $id
# wave add $tbpath${ps}nf10_axis_converter_3${ps}s_axis_tlast -into $id

