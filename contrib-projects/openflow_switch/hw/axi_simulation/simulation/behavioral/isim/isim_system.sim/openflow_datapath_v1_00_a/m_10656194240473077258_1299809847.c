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
static const char *ng0 = "/root/netfpga_10g/contrib-projects/openflow_switch/hw/pcores/openflow_datapath_v1_00_a/hdl/verilog/lu_entry_composer.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {8U, 0U};
static int ng8[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};



static void Always_136_0(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 12512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 15312);
    *((int *)t2) = 1;
    t3 = (t0 + 12544);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(136, ng0);

LAB5:    xsi_set_current_line(137, ng0);
    t4 = (t0 + 8400);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 8560);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 8720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8880);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 8720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1152);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(140, ng0);

LAB12:    xsi_set_current_line(141, ng0);
    t5 = (t0 + 3680U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t5 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB16;

LAB13:    if (t21 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t9) = 1;

LAB16:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB11;

LAB9:    xsi_set_current_line(147, ng0);

LAB21:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 7760);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t6);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB25;

LAB22:    if (t21 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t9) = 1;

LAB25:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB11;

LAB15:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(141, ng0);

LAB20:    xsi_set_current_line(142, ng0);
    t31 = ((char*)((ng1)));
    t32 = (t0 + 8560);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 8880);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB19;

LAB24:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(148, ng0);

LAB29:    xsi_set_current_line(149, ng0);
    t31 = ((char*)((ng2)));
    t32 = (t0 + 8560);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 8880);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB28;

}

static void Always_156_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 12760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 15328);
    *((int *)t2) = 1;
    t3 = (t0 + 12792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(156, ng0);

LAB5:    xsi_set_current_line(157, ng0);
    t5 = (t0 + 3520U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(161, ng0);

LAB16:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 8560);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8400);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 8880);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(157, ng0);

LAB15:    xsi_set_current_line(158, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 8400);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 8720);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB14;

}

static void Cont_170_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 3840U);
    t3 = *((char **)t2);
    t2 = (t0 + 15552);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 15344);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_171_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 4960U);
    t3 = *((char **)t2);
    t2 = (t0 + 15616);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 1, 1);
    t16 = (t0 + 15360);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_172_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(172, ng0);
    t2 = (t0 + 5440U);
    t3 = *((char **)t2);
    t2 = (t0 + 15680);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 2, 2);
    t16 = (t0 + 15376);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_173_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 13752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);
    t2 = (t0 + 6080U);
    t3 = *((char **)t2);
    t2 = (t0 + 15744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 3, 3);
    t16 = (t0 + 15392);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_175_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 14000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(175, ng0);
    t2 = (t0 + 15408);
    *((int *)t2) = 1;
    t3 = (t0 + 14032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(175, ng0);

LAB5:    xsi_set_current_line(176, ng0);
    t5 = (t0 + 3520U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(179, ng0);

LAB16:    xsi_set_current_line(180, ng0);
    t2 = (t0 + 8240);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10480);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(176, ng0);

LAB15:    xsi_set_current_line(177, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 10480);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_184_7(char *t0)
{
    char t9[8];
    char t39[72];
    char t56[64];
    char t57[8];
    char t58[8];
    char t69[8];
    char t75[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;

LAB0:    t1 = (t0 + 14248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 15424);
    *((int *)t2) = 1;
    t3 = (t0 + 14280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(184, ng0);

LAB5:    xsi_set_current_line(185, ng0);
    t4 = (t0 + 10160);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 10320);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 9040);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9200);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);
    xsi_set_current_line(187, ng0);
    t2 = (t0 + 9360);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9520);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(188, ng0);
    t2 = (t0 + 9680);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 9840);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(189, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 10000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(190, ng0);
    t2 = (t0 + 10640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 10800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(192, ng0);
    t2 = (t0 + 10640);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1560);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(193, ng0);

LAB12:    xsi_set_current_line(194, ng0);
    t5 = (t0 + 4000U);
    t7 = *((char **)t5);
    t5 = (t0 + 9520);
    xsi_vlogvar_assign_value(t5, t7, 0, 0, 16);
    xsi_set_current_line(195, ng0);
    t2 = (t0 + 4160U);
    t3 = *((char **)t2);
    t2 = (t0 + 9840);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8400);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t7 = (t5 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB16;

LAB13:    if (t20 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t9) = 1;

LAB16:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB11;

LAB9:    xsi_set_current_line(363, ng0);

LAB55:    xsi_set_current_line(365, ng0);
    t2 = (t0 + 8240);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t9, 0, 8);
    t10 = (t6 + 4);
    t23 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t23);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t10);
    t19 = *((unsigned int *)t23);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB59;

