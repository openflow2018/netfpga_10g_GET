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
extern char *STD_STANDARD;
extern char *IEEE_P_2592010699;
static const char *ng2 = "/root/netfpga_10g_GET/lib/hw/std/pcores/nf10_axis_sim_stim_v1_00_a/simhdl/vhdl/nf10_axis_sim_stim.vhd";
extern char *STD_TEXTIO;
extern char *NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(char *, char *, char *, char *, char *);
void nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(char *, char *, char *, char *, unsigned int , unsigned int , char *, char *, char *);


void nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907(char *t0, char *t1)
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

LAB0:    t4 = (t0 + 8680U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 4720);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 8680U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast_port(t9);
    t4 = (t0 + 8696U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 4784);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 8696U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast_port(t9);
    t4 = (t0 + 8712U);
    t5 = (t4 + 12U);
    t6 = *((unsigned int *)t5);
    t6 = (t6 * 1U);
    t7 = xsi_get_transient_memory(t6);
    memset(t7, 0, t6);
    t8 = t7;
    memset(t8, (unsigned char)2, t6);
    t9 = (t0 + 4848);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 8712U);
    t15 = (t14 + 12U);
    t16 = *((unsigned int *)t15);
    t16 = (t16 * 1U);
    memcpy(t13, t7, t16);
    xsi_driver_first_trans_fast_port(t9);
    t4 = (t0 + 4912);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);
    t4 = (t0 + 4976);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t4);

LAB1:    return;
}

void nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(char *t0, char *t1, int t2)
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

static void nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_p_0(char *t0)
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
    char *t41;
    char *t42;

LAB0:    t1 = (t0 + 4336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907(t0, t2);
    xsi_set_current_line(108, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, 10);
    xsi_set_current_line(109, ng2);

LAB4:    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(114, ng2);

LAB8:    t2 = (t0 + 3376U);
    t4 = std_textio_endfile(t2);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(190, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907(t0, t2);
    xsi_set_current_line(191, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 9292);
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
    xsi_set_current_line(192, ng2);
    t2 = (t0 + 4144);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3552U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(193, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 9292);
    t8 = (t0 + 9318);
    t17 = ((STD_STANDARD) + 984);
    t18 = (t0 + 8664U);
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
    t29 = (t0 + 9337);
    t34 = ((STD_STANDARD) + 984);
    t35 = (t33 + 0U);
    t41 = (t35 + 0U);
    *((int *)t41) = 1;
    t41 = (t35 + 4U);
    *((int *)t41) = 4;
    t41 = (t35 + 8U);
    *((int *)t41) = 1;
    t36 = (4 - 1);
    t19 = (t36 * 1);
    t19 = (t19 + 1);
    t41 = (t35 + 12U);
    *((unsigned int *)t41) = t19;
    t32 = xsi_base_array_concat(t32, t31, t34, (char)97, t27, t26, (char)97, t29, t33, (char)101);
    t19 = (26U + 19U);
    t41 = (t20 + 12U);
    t37 = *((unsigned int *)t41);
    t38 = (t19 + t37);
    t39 = (t38 + 4U);
    t42 = (char *)alloca(t39);
    memcpy(t42, t32, t39);
    std_textio_write7(STD_TEXTIO, t2, t3, t42, t31, (unsigned char)0, 0);
    xsi_set_current_line(195, ng2);
    t2 = (t0 + 4144);
    t3 = ((STD_TEXTIO) + 1480U);
    t6 = (t0 + 3552U);
    std_textio_writeline(STD_TEXTIO, t2, t3, t6);
    xsi_set_current_line(196, ng2);

LAB52:    *((char **)t1) = &&LAB53;

LAB1:    return;
LAB5:    xsi_set_current_line(110, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, 1);
    goto LAB4;

LAB6:;
LAB9:    xsi_set_current_line(116, ng2);
    t3 = (t0 + 4144);
    t6 = (t0 + 3376U);
    t7 = (t0 + 3552U);
    std_textio_readline(STD_TEXTIO, t3, t6, t7);
    xsi_set_current_line(117, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t8 = (t0 + 2928U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16923163327624947528_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, t8);
    xsi_set_current_line(118, ng2);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB8;

LAB12:    xsi_set_current_line(121, ng2);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)42);
    if (t5 != 0)
        goto LAB13;

LAB15:    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)64);
    if (t5 != 0)
        goto LAB16;

