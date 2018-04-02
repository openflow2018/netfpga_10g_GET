/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/root/netfpga_10g/lib/hw/std/pcores/nf10_axi_sim_transactor_v1_00_a/simhdl/vhdl/nf10_axi_sim_transactor.vhd";
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;
extern char *STD_TEXTIO;
extern char *NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550;
static const char *ng5 = "Function result_str ended without a return statement";
extern char *IEEE_P_3564397177;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );
void ieee_p_3564397177_sub_2258168291854845616_91900896(char *, char *, char *, char *, char *, unsigned char , int );
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(char *, char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(char *, char *, char *, char *, unsigned int , unsigned int , char *, char *, char *);
unsigned char nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(char *, unsigned char );


static void nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(113, ng0);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 10136);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 9944);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

void nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418(char *t0, char *t1)
{
    char *t4;
    char *t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;

LAB0:    t4 = (t0 + 19096U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 10200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 19096U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 19112U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 10264);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 19112U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 19128U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 10328);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 19128U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 10392);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);
    t4 = (t0 + 19192U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 10456);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 19192U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast(t9);
    t4 = (t0 + 10520);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t4);

LAB1:    return;
}

void nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(char *t0, char *t1, int t2)
{
    char t3[128];
    char t4[8];
    char t8[8];
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    int t32;

LAB0:    t5 = (t3 + 4U);
    t6 = ((STD_STANDARD) + 824);
    t7 = (t5 + 88U);
    *((char **)t7) = t6;
    t9 = (t5 + 56U);
    *((char **)t9) = t8;
    *((int *)t8) = t2;
    t10 = (t5 + 80U);
    *((unsigned int *)t10) = 4U;
    t11 = (t4 + 4U);
    *((int *)t11) = t2;

LAB2:    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    t14 = *((int *)t13);
    t15 = (t14 != 0);
    if (t15 != 0)
        goto LAB3;

LAB5:
LAB1:    return;
LAB3:    t12 = (t0 + 992U);
    xsi_add_dynamic_wait(t1, t12, -1, -1);

LAB9:    t16 = (t1 + 224U);
    t16 = *((char **)t16);
    xsi_wp_set_status(t16, 1);
    t17 = (t1 + 88U);
    t18 = *((char **)t17);
    t19 = (t18 + 1888U);
    *((unsigned int *)t19) = 1U;
    t20 = (t1 + 88U);
    t21 = *((char **)t20);
    t22 = (t21 + 0U);
    getcontext(t22);
    t23 = (t1 + 88U);
    t24 = *((char **)t23);
    t25 = (t24 + 1888U);
    t26 = *((unsigned int *)t25);
    if (t26 == 1)
        goto LAB10;

LAB11:    t27 = (t1 + 88U);
    t28 = *((char **)t27);
    t29 = (t28 + 1888U);
    *((unsigned int *)t29) = 3U;

LAB7:
LAB8:    t30 = (t0 + 992U);
    t31 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t30, 0U, 0U);
    if (t31 == 1)
        goto LAB6;
    else
        goto LAB9;

LAB4:;
LAB6:    xsi_remove_dynamic_wait(t1, t12);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t14 = *((int *)t7);
    t32 = (t14 - 1);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t6 = (t9 + 0);
    *((int *)t6) = t32;
    goto LAB2;

LAB10:    xsi_saveStackAndSuspend(t1);
    goto LAB11;

}