LAB56:    if (t20 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t9) = 1;

LAB59:    memset(t57, 0, 8);
    t30 = (t9 + 4);
    t25 = *((unsigned int *)t30);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t30) != 0)
        goto LAB62;

LAB63:    t33 = (t57 + 4);
    t34 = *((unsigned int *)t57);
    t35 = *((unsigned int *)t33);
    t36 = (t34 || t35);
    if (t36 > 0)
        goto LAB64;

LAB65:    memcpy(t75, t57, 8);

LAB66:    t54 = (t75 + 4);
    t102 = *((unsigned int *)t54);
    t103 = (~(t102));
    t104 = *((unsigned int *)t75);
    t105 = (t104 & t103);
    t106 = (t105 != 0);
    if (t106 > 0)
        goto LAB78;

LAB79:
LAB80:    goto LAB11;

LAB15:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(196, ng0);

LAB20:    xsi_set_current_line(197, ng0);
    t30 = (t0 + 7360U);
    t31 = *((char **)t30);

LAB21:    t30 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t31, 4, t30, 4);
    if (t8 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t8 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t8 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t31, 4, t2, 4);
    if (t8 == 1)
        goto LAB28;

LAB29:
LAB30:    goto LAB19;

LAB22:    xsi_set_current_line(198, ng0);

LAB31:    xsi_set_current_line(199, ng0);
    t32 = (t0 + 880);
    t33 = *((char **)t32);
    t32 = (t33 + 4);
    t34 = *((unsigned int *)t32);
    t35 = (~(t34));
    t36 = *((unsigned int *)t33);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(218, ng0);

LAB36:    xsi_set_current_line(219, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng4)));
    t10 = (t0 + 4640U);
    t23 = *((char **)t10);
    t10 = (t0 + 4320U);
    t24 = *((char **)t10);
    t10 = (t0 + 4480U);
    t30 = *((char **)t10);
    t10 = (t0 + 4160U);
    t32 = *((char **)t10);
    t10 = ((char*)((ng4)));
    t33 = (t0 + 4800U);
    t40 = *((char **)t33);
    t33 = ((char*)((ng4)));
    xsi_vlogtype_concat(t56, 256, 256, 12U, t33, 8, t40, 16, t10, 8, t32, 8, t30, 48, t24, 48, t23, 16, t7, 32, t6, 32, t5, 8, t3, 16, t2, 16);
    t41 = (t0 + 9200);
    xsi_vlogvar_assign_value(t41, t56, 0, 0, 256);

LAB34:    xsi_set_current_line(234, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(235, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 10800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB30;

LAB24:    xsi_set_current_line(238, ng0);

LAB37:    xsi_set_current_line(239, ng0);
    t3 = (t0 + 880);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(258, ng0);

LAB42:    xsi_set_current_line(260, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t5 = ((char*)((ng4)));
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng4)));
    t10 = (t0 + 4640U);
    t23 = *((char **)t10);
    t10 = (t0 + 4320U);
    t24 = *((char **)t10);
    t10 = (t0 + 4480U);
    t30 = *((char **)t10);
    t10 = (t0 + 4160U);
    t32 = *((char **)t10);
    t10 = ((char*)((ng4)));
    t33 = (t0 + 4800U);
    t40 = *((char **)t33);
    t33 = ((char*)((ng4)));
    xsi_vlogtype_concat(t56, 256, 256, 12U, t33, 8, t40, 16, t10, 8, t32, 8, t30, 48, t24, 48, t23, 16, t7, 32, t6, 32, t5, 8, t3, 16, t2, 16);
    t41 = (t0 + 9200);
    xsi_vlogvar_assign_value(t41, t56, 0, 0, 256);

