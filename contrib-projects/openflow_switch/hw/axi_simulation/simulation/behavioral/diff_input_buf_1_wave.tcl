#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     diff_input_buf_1_wave.tcl (Mon Apr  2 17:15:36 2018)
#
#  Module   diff_input_buf_1_wrapper
#  Instance diff_input_buf_1
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

# wave add $tbpath${ps}diff_input_buf_1${ps}SINGLE_ENDED_INPUT -into $id
  wave add $tbpath${ps}diff_input_buf_1${ps}DIFF_INPUT_P -into $id
  wave add $tbpath${ps}diff_input_buf_1${ps}DIFF_INPUT_N -into $id

