#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_axis_sim_stim_4_wave.tcl (Mon May  7 12:17:54 2018)
#
#  Module   nf10_axis_sim_stim_4_wrapper
#  Instance nf10_axis_sim_stim_4
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

# wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}aclk -into $id
  wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}aresetn -into $id
  wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}m_axis_tdata -into $id
  wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}m_axis_tstrb -into $id
  wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}m_axis_tuser -into $id
  wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}m_axis_tvalid -into $id
# wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}m_axis_tready -into $id
  wave add $tbpath${ps}nf10_axis_sim_stim_4${ps}m_axis_tlast -into $id