LAB40:    xsi_set_current_line(275, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(276, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(277, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 10800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB30;

LAB26:    xsi_set_current_line(279, ng0);

LAB43:    xsi_set_current_line(280, ng0);
    t3 = (t0 + 880);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(299, ng0);

LAB48:    xsi_set_current_line(300, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng4)));
    t5 = (t0 + 5600U);
    t6 = *((char **)t5);
    t5 = (t0 + 5920U);
    t7 = *((char **)t5);
    t5 = (t0 + 5760U);
    t10 = *((char **)t5);
    t5 = (t0 + 4640U);
    t23 = *((char **)t5);
    t5 = (t0 + 4320U);
    t24 = *((char **)t5);
    t5 = (t0 + 4480U);
    t30 = *((char **)t5);
    t5 = (t0 + 4160U);
    t32 = *((char **)t5);
    t5 = ((char*)((ng4)));
    t33 = (t0 + 4800U);
    t40 = *((char **)t33);
    t33 = ((char*)((ng4)));
    xsi_vlogtype_concat(t56, 256, 256, 12U, t33, 8, t40, 16, t5, 8, t32, 8, t30, 48, t24, 48, t23, 16, t10, 32, t7, 32, t6, 8, t3, 16, t2, 16);
    t41 = (t0 + 9200);
    xsi_vlogvar_assign_value(t41, t56, 0, 0, 256);

LAB46:    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(316, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(317, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 10800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB30;

LAB28:    xsi_set_current_line(319, ng0);

LAB49:    xsi_set_current_line(320, ng0);
    t3 = (t0 + 880);
    t5 = *((char **)t3);
    t3 = (t5 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t5);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(339, ng0);

LAB54:    xsi_set_current_line(340, ng0);
    t2 = (t0 + 7040U);
    t3 = *((char **)t2);
    t2 = (t0 + 6880U);
    t5 = *((char **)t2);
    t2 = (t0 + 6400U);
    t6 = *((char **)t2);
    t2 = (t0 + 6720U);
    t7 = *((char **)t2);
    t2 = (t0 + 6560U);
    t10 = *((char **)t2);
    t2 = (t0 + 4640U);
    t23 = *((char **)t2);
    t2 = (t0 + 4320U);
    t24 = *((char **)t2);
    t2 = (t0 + 4480U);
    t30 = *((char **)t2);
    t2 = (t0 + 4160U);
    t32 = *((char **)t2);
    t2 = ((char*)((ng4)));
    t33 = (t0 + 6240U);
    t40 = *((char **)t33);
    t33 = (t0 + 4800U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng4)));
    xsi_vlogtype_concat(t56, 256, 256, 13U, t33, 8, t41, 16, t40, 6, t2, 2, t32, 8, t30, 48, t24, 48, t23, 16, t10, 32, t7, 32, t6, 8, t5, 16, t3, 16);
    t42 = (t0 + 9200);
    xsi_vlogvar_assign_value(t42, t56, 0, 0, 256);

LAB52:    xsi_set_current_line(355, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(356, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 10320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(357, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 10800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB30;

LAB32:    xsi_set_current_line(199, ng0);

LAB35:    xsi_set_current_line(200, ng0);
    t40 = ((char*)((ng4)));
    t41 = ((char*)((ng4)));
    t42 = ((char*)((ng4)));
    t43 = ((char*)((ng4)));
    t44 = ((char*)((ng4)));
    t45 = (t0 + 4640U);
    t46 = *((char **)t45);
    t45 = (t0 + 4320U);
    t47 = *((char **)t45);
    t45 = (t0 + 4480U);
    t48 = *((char **)t45);
    t45 = (t0 + 4160U);
    t49 = *((char **)t45);
    t45 = ((char*)((ng4)));
    t50 = (t0 + 4800U);
    t51 = *((char **)t50);
    t50 = ((char*)((ng4)));
    t52 = ((char*)((ng4)));
    t53 = ((char*)((ng4)));
    t54 = ((char*)((ng4)));
    xsi_vlogtype_concat(t39, 288, 288, 15U, t54, 9, t53, 3, t52, 20, t50, 8, t51, 16, t45, 8, t49, 8, t48, 48, t47, 48, t46, 16, t44, 32, t43, 32, t42, 8, t41, 16, t40, 16);
    t55 = (t0 + 9200);
    xsi_vlogvar_assign_value(t55, t39, 0, 0, 256);
    goto LAB34;

LAB38:    xsi_set_current_line(239, ng0);

LAB41:    xsi_set_current_line(240, ng0);
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng4)));
    t10 = ((char*)((ng4)));
    t23 = ((char*)((ng4)));
    t24 = ((char*)((ng4)));
    t30 = (t0 + 4640U);
    t32 = *((char **)t30);
    t30 = (t0 + 4320U);
    t33 = *((char **)t30);
    t30 = (t0 + 4480U);
    t40 = *((char **)t30);
    t30 = (t0 + 4160U);
    t41 = *((char **)t30);
    t30 = ((char*)((ng4)));
    t42 = (t0 + 4800U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    t44 = (t0 + 5120U);
    t45 = *((char **)t44);
    t44 = (t0 + 5280U);
    t46 = *((char **)t44);
    t44 = ((char*)((ng4)));
    xsi_vlogtype_concat(t39, 288, 288, 15U, t44, 9, t46, 3, t45, 20, t42, 8, t43, 16, t30, 8, t41, 8, t40, 48, t33, 48, t32, 16, t24, 32, t23, 32, t10, 8, t7, 16, t6, 16);
    t47 = (t0 + 9200);
    xsi_vlogvar_assign_value(t47, t39, 0, 0, 256);
    goto LAB40;

LAB44:    xsi_set_current_line(280, ng0);

LAB47:    xsi_set_current_line(281, ng0);
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng4)));
    t10 = (t0 + 5600U);
    t23 = *((char **)t10);
    t10 = (t0 + 5920U);
    t24 = *((char **)t10);
    t10 = (t0 + 5760U);
    t30 = *((char **)t10);
    t10 = (t0 + 4640U);
    t32 = *((char **)t10);
    t10 = (t0 + 4320U);
    t33 = *((char **)t10);
    t10 = (t0 + 4480U);
    t40 = *((char **)t10);
    t10 = (t0 + 4160U);
    t41 = *((char **)t10);
    t10 = ((char*)((ng4)));
    t42 = (t0 + 4800U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng4)));
    t44 = ((char*)((ng4)));
    t45 = ((char*)((ng4)));
    t46 = ((char*)((ng4)));
    xsi_vlogtype_concat(t39, 288, 288, 15U, t46, 9, t45, 3, t44, 20, t42, 8, t43, 16, t10, 8, t41, 8, t40, 48, t33, 48, t32, 16, t30, 32, t24, 32, t23, 8, t7, 16, t6, 16);
    t47 = (t0 + 9200);
    xsi_vlogvar_assign_value(t47, t39, 0, 0, 256);
    goto LAB46;