LAB17:    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)43);
    if (t5 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(151, ng2);
    t2 = (t0 + 4976);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(154, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 1312U);
    t7 = (t0 + 4720);
    t8 = (t0 + 8680U);
    t9 = (t0 + 3048U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(155, ng2);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 == 0)
        goto LAB33;

LAB34:    xsi_set_current_line(158, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(159, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 1472U);
    t7 = (t0 + 4784);
    t8 = (t0 + 8696U);
    t9 = (t0 + 3048U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(160, ng2);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 == 0)
        goto LAB35;

LAB36:    xsi_set_current_line(163, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(164, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 1632U);
    t7 = (t0 + 4848);
    t8 = (t0 + 8712U);
    t9 = (t0 + 3048U);
    t15 = *((char **)t9);
    t9 = (t15 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_17927017279289589510_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6, 0U, 0U, t7, t8, t9);
    xsi_set_current_line(165, ng2);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 == 0)
        goto LAB37;

LAB38:    xsi_set_current_line(168, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2808U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(169, ng2);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)46);
    if (t5 != 0)
        goto LAB39;

LAB41:    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)44);
    if (t5 != 0)
        goto LAB42;

LAB43:    xsi_set_current_line(174, ng2);
    if ((unsigned char)0 == 0)
        goto LAB44;

LAB45:
LAB40:    xsi_set_current_line(178, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, 1);
    xsi_set_current_line(181, ng2);

LAB46:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 != (unsigned char)3);
    if (t5 != 0)
        goto LAB47;

LAB49:
LAB14:    xsi_set_current_line(186, ng2);
    t2 = (t0 + 3552U);
    xsi_access_variable_deallocate(t2);
    goto LAB8;

