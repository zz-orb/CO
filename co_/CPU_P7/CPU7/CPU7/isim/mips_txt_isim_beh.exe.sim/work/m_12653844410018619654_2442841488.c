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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/co-eda/Desktop/CPU7/DREG.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {16768U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {4U, 0U};



static void Always_37_0(char *t0)
{
    char t7[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t34 = (t7 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t7);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB11:    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

LAB9:    xsi_set_current_line(38, ng0);

LAB12:    xsi_set_current_line(39, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 32, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t42, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t2) != 0)
        goto LAB15;

LAB16:    t5 = (t42 + 4);
    t15 = *((unsigned int *)t42);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB17;

LAB18:    t18 = *((unsigned int *)t42);
    t19 = (~(t18));
    t22 = *((unsigned int *)t5);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t5) > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t42) > 0)
        goto LAB23;

LAB24:    memcpy(t7, t11, 8);

LAB25:    t12 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

LAB13:    *((unsigned int *)t42) = 1;
    goto LAB16;

LAB15:    t4 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB16;

LAB17:    t6 = ((char*)((ng2)));
    goto LAB18;

LAB19:    t11 = ((char*)((ng3)));
    goto LAB20;

LAB21:    xsi_vlog_unsigned_bit_combine(t7, 32, t6, 32, t11, 32);
    goto LAB25;

LAB23:    memcpy(t7, t6, 8);
    goto LAB25;

LAB26:    xsi_set_current_line(44, ng0);

LAB29:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    memset(t42, 0, 8);
    t4 = (t5 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    t17 = *((unsigned int *)t5);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) != 0)
        goto LAB32;

LAB33:    t11 = (t42 + 4);
    t22 = *((unsigned int *)t42);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB34;

LAB35:    t26 = *((unsigned int *)t42);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t30 = (t27 || t28);
    if (t30 > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t11) > 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t42) > 0)
        goto LAB40;

LAB41:    memcpy(t7, t21, 8);

LAB42:    t20 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t20, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    memset(t42, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t2) != 0)
        goto LAB45;

LAB46:    t5 = (t42 + 4);
    t15 = *((unsigned int *)t42);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB47;

LAB48:    t18 = *((unsigned int *)t42);
    t19 = (~(t18));
    t22 = *((unsigned int *)t5);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t5) > 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t42) > 0)
        goto LAB53;

LAB54:    memcpy(t7, t11, 8);

LAB55:    t12 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 5, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    goto LAB28;

LAB30:    *((unsigned int *)t42) = 1;
    goto LAB33;

LAB32:    t6 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB34:    t12 = ((char*)((ng1)));
    goto LAB35;

LAB36:    t20 = (t0 + 1688U);
    t21 = *((char **)t20);
    goto LAB37;

LAB38:    xsi_vlog_unsigned_bit_combine(t7, 32, t12, 32, t21, 32);
    goto LAB42;

LAB40:    memcpy(t7, t12, 8);
    goto LAB42;

LAB43:    *((unsigned int *)t42) = 1;
    goto LAB46;

LAB45:    t4 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB46;

LAB47:    t6 = ((char*)((ng4)));
    goto LAB48;

LAB49:    t11 = ((char*)((ng1)));
    goto LAB50;

LAB51:    xsi_vlog_unsigned_bit_combine(t7, 5, t6, 5, t11, 5);
    goto LAB55;

LAB53:    memcpy(t7, t6, 8);
    goto LAB55;

}


extern void work_m_12653844410018619654_2442841488_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_12653844410018619654_2442841488", "isim/mips_txt_isim_beh.exe.sim/work/m_12653844410018619654_2442841488.didat");
	xsi_register_executes(pe);
}