static void nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_p_1(char *t0)
{
    char t14[16];
    char t16[16];
    char t20[16];
    char t26[16];
    char t31[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int64 t11;
    int64 t12;
    int64 t13;
    char *t15;
    char *t17;
    char *t18;
    unsigned int t19;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    int64 t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    unsigned char t47;
    unsigned char t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 9376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 10);
    xsi_set_current_line(156, ng0);

LAB4:    t2 = (t0 + 4072U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(161, ng0);

LAB8:    t2 = (t0 + 7856U);
    t4 = std_textio_endfile(t2);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 20025);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (0 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t19;
    std_textio_write7(STD_TEXTIO, t2, t3, t6, t14, (unsigned char)0, 0);
    xsi_set_current_line(258, ng0);
    t2 = (t0 + 9184);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 8136U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 20025);
    t8 = (t0 + 20043);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t0 + 18952U);
    t21 = (t16 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 19;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t10 = (19 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t19;
    t15 = xsi_base_array_concat(t15, t14, t17, (char)97, t6, t18, (char)97, t8, t16, (char)101);
    t22 = ((STD_STANDARD) + 384);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t23 = (t11 / t12);
    t24 = xsi_int_to_mem(t23);
    t25 = xsi_string_variable_get_image(t20, t22, t24);
    t28 = ((STD_STANDARD) + 984);
    t27 = xsi_base_array_concat(t27, t26, t28, (char)97, t15, t14, (char)97, t25, t20, (char)101);
    t29 = (t0 + 20062);
    t34 = ((STD_STANDARD) + 984);
    t35 = (t33 + 0U);
    t49 = (t35 + 0U);
    *((int *)t49) = 1;
    t49 = (t35 + 4U);
    *((int *)t49) = 4;
    t49 = (t35 + 8U);
    *((int *)t49) = 1;
    t36 = (4 - 1);
    t19 = (t36 * 1);
    t19 = (t19 + 1);
    t49 = (t35 + 12U);
    *((unsigned int *)t49) = t19;
    t32 = xsi_base_array_concat(t32, t31, t34, (char)97, t27, t26, (char)97, t29, t33, (char)101);
    t19 = (18U + 19U);
    t49 = (t20 + 12U);
    t37 = *((unsigned int *)t49);
    t38 = (t19 + t37);
    t39 = (t38 + 4U);
    t50 = (char *)alloca(t39);
    memcpy(t50, t32, t39);
    std_textio_write7(STD_TEXTIO, t2, t3, t50, t31, (unsigned char)0, 0);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 9184);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 8136U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(262, ng0);

LAB84:    *((char **)t1) = &&LAB85;

LAB1:    return;
LAB5:    xsi_set_current_line(157, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 9184);
    t6 = (t0 + 7856U);
    t7 = (t0 + 8136U);
    std_textio_readline(STD_TEXTIO, t3, t6, t7);
    xsi_set_current_line(164, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 7048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t0 + 7168U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, t8);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7168U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB8;

LAB12:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 7048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)42);
    if (t5 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 7048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)64);
    if (t5 != 0)
        goto LAB16;

LAB17:    t2 = (t0 + 7048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)43);
    if (t5 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(199, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 4192U);
    t7 = (t0 + 10200);
    t8 = (t0 + 19096U);
    t9 = (t0 + 7288U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(200, ng0);
    t2 = (t0 + 7288U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    t41 = nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t5);
    t2 = (t0 + 7408U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((unsigned char *)t2) = t41;
    xsi_set_current_line(201, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 10392);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(202, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 7048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(204, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 4352U);
    t7 = (t0 + 10264);
    t8 = (t0 + 19112U);
    t9 = (t0 + 7288U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB33;

LAB35:
LAB34:    xsi_set_current_line(210, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 7048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(212, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 4512U);
    t7 = (t0 + 10328);
    t8 = (t0 + 19128U);
    t9 = (t0 + 7288U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(213, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB38;

LAB40:
LAB39:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 7048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 5632U);
    t7 = (t0 + 10456);
    t8 = (t0 + 19192U);
    t9 = (t0 + 7288U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 7288U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    t41 = nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_9052813945161223267_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t5);
    t2 = (t0 + 7528U);
    t6 = *((char **)t2);
    t2 = (t6 + 0);
    *((unsigned char *)t2) = t41;
    xsi_set_current_line(222, ng0);
    t2 = (t0 + 7528U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 10520);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    xsi_set_current_line(226, ng0);

LAB43:    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 4872U);
    t6 = *((char **)t2);
    t5 = *((unsigned char *)t6);
    t41 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t42 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t41);
    t2 = (t0 + 7528U);
    t7 = *((char **)t2);
    t43 = *((unsigned char *)t7);
    t2 = (t0 + 5992U);
    t8 = *((char **)t2);
    t44 = *((unsigned char *)t8);
    t45 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t44);
    t46 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t43, t45);
    t47 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t42, t46);
    t48 = (t47 == (unsigned char)3);
    if (t48 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 10392);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 10520);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 7048U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 7048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)46);
    if (t5 != 0)
        goto LAB47;

