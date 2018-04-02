#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     nf10_axis_sim_record_3_wave.tcl (Mon Apr  2 17:15:36 2018)
#
#  Module   nf10_axis_sim_record_3_wrapper
#  Instance nf10_axis_sim_record_3
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}aclk -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}s_axis_tdata -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}s_axis_tstrb -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}s_axis_tuser -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}s_axis_tvalid -into $id
  wave add $tbpath${ps}nf10_axis_sim_record_3${ps}s_axis_tready -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}s_axis_tlast -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}counter -into $id
# wave add $tbpath${ps}nf10_axis_sim_record_3${ps}activity_rec -into $id

