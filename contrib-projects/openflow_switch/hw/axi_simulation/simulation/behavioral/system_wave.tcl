#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     system_wave.tcl (Mon May  7 12:17:54 2018)
#
#  ISE Simulator Trace Script File
#
#  Trace script files specify signals to save for later
#  display when viewing results of the simulation a graphic
#  format. Comment or uncomment commands to change the set of
#  signals viewed.
#
puts  "Setting up signal tracing ..."

if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

#
#  Trace top-level ports
#
set id [group add "Top level ports"]
source top_level_ports_wave.tcl


#
#  Trace Bus signal ports
#
set id [group add "Bus signal ports" ]
source axi_interconnect_0_wave.tcl

source microblaze_0_ilmb_wave.tcl

source microblaze_0_dlmb_wave.tcl

#
#  Trace Processor ports
#
set id [group add "Processor ports" ]
source microblaze_0_wave.tcl

#
#  Trace processor registers
#

set id [group add "Processor registers"]
#  Processor registers cannot be displayed for:
#  Module   microblaze_0_wrapper
#  Instance microblaze_0
#  Register display support will be added in a future EDK release

#
#  Trace IP and peripheral ports
#
set id [group add "IP and peripheral ports" ]
source microblaze_0_i_bram_ctrl_wave.tcl

source microblaze_0_d_bram_ctrl_wave.tcl

source microblaze_0_bram_block_wave.tcl

source reset_0_wave.tcl

source RS232_Uart_1_wave.tcl

source clock_generator_0_wave.tcl

source diff_input_buf_0_wave.tcl

source diff_input_buf_1_wave.tcl

source diff_input_buf_2_wave.tcl

source diff_input_buf_3_wave.tcl

source nf10_mdio_0_wave.tcl

source axi_timebase_wdt_0_wave.tcl

source nf10_input_arbiter_0_wave.tcl

source nf10_bram_output_queues_0_wave.tcl

source openflow_datapath_0_wave.tcl

source nf10_axi_sim_transactor_0_wave.tcl

source nf10_axis_sim_stim_0_wave.tcl

source nf10_axis_sim_stim_1_wave.tcl

source nf10_axis_sim_stim_2_wave.tcl

source nf10_axis_sim_stim_3_wave.tcl

source nf10_axis_sim_stim_4_wave.tcl

source nf10_axis_sim_record_0_wave.tcl

source nf10_axis_sim_record_1_wave.tcl

source nf10_axis_sim_record_2_wave.tcl

source nf10_axis_sim_record_3_wave.tcl

source nf10_axis_sim_record_4_wave.tcl

source nf10_axis_converter_0_wave.tcl

source nf10_axis_converter_1_wave.tcl

source nf10_axis_converter_2_wave.tcl

source nf10_axis_converter_3_wave.tcl

source nf10_axis_converter_4_wave.tcl

#
#  Trace setup complete. Start tracing the signals.
#

puts  "Signal tracing setup completed."

puts  "Simulate the design with the 'run' command."