LAB50:    xsi_set_current_line(320, ng0);

LAB53:    xsi_set_current_line(321, ng0);
    t6 = (t0 + 7040U);
    t7 = *((char **)t6);
    t6 = (t0 + 6880U);
    t10 = *((char **)t6);
    t6 = (t0 + 6400U);
    t23 = *((char **)t6);
    t6 = (t0 + 6720U);
    t24 = *((char **)t6);
    t6 = (t0 + 6560U);
    t30 = *((char **)t6);
    t6 = (t0 + 4640U);
    t32 = *((char **)t6);
    t6 = (t0 + 4320U);
    t33 = *((char **)t6);
    t6 = (t0 + 4480U);
    t40 = *((char **)t6);
    t6 = (t0 + 4160U);
    t41 = *((char **)t6);
    t6 = ((char*)((ng4)));
    t42 = (t0 + 6240U);
    t43 = *((char **)t42);
    t42 = (t0 + 4800U);
    t44 = *((char **)t42);
    t42 = ((char*)((ng4)));
    t45 = ((char*)((ng4)));
    t46 = ((char*)((ng4)));
    t47 = ((char*)((ng4)));
    xsi_vlogtype_concat(t39, 288, 288, 16U, t47, 9, t46, 3, t45, 20, t42, 8, t44, 16, t43, 6, t6, 2, t41, 8, t40, 48, t33, 48, t32, 16, t30, 32, t24, 32, t23, 8, t10, 16, t7, 16);
    t48 = (t0 + 9200);
    xsi_vlogvar_assign_value(t48, t39, 0, 0, 256);
    goto LAB52;