LAB10:;
LAB13:    xsi_set_current_line(122, ng2);
    t2 = (t0 + 4144);
    t6 = (t0 + 3552U);
    t7 = (t0 + 2808U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(123, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2688U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(124, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907(t0, t2);
    xsi_set_current_line(125, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 2688U);
    t6 = *((char **)t3);
    t10 = *((int *)t6);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, t10);
    goto LAB14;

LAB16:    xsi_set_current_line(129, ng2);
    t2 = (t0 + 4144);
    t6 = (t0 + 3552U);
    t7 = (t0 + 2808U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(130, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2688U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(131, ng2);
    t11 = xsi_get_sim_current_time();
    t12 = (1 * 10000LL);
    t13 = (1 * t12);
    t4 = (t11 < t13);
    if (t4 == 0)
        goto LAB18;

LAB19:    xsi_set_current_line(134, ng2);
    t11 = xsi_get_sim_current_time();
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t12 = (1 * 10000LL);
    t13 = (t10 * t12);
    t4 = (t11 < t13);
    if (t4 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB14;

LAB18:    t2 = (t0 + 8879);
    t6 = (t0 + 8905);
    t9 = ((STD_STANDARD) + 984);
    t15 = (t0 + 8664U);
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
    t21 = (t0 + 2688U);
    t22 = *((char **)t21);
    t23 = *((int *)t22);
    t21 = xsi_int_to_mem(t23);
    t24 = xsi_string_variable_get_image(t20, t18, t21);
    t27 = ((STD_STANDARD) + 984);
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t8, t14, (char)97, t24, t20, (char)101);
    t28 = (t0 + 8964);
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
    t19 = (26U + 59U);
    t35 = (t20 + 12U);
    t37 = *((unsigned int *)t35);
    t38 = (t19 + t37);
    t39 = (t38 + 3U);
    xsi_report(t30, t39, (unsigned char)1);
    goto LAB19;

LAB20:    xsi_set_current_line(136, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907(t0, t2);
    xsi_set_current_line(137, ng2);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t13 = xsi_get_sim_current_time();
    t40 = (t12 - t13);
    t2 = (t0 + 4144);
    xsi_process_wait(t2, t40);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB23:    xsi_set_current_line(138, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, 1);
    goto LAB21;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(143, ng2);
    t2 = (t0 + 4144);
    t6 = (t0 + 3552U);
    t7 = (t0 + 2808U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16237956377822765066_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t6, t7);
    xsi_set_current_line(144, ng2);
    t2 = (t0 + 4144);
    t3 = (t0 + 3552U);
    t6 = (t0 + 2688U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    nf10_axis_sim_pkg_v1_00_a_p_2797826550_sub_16377608295430327215_355431523(NF10_AXIS_SIM_PKG_V1_00_A_P_2797826550, t2, t3, t6);
    xsi_set_current_line(145, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907(t0, t2);
    xsi_set_current_line(146, ng2);
    t2 = (t0 + 2688U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (1 * 10000LL);
    t12 = (t10 * t11);
    t2 = (t0 + 4144);
    xsi_process_wait(t2, t12);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB29:    xsi_set_current_line(147, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, 1);
    goto LAB14;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    t2 = (t0 + 8967);
    t7 = (t0 + 8993);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 8664U);
    t18 = (t16 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = 1;
    t21 = (t18 + 4U);
    *((int *)t21) = 60;
    t21 = (t18 + 8U);
    *((int *)t21) = 1;
    t10 = (60 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t19;
    t9 = xsi_base_array_concat(t9, t14, t15, (char)97, t2, t17, (char)97, t7, t16, (char)101);
    t19 = (26U + 60U);
    xsi_report(t9, t19, (unsigned char)3);
    goto LAB34;

LAB35:    t2 = (t0 + 9053);
    t7 = (t0 + 9079);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 8664U);
    t18 = (t16 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = 1;
    t21 = (t18 + 4U);
    *((int *)t21) = 60;
    t21 = (t18 + 8U);
    *((int *)t21) = 1;
    t10 = (60 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t19;
    t9 = xsi_base_array_concat(t9, t14, t15, (char)97, t2, t17, (char)97, t7, t16, (char)101);
    t19 = (26U + 60U);
    xsi_report(t9, t19, (unsigned char)3);
    goto LAB36;

LAB37:    t2 = (t0 + 9139);
    t7 = (t0 + 9165);
    t15 = ((STD_STANDARD) + 984);
    t17 = (t0 + 8664U);
    t18 = (t16 + 0U);
    t21 = (t18 + 0U);
    *((int *)t21) = 1;
    t21 = (t18 + 4U);
    *((int *)t21) = 60;
    t21 = (t18 + 8U);
    *((int *)t21) = 1;
    t10 = (60 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t21 = (t18 + 12U);
    *((unsigned int *)t21) = t19;
    t9 = xsi_base_array_concat(t9, t14, t15, (char)97, t2, t17, (char)97, t7, t16, (char)101);
    t19 = (26U + 60U);
    xsi_report(t9, t19, (unsigned char)3);
    goto LAB38;

LAB39:    xsi_set_current_line(170, ng2);
    t2 = (t0 + 4912);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB40;

LAB42:    xsi_set_current_line(172, ng2);
    t2 = (t0 + 4912);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB40;

LAB44:    t2 = (t0 + 9225);
    t6 = (t0 + 9251);
    t9 = ((STD_STANDARD) + 984);
    t15 = (t0 + 8664U);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 1;
    t18 = (t17 + 4U);
    *((int *)t18) = 41;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t10 = (41 - 1);
    t19 = (t10 * 1);
    t19 = (t19 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t19;
    t8 = xsi_base_array_concat(t8, t14, t9, (char)97, t2, t15, (char)97, t6, t16, (char)101);
    t19 = (26U + 41U);
    xsi_report(t8, t19, (unsigned char)3);
    goto LAB45;

LAB47:    xsi_set_current_line(182, ng2);
    t2 = (t0 + 4144);
    nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907(t0, t2, 1);
    goto LAB46;

LAB48:;
LAB50:    goto LAB2;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

}


extern void nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_init()
{
	static char *pe[] = {(void *)nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_p_0};
	static char *se[] = {(void *)nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_13891315768110443725_13010239736327957907,(void *)nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902_sub_16679151566995163314_13010239736327957907};
	xsi_register_didat("nf10_axis_sim_stim_v1_00_a_a_1845250493_1516540902", "isim/isim_system.sim/nf10_axis_sim_stim_v1_00_a/a_1845250493_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
