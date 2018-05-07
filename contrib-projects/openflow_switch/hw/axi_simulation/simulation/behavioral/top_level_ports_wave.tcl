#  Simulation Model Generator
#  Xilinx EDK 13.4 EDK_O.87xd
#  Copyright (c) 1995-2011 Xilinx, Inc.  All rights reserved.
#
#  File     top_level_ports_wave.tcl (Mon May  7 15:53:53 2018)
#
if { [info exists PathSeparator] } { set ps $PathSeparator } else { set ps "/" }
if { ![info exists tbpath] } { set tbpath "system_tb${ps}dut" }

wave add $tbpath${ps}RESET -into $id 
wave add $tbpath${ps}RS232_Uart_1_sout -into $id 
wave add $tbpath${ps}RS232_Uart_1_sin -into $id 
wave add $tbpath${ps}CLK -into $id 
wave add $tbpath${ps}refclk_A_p -into $id 
wave add $tbpath${ps}refclk_A_n -into $id 
wave add $tbpath${ps}refclk_B_p -into $id 
wave add $tbpath${ps}refclk_B_n -into $id 
wave add $tbpath${ps}refclk_C_p -into $id 
wave add $tbpath${ps}refclk_C_n -into $id 
wave add $tbpath${ps}refclk_D_p -into $id 
wave add $tbpath${ps}refclk_D_n -into $id 
wave add $tbpath${ps}MDC -into $id 
wave add $tbpath${ps}MDIO -into $id 
wave add $tbpath${ps}PHY_RST_N -into $id 