LAB58:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB59;

LAB60:    *((unsigned int *)t57) = 1;
    goto LAB63;

LAB62:    t32 = (t57 + 4);
    *((unsigned int *)t57) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB63;

LAB64:    t40 = (t0 + 10480);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = ((char*)((ng2)));
    memset(t58, 0, 8);
    t44 = (t42 + 4);
    t45 = (t43 + 4);
    t37 = *((unsigned int *)t42);
    t38 = *((unsigned int *)t43);
    t59 = (t37 ^ t38);
    t60 = *((unsigned int *)t44);
    t61 = *((unsigned int *)t45);
    t62 = (t60 ^ t61);
    t63 = (t59 | t62);
    t64 = *((unsigned int *)t44);
    t65 = *((unsigned int *)t45);
    t66 = (t64 | t65);
    t67 = (~(t66));
    t68 = (t63 & t67);
    if (t68 != 0)
        goto LAB70;

LAB67:    if (t66 != 0)
        goto LAB69;

LAB68:    *((unsigned int *)t58) = 1;

LAB70:    memset(t69, 0, 8);
    t47 = (t58 + 4);
    t70 = *((unsigned int *)t47);
    t71 = (~(t70));
    t72 = *((unsigned int *)t58);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t47) != 0)
        goto LAB73;

LAB74:    t76 = *((unsigned int *)t57);
    t77 = *((unsigned int *)t69);
    t78 = (t76 & t77);
    *((unsigned int *)t75) = t78;
    t49 = (t57 + 4);
    t50 = (t69 + 4);
    t51 = (t75 + 4);
    t79 = *((unsigned int *)t49);
    t80 = *((unsigned int *)t50);
    t81 = (t79 | t80);
    *((unsigned int *)t51) = t81;
    t82 = *((unsigned int *)t51);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB66;

LAB69:    t46 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB70;

LAB71:    *((unsigned int *)t69) = 1;
    goto LAB74;

LAB73:    t48 = (t69 + 4);
    *((unsigned int *)t69) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB74;

LAB75:    t84 = *((unsigned int *)t75);
    t85 = *((unsigned int *)t51);
    *((unsigned int *)t75) = (t84 | t85);
    t52 = (t57 + 4);
    t53 = (t69 + 4);
    t86 = *((unsigned int *)t57);
    t87 = (~(t86));
    t88 = *((unsigned int *)t52);
    t89 = (~(t88));
    t90 = *((unsigned int *)t69);
    t91 = (~(t90));
    t92 = *((unsigned int *)t53);
    t93 = (~(t92));
    t94 = (t87 & t89);
    t95 = (t91 & t93);
    t96 = (~(t94));
    t97 = (~(t95));
    t98 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t98 & t96);
    t99 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t99 & t97);
    t100 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t100 & t96);
    t101 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t101 & t97);
    goto LAB77;

LAB78:    xsi_set_current_line(365, ng0);

LAB81:    xsi_set_current_line(366, ng0);
    t55 = ((char*)((ng2)));
    t107 = (t0 + 10320);
    xsi_vlogvar_assign_value(t107, t55, 0, 0, 1);
    xsi_set_current_line(367, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 10800);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB80;

}