LAB49:    t2 = (t0 + 7048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)44);
    if (t5 != 0)
        goto LAB78;

LAB79:    xsi_set_current_line(246, ng0);
    if ((unsigned char)0 == 0)
        goto LAB80;

LAB81:
LAB48:
LAB14:    xsi_set_current_line(252, ng0);
    t2 = (t0 + 8136U);
    xsi_access_variable_deallocate(t2);
    goto LAB8;

LAB10:;
LAB13:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 9184);
    t6 = (t0 + 8136U);
    t7 = (t0 + 7048U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(170, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 6928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(171, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(172, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 6928U);
    t6 = *((char **)t3);
    t10 = *((int *)t6);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, t10);
    goto LAB14;

LAB16:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 9184);
    t6 = (t0 + 8136U);
    t7 = (t0 + 7048U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(177, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 6928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(178, ng0);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t13 = (1 * t12);
    t4 = (t11 < t13);
    if (t4 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(181, ng0);
    t11 = xsi_get_sim_current_time();
    t2 = (t0 + 6928U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t12 = (1 * 10000LL);
    t13 = (t10 * t12);
    t4 = (t11 < t13);
    if (t4 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB14;

LAB18:    t2 = (t0 + 19760);
    t6 = (t0 + 19778);
    t9 = ((STD_STANDARD) + 984);
    t15 = (t0 + 18952U);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 59;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t10 = (59 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t19;
    t8 = xsi_base_array_concat(t8, t14, t9, (char)97, t2, t15, (char)97, t6, t16, (char)101);
    t18 = ((STD_STANDARD) + 384);
    t21 = (t0 + 6928U);
    t22 = *((char **)t21);
    t23 = *((int *)t22);
    t21 = xsi_int_to_mem(t23);
    t24 = xsi_string_variable_get_image(t20, t18, t21);
    t27 = ((STD_STANDARD) + 984);
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t8, t14, (char)97, t24, t20, (char)101);
    t28 = (t0 + 19837);
    t32 = ((STD_STANDARD) + 984);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 1;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 1);
    t19 = (t36 * 1);
    t19 = (t19 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t19;
    t30 = xsi_base_array_concat(t30, t31, t32, (char)97, t25, t26, (char)97, t28, t33, (char)101);
    t19 = (18U + 59U);
    t35 = (t20 + 12U);
    t37 = *((unsigned int *)t35);
    t38 = (t19 + t37);
    t39 = (t38 + 3U);
    xsi_report(t30, t39, (unsigned char)1);
    goto LAB19;

LAB20:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(184, ng0);
    t2 = (t0 + 6928U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t13 = xsi_get_sim_current_time();
    t40 = (t12 - t13);
    t2 = (t0 + 9184);
    xsi_process_wait(t2, t40);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:    xsi_set_current_line(185, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB21;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 9184);
    t6 = (t0 + 8136U);
    t7 = (t0 + 7048U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(191, ng0);
    t2 = (t0 + 9184);
    t3 = (t0 + 8136U);
    t6 = (t0 + 6928U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418(t0, t2);
    xsi_set_current_line(193, ng0);
    t2 = (t0 + 6928U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 9184);
    xsi_process_wait(t2, t12);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB29:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB14;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    xsi_set_current_line(206, ng0);
    t2 = (t0 + 7288U);
    t6 = *((char **)t2);
    t41 = *((unsigned char *)t6);
    t42 = (!(t41));
    if (t42 == 0)
        goto LAB36;

LAB37:    goto LAB34;

LAB36:    t2 = (t0 + 19840);
    t8 = (t0 + 19858);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t0 + 18952U);
    t21 = (t16 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 39;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t10 = (39 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t19;
    t15 = xsi_base_array_concat(t15, t14, t17, (char)97, t2, t18, (char)97, t8, t16, (char)101);
    t19 = (18U + 39U);
    xsi_report(t15, t19, (unsigned char)1);
    goto LAB37;

LAB38:    xsi_set_current_line(214, ng0);
    t2 = (t0 + 7288U);
    t6 = *((char **)t2);
    t41 = *((unsigned char *)t6);
    t42 = (!(t41));
    if (t42 == 0)
        goto LAB41;

LAB42:    goto LAB39;

LAB41:    t2 = (t0 + 19897);
    t8 = (t0 + 19915);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t0 + 18952U);
    t21 = (t16 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 1;
    t22 = (t21 + 4U);
    *((int *)t22) = 51;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t10 = (51 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t19;
    t15 = xsi_base_array_concat(t15, t14, t17, (char)97, t2, t18, (char)97, t8, t16, (char)101);
    t19 = (18U + 51U);
    xsi_report(t15, t19, (unsigned char)1);
    goto LAB42;

LAB44:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    goto LAB43;

LAB45:;
LAB47:    xsi_set_current_line(235, ng0);

LAB50:    t2 = (t0 + 7408U);
    t6 = *((char **)t2);
    t41 = *((unsigned char *)t6);
    t2 = (t0 + 7528U);
    t7 = *((char **)t2);
    t42 = *((unsigned char *)t7);
    t43 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t41, t42);
    t44 = (t43 == (unsigned char)3);
    if (t44 != 0)
        goto LAB51;

LAB53:    goto LAB48;

LAB51:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 9184);
    nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418(t0, t2, 1);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 5512U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t41 = (t5 == (unsigned char)3);
    if (t41 == 1)
        goto LAB57;

LAB58:    t4 = (unsigned char)0;

LAB59:    if (t4 != 0)
        goto LAB54;

LAB56:
LAB55:    xsi_set_current_line(240, ng0);
    t2 = (t0 + 6632U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t41 = (t5 == (unsigned char)3);
    if (t41 == 1)
        goto LAB69;

LAB70:    t4 = (unsigned char)0;

LAB71:    if (t4 != 0)
        goto LAB66;

LAB68:
LAB67:    goto LAB50;

LAB52:;
LAB54:    xsi_set_current_line(238, ng0);
    t9 = (t0 + 7408U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = (unsigned char)2;
    goto LAB55;

LAB57:    t2 = (t0 + 5032U);
    t6 = *((char **)t2);
    t2 = (t0 + 4232U);
    t7 = *((char **)t2);
    t42 = 1;
    if (32U == 32U)
        goto LAB60;

LAB61:    t42 = 0;

LAB62:    t4 = t42;
    goto LAB59;

LAB60:    t19 = 0;

LAB63:    if (t19 < 32U)
        goto LAB64;
    else
        goto LAB62;

LAB64:    t2 = (t6 + t19);
    t8 = (t7 + t19);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB61;

LAB65:    t19 = (t19 + 1);
    goto LAB63;

LAB66:    xsi_set_current_line(241, ng0);
    t9 = (t0 + 7528U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    *((unsigned char *)t9) = (unsigned char)2;
    goto LAB67;

LAB69:    t2 = (t0 + 6152U);
    t6 = *((char **)t2);
    t2 = (t0 + 5672U);
    t7 = *((char **)t2);
    t42 = 1;
    if (32U == 32U)
        goto LAB72;

LAB73:    t42 = 0;

LAB74:    t4 = t42;
    goto LAB71;

LAB72:    t19 = 0;

LAB75:    if (t19 < 32U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t2 = (t6 + t19);
    t8 = (t7 + t19);
    if (*((unsigned char *)t2) != *((unsigned char *)t8))
        goto LAB73;

LAB77:    t19 = (t19 + 1);
    goto LAB75;

LAB78:    goto LAB48;

LAB80:    t2 = (t0 + 19966);
    t7 = (t0 + 19984);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 18952U);
    t18 = (t16 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = 1;
    t21 = (t18 + 4U);
    *((int *)t21) = 41;
    t21 = (t18 + 8U);
    *((int *)t21) = 1;
    t10 = (41 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t19;
    t9 = xsi_base_array_concat(t9, t14, t15, (char)97, t2, t17, (char)97, t7, t16, (char)101);
    t19 = (18U + 41U);
    xsi_report(t9, t19, (unsigned char)3);
    goto LAB81;

LAB82:    goto LAB2;

LAB83:    goto LAB82;

LAB85:    goto LAB83;

}

char *nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16134194175163265278_1413503434(char *t1, char *t2, char *t3)
{
    char t5[24];
    char t6[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    char *t27;
    char *t28;
    int t29;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 1);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t5 + 4U);
    t11 = (t3 != 0);
    if (t11 == 1)
        goto LAB3;

LAB2:    t12 = (t5 + 12U);
    *((char **)t12) = t6;
    t13 = (t1 + 20066);
    t15 = xsi_mem_cmp(t13, t3, 2U);
    if (t15 == 1)
        goto LAB5;

LAB10:    t16 = (t1 + 20068);
    t18 = xsi_mem_cmp(t16, t3, 2U);
    if (t18 == 1)
        goto LAB6;

LAB11:    t19 = (t1 + 20070);
    t21 = xsi_mem_cmp(t19, t3, 2U);
    if (t21 == 1)
        goto LAB7;

LAB12:    t22 = (t1 + 20072);
    t24 = xsi_mem_cmp(t22, t3, 2U);
    if (t24 == 1)
        goto LAB8;

LAB13:
LAB9:    t7 = (t1 + 20096);
    t0 = xsi_get_transient_memory(12U);
    memcpy(t0, t7, 12U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 12;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (12 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    xsi_error(ng5);
    t0 = 0;
    goto LAB1;

LAB5:    t25 = (t1 + 20074);
    t0 = xsi_get_transient_memory(4U);
    memcpy(t0, t25, 4U);
    t27 = (t2 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 1;
    t28 = (t27 + 4U);
    *((int *)t28) = 4;
    t28 = (t27 + 8U);
    *((int *)t28) = 1;
    t29 = (4 - 1);
    t10 = (t29 * 1);
    t10 = (t10 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t10;
    goto LAB1;

LAB6:    t7 = (t1 + 20078);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 6;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB7:    t7 = (t1 + 20084);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 6;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB8:    t7 = (t1 + 20090);
    t0 = xsi_get_transient_memory(6U);
    memcpy(t0, t7, 6U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 6;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (6 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB14:;
LAB15:    goto LAB4;

LAB16:    goto LAB4;

LAB17:    goto LAB4;

LAB18:    goto LAB4;

LAB19:    goto LAB4;

}

static void nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_p_2(char *t0)
{
    char t10[32];
    char t12[16];
    char t14[32];
    char t16[16];
    char t18[16];
    char t23[16];
    char t25[16];
    char t29[16];
    char t32[16];
    char t37[16];
    char t39[16];
    char t43[16];
    char t50[16];
    char t55[16];
    char t57[16];
    char t71[32];
    char t72[32];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t11;
    unsigned int t13;
    char *t15;
    char *t17;
    char *t19;
    char *t20;
    char *t22;
    char *t24;
    char *t26;
    char *t27;
    int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t36;
    char *t38;
    char *t40;
    char *t41;
    int t42;
    int64 t44;
    int64 t45;
    int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t51;
    char *t52;
    char *t54;
    char *t56;
    char *t58;
    char *t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t73;

LAB0:    xsi_set_current_line(279, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 9960);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(280, ng0);
    t3 = (t0 + 5512U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(288, ng0);
    t1 = (t0 + 6632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    xsi_set_current_line(281, ng0);
    t3 = (t0 + 9432);
    t7 = (t0 + 8208U);
    t8 = (t0 + 5032U);
    t9 = *((char **)t8);
    memcpy(t10, t9, 32U);
    t8 = (t0 + 19144U);
    t11 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t3, t7, t10, t8, (unsigned char)0, t11);
    xsi_set_current_line(282, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 8208U);
    t4 = (t0 + 20108);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (4 - 1);
    t13 = (t11 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t1, t3, t4, t12, (unsigned char)0, 0);
    xsi_set_current_line(283, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 8208U);
    t4 = (t0 + 5192U);
    t7 = *((char **)t4);
    memcpy(t14, t7, 32U);
    t4 = (t0 + 19160U);
    t11 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t3, t14, t4, (unsigned char)0, t11);
    xsi_set_current_line(284, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 8208U);
    t4 = (t0 + 20112);
    t8 = (t0 + 5352U);
    t9 = *((char **)t8);
    t8 = nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16134194175163265278_1413503434(t0, t12, t9);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t11 = (2 - 1);
    t13 = (t11 * 1);
    t13 = (t13 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t13;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t4, t18, (char)97, t8, t12, (char)101);
    t20 = (t0 + 20114);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (1 - 1);
    t13 = (t28 * 1);
    t13 = (t13 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t13;
    t22 = xsi_base_array_concat(t22, t23, t24, (char)97, t15, t16, (char)97, t20, t25, (char)101);
    t30 = ((STD_STANDARD) + 984);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)97, t22, t23, (char)99, (unsigned char)9, (char)101);
    t33 = ((STD_STANDARD) + 984);
    t31 = xsi_base_array_concat(t31, t32, t33, (char)97, t27, t29, (char)99, (unsigned char)9, (char)101);
    t34 = (t0 + 20115);
    t38 = ((STD_STANDARD) + 984);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 1;
    t41 = (t40 + 4U);
    *((int *)t41) = 2;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (2 - 1);
    t13 = (t42 * 1);
    t13 = (t13 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t13;
    t36 = xsi_base_array_concat(t36, t37, t38, (char)97, t31, t32, (char)97, t34, t39, (char)101);
    t41 = ((STD_STANDARD) + 384);
    t44 = xsi_get_sim_current_time();
    t45 = (1 * 10000LL);
    t46 = (t44 / t45);
    t47 = xsi_int_to_mem(t46);
    t48 = xsi_string_variable_get_image(t43, t41, t47);
    t51 = ((STD_STANDARD) + 984);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t36, t37, (char)97, t48, t43, (char)101);
    t52 = (t0 + 20117);
    t56 = ((STD_STANDARD) + 984);
    t58 = (t57 + 0U);
    t59 = (t58 + 0U);
    *((int *)t59) = 1;
    t59 = (t58 + 4U);
    *((int *)t59) = 3;
    t59 = (t58 + 8U);
    *((int *)t59) = 1;
    t60 = (3 - 1);
    t13 = (t60 * 1);
    t13 = (t13 + 1);
    t59 = (t58 + 12U);
    *((unsigned int *)t59) = t13;
    t54 = xsi_base_array_concat(t54, t55, t56, (char)97, t49, t50, (char)97, t52, t57, (char)101);
    t59 = (t12 + 12U);
    t13 = *((unsigned int *)t59);
    t13 = (t13 * 1U);
    t61 = (2U + t13);
    t62 = (t61 + 1U);
    t63 = (t62 + 1U);
    t64 = (t63 + 1U);
    t65 = (t64 + 2U);
    t66 = (t43 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t65 + t67);
    t69 = (t68 + 3U);
    t70 = (char *)alloca(t69);
    memcpy(t70, t54, t69);
    std_textio_write7(STD_TEXTIO, t1, t3, t70, t55, (unsigned char)0, 0);
    xsi_set_current_line(286, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 7960U);
    t4 = (t0 + 8208U);
    std_textio_writeline(STD_TEXTIO, t1, t3, t4);
    goto LAB6;

LAB8:    xsi_set_current_line(289, ng0);
    t1 = (t0 + 9432);
    t4 = (t0 + 8208U);
    t7 = (t0 + 6152U);
    t8 = *((char **)t7);
    memcpy(t71, t8, 32U);
    t7 = (t0 + 19208U);
    t11 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t4, t71, t7, (unsigned char)0, t11);
    xsi_set_current_line(290, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 8208U);
    t4 = (t0 + 20120);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 4;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t11 = (4 - 1);
    t13 = (t11 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    std_textio_write7(STD_TEXTIO, t1, t3, t4, t12, (unsigned char)0, 0);
    xsi_set_current_line(291, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 8208U);
    t4 = (t0 + 6312U);
    t7 = *((char **)t4);
    memcpy(t72, t7, 32U);
    t4 = (t0 + 19224U);
    t11 = (32U / 4);
    ieee_p_3564397177_sub_2258168291854845616_91900896(IEEE_P_3564397177, t1, t3, t72, t4, (unsigned char)0, t11);
    xsi_set_current_line(292, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 8208U);
    t4 = (t0 + 20124);
    t8 = (t0 + 6472U);
    t9 = *((char **)t8);
    t8 = nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16134194175163265278_1413503434(t0, t12, t9);
    t17 = ((STD_STANDARD) + 984);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 1;
    t20 = (t19 + 4U);
    *((int *)t20) = 2;
    t20 = (t19 + 8U);
    *((int *)t20) = 1;
    t11 = (2 - 1);
    t13 = (t11 * 1);
    t13 = (t13 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t13;
    t15 = xsi_base_array_concat(t15, t16, t17, (char)97, t4, t18, (char)97, t8, t12, (char)101);
    t20 = (t0 + 20126);
    t24 = ((STD_STANDARD) + 984);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 1;
    t27 = (t26 + 4U);
    *((int *)t27) = 1;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (1 - 1);
    t13 = (t28 * 1);
    t13 = (t13 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t13;
    t22 = xsi_base_array_concat(t22, t23, t24, (char)97, t15, t16, (char)97, t20, t25, (char)101);
    t30 = ((STD_STANDARD) + 984);
    t27 = xsi_base_array_concat(t27, t29, t30, (char)97, t22, t23, (char)99, (unsigned char)9, (char)101);
    t33 = ((STD_STANDARD) + 984);
    t31 = xsi_base_array_concat(t31, t32, t33, (char)97, t27, t29, (char)99, (unsigned char)9, (char)101);
    t34 = (t0 + 20127);
    t38 = ((STD_STANDARD) + 984);
    t40 = (t39 + 0U);
    t41 = (t40 + 0U);
    *((int *)t41) = 1;
    t41 = (t40 + 4U);
    *((int *)t41) = 2;
    t41 = (t40 + 8U);
    *((int *)t41) = 1;
    t42 = (2 - 1);
    t13 = (t42 * 1);
    t13 = (t13 + 1);
    t41 = (t40 + 12U);
    *((unsigned int *)t41) = t13;
    t36 = xsi_base_array_concat(t36, t37, t38, (char)97, t31, t32, (char)97, t34, t39, (char)101);
    t41 = ((STD_STANDARD) + 384);
    t44 = xsi_get_sim_current_time();
    t45 = (1 * 10000LL);
    t46 = (t44 / t45);
    t47 = xsi_int_to_mem(t46);
    t48 = xsi_string_variable_get_image(t43, t41, t47);
    t51 = ((STD_STANDARD) + 984);
    t49 = xsi_base_array_concat(t49, t50, t51, (char)97, t36, t37, (char)97, t48, t43, (char)101);
    t52 = (t0 + 20129);
    t56 = ((STD_STANDARD) + 984);
    t58 = (t57 + 0U);
    t59 = (t58 + 0U);
    *((int *)t59) = 1;
    t59 = (t58 + 4U);
    *((int *)t59) = 3;
    t59 = (t58 + 8U);
    *((int *)t59) = 1;
    t60 = (3 - 1);
    t13 = (t60 * 1);
    t13 = (t13 + 1);
    t59 = (t58 + 12U);
    *((unsigned int *)t59) = t13;
    t54 = xsi_base_array_concat(t54, t55, t56, (char)97, t49, t50, (char)97, t52, t57, (char)101);
    t59 = (t12 + 12U);
    t13 = *((unsigned int *)t59);
    t13 = (t13 * 1U);
    t61 = (2U + t13);
    t62 = (t61 + 1U);
    t63 = (t62 + 1U);
    t64 = (t63 + 1U);
    t65 = (t64 + 2U);
    t66 = (t43 + 12U);
    t67 = *((unsigned int *)t66);
    t68 = (t65 + t67);
    t69 = (t68 + 3U);
    t73 = (char *)alloca(t69);
    memcpy(t73, t54, t69);
    std_textio_write7(STD_TEXTIO, t1, t3, t73, t55, (unsigned char)0, 0);
    xsi_set_current_line(294, ng0);
    t1 = (t0 + 9432);
    t3 = (t0 + 7960U);
    t4 = (t0 + 8208U);
    std_textio_writeline(STD_TEXTIO, t1, t3, t4);
    goto LAB9;

}


extern void nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_init()
{
	static char *pe[] = {(void *)nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_p_0,(void *)nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_p_1,(void *)nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_p_2};
	static char *se[] = {(void *)nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_13891315768110443725_2940256418,(void *)nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16679151566995163314_2940256418,(void *)nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902_sub_16134194175163265278_1413503434};
	xsi_register_didat("nf10_axi_sim_transactor_v1_00_a_a_2645983595_1516540902", "isim/isim_system.sim/nf10_axi_sim_transactor_v1_00_a/a_2645983595_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
