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
static const char *ng0 = "/root/netfpga_10g/contrib-projects/openflow_switch/hw/pcores/openflow_datapath_v1_00_a/hdl/verilog/s_counter.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {999, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {7, 0};



static void Always_63_0(char *t0)
{
    char t4[8];
    char t31[8];
    char t33[8];
    char t34[8];
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
    char *t32;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 3136U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    t3 = (t0 + 3168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 1344U);
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

LAB13:    xsi_set_current_line(70, ng0);

LAB16:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 472);
    t12 = *((char **)t6);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t12, 32, t6, 32);
    memset(t31, 0, 8);
    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB18;

LAB17:    t14 = (t4 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t5) < *((unsigned int *)t4))
        goto LAB20;

LAB19:    *((unsigned int *)t31) = 1;

LAB20:    t29 = (t31 + 4);
    t7 = *((unsigned int *)t29);
    t8 = (~(t7));
    t9 = *((unsigned int *)t31);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(93, ng0);

LAB56:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 10, t6, 32);
    t12 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 10, 0LL);

LAB24:
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

LAB12:    xsi_set_current_line(64, ng0);

LAB15:    xsi_set_current_line(65, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    goto LAB14;

LAB18:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB20;

LAB22:    xsi_set_current_line(71, ng0);

LAB25:    xsi_set_current_line(72, ng0);
    t30 = ((char*)((ng1)));
    t32 = (t0 + 2224);
    xsi_vlogvar_wait_assign_value(t32, t30, 0, 0, 10, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB27;

LAB26:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB29;

LAB28:    *((unsigned int *)t4) = 1;

LAB29:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(89, ng0);

LAB55:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 10, t6, 32);
    t12 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 10, 0LL);

LAB33:    goto LAB24;

LAB27:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(73, ng0);

LAB34:    xsi_set_current_line(74, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2064);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB36;

LAB35:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB38;

LAB37:    *((unsigned int *)t4) = 1;

LAB38:    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(85, ng0);

LAB54:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 10, t6, 32);
    t12 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 10, 0LL);

LAB42:    goto LAB33;

LAB36:    t14 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB38;

LAB40:    xsi_set_current_line(75, ng0);

LAB43:    xsi_set_current_line(76, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 1904);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 10, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    t12 = ((char*)((ng5)));
    t13 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t12, 32, t13, 32);
    memset(t31, 0, 8);
    xsi_vlog_unsigned_lshift(t31, 32, t6, 32, t4, 32);
    t14 = ((char*)((ng2)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_minus(t33, 32, t31, 32, t14, 32);
    memset(t34, 0, 8);
    t23 = (t5 + 4);
    if (*((unsigned int *)t23) != 0)
        goto LAB45;

LAB44:    t29 = (t33 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t5) < *((unsigned int *)t33))
        goto LAB47;

LAB46:    *((unsigned int *)t34) = 1;

LAB47:    t32 = (t34 + 4);
    t7 = *((unsigned int *)t32);
    t8 = (~(t7));
    t9 = *((unsigned int *)t34);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(81, ng0);

LAB53:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1744);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 7, t6, 32);
    t12 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 7, 0LL);

LAB51:    goto LAB42;

LAB45:    t30 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB47;

LAB49:    xsi_set_current_line(78, ng0);

LAB52:    xsi_set_current_line(79, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 1744);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 7, 0LL);
    goto LAB51;

}


extern void openflow_datapath_v1_00_a_m_13025604045584544091_3049644839_init()
{
	static char *pe[] = {(void *)Always_63_0};
	xsi_register_didat("openflow_datapath_v1_00_a_m_13025604045584544091_3049644839", "isim/isim_system.sim/openflow_datapath_v1_00_a/m_13025604045584544091_3049644839.didat");
	xsi_register_executes(pe);
}