static void Always_373_8(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 14496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(373, ng0);
    t2 = (t0 + 15440);
    *((int *)t2) = 1;
    t3 = (t0 + 14528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(373, ng0);

LAB5:    xsi_set_current_line(374, ng0);
    t5 = (t0 + 3520U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(382, ng0);

LAB16:    xsi_set_current_line(383, ng0);
    t2 = (t0 + 10320);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10160);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(384, ng0);
    t2 = (t0 + 9200);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 256, 0LL);
    xsi_set_current_line(385, ng0);
    t2 = (t0 + 9520);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = (t0 + 9840);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 9680);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    xsi_set_current_line(387, ng0);
    t2 = (t0 + 10000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(388, ng0);
    t2 = (t0 + 10800);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 10640);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(374, ng0);

LAB15:    xsi_set_current_line(375, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 10160);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(376, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 9040);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 256, 0LL);
    xsi_set_current_line(377, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9360);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(378, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 9680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    xsi_set_current_line(379, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 7760);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(380, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 10640);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB14;

}

static void Always_393_9(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 14744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(393, ng0);
    t2 = (t0 + 15456);
    *((int *)t2) = 1;
    t3 = (t0 + 14776);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(393, ng0);

LAB5:    xsi_set_current_line(394, ng0);
    t4 = (t0 + 8240);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 10960);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(395, ng0);
    t2 = (t0 + 7920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11120);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 256);
    xsi_set_current_line(396, ng0);
    t2 = (t0 + 8080);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(397, ng0);
    t2 = (t0 + 11440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 11600);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 2);
    xsi_set_current_line(398, ng0);
    t2 = (t0 + 11440);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 1968);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(399, ng0);

LAB12:    xsi_set_current_line(400, ng0);
    t5 = (t0 + 10160);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t9 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB16;

LAB13:    if (t23 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t11) = 1;

LAB16:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB17;

LAB18:
LAB19:    goto LAB11;

LAB9:    xsi_set_current_line(408, ng0);

LAB21:    xsi_set_current_line(409, ng0);
    t2 = (t0 + 7200U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t6 = (t5 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t6);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB25;

LAB22:    if (t23 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t11) = 1;

LAB25:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB11;

LAB15:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(400, ng0);

LAB20:    xsi_set_current_line(401, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 10960);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 1);
    xsi_set_current_line(402, ng0);
    t2 = (t0 + 9040);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 11120);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 256);
    xsi_set_current_line(403, ng0);
    t2 = (t0 + 9360);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 11280);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 16);
    xsi_set_current_line(404, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 11600);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB19;

LAB24:    t9 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(409, ng0);

LAB29:    xsi_set_current_line(410, ng0);
    t12 = ((char*)((ng2)));
    t13 = (t0 + 10960);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(411, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 11600);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    goto LAB28;

}

static void Always_417_10(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 14992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(417, ng0);
    t2 = (t0 + 15472);
    *((int *)t2) = 1;
    t3 = (t0 + 15024);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(417, ng0);

LAB5:    xsi_set_current_line(418, ng0);
    t5 = (t0 + 3520U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(424, ng0);

LAB16:    xsi_set_current_line(425, ng0);
    t2 = (t0 + 10960);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(426, ng0);
    t2 = (t0 + 11120);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 256, 0LL);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 11280);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(428, ng0);
    t2 = (t0 + 11600);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 11440);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);

LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(418, ng0);

LAB15:    xsi_set_current_line(419, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 8240);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 1, 0LL);
    xsi_set_current_line(420, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 7920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 256, 0LL);
    xsi_set_current_line(421, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 8080);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(422, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 11440);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    goto LAB14;

}


extern void openflow_datapath_v1_00_a_m_10656194240473077258_1299809847_init()
{
	static char *pe[] = {(void *)Always_136_0,(void *)Always_156_1,(void *)Cont_170_2,(void *)Cont_171_3,(void *)Cont_172_4,(void *)Cont_173_5,(void *)Always_175_6,(void *)Always_184_7,(void *)Always_373_8,(void *)Always_393_9,(void *)Always_417_10};
	xsi_register_didat("openflow_datapath_v1_00_a_m_10656194240473077258_1299809847", "isim/isim_system.sim/openflow_datapath_v1_00_a/m_10656194240473077258_1299809847.didat");
	xsi_register_executes(pe);
}
