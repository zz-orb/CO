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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/hp/Desktop/co/CPU_P5/CPU5/EREG.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {3U, 3U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t25[8];
    char t26[8];
    char t29[8];
    char t46[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 5088);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(59, ng0);

LAB14:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t15, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB17;

LAB15:    t4 = (t3 + 4);
    t5 = (t2 + 4);
    if (*((unsigned int *)t4) != *((unsigned int *)t5))
        goto LAB17;

LAB16:    *((unsigned int *)t15) = 1;

LAB17:    memset(t14, 0, 8);
    t11 = (t15 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t11) != 0)
        goto LAB20;

LAB21:    t16 = (t14 + 4);
    t17 = *((unsigned int *)t14);
    t18 = *((unsigned int *)t16);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB22;

LAB23:    t21 = *((unsigned int *)t14);
    t22 = (~(t21));
    t23 = *((unsigned int *)t16);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t16) > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t14) > 0)
        goto LAB28;

LAB29:    memcpy(t13, t25, 8);

LAB30:    t52 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t52, t13, 0, 0, 2, 0LL);

LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2888);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);

LAB13:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2888);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB18:    *((unsigned int *)t14) = 1;
    goto LAB21;

LAB20:    t12 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB21;

LAB22:    t20 = ((char*)((ng2)));
    goto LAB23;

LAB24:    t27 = (t0 + 2488U);
    t28 = *((char **)t27);
    t27 = ((char*)((ng3)));
    memset(t29, 0, 8);
    t30 = (t28 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB32;

LAB31:    t31 = (t27 + 4);
    if (*((unsigned int *)t31) != 0)
        goto LAB32;

LAB35:    if (*((unsigned int *)t28) > *((unsigned int *)t27))
        goto LAB33;

LAB34:    memset(t26, 0, 8);
    t33 = (t29 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t33) != 0)
        goto LAB38;

LAB39:    t40 = (t26 + 4);
    t41 = *((unsigned int *)t26);
    t42 = *((unsigned int *)t40);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB40;

LAB41:    t47 = *((unsigned int *)t26);
    t48 = (~(t47));
    t49 = *((unsigned int *)t40);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t40) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t26) > 0)
        goto LAB46;

LAB47:    memcpy(t25, t51, 8);

LAB48:    goto LAB25;

LAB26:    xsi_vlog_unsigned_bit_combine(t13, 32, t20, 32, t25, 32);
    goto LAB30;

LAB28:    memcpy(t13, t20, 8);
    goto LAB30;

LAB32:    t32 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB34;

LAB33:    *((unsigned int *)t29) = 1;
    goto LAB34;

LAB36:    *((unsigned int *)t26) = 1;
    goto LAB39;

LAB38:    t39 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB39;

LAB40:    t44 = (t0 + 2488U);
    t45 = *((char **)t44);
    t44 = ((char*)((ng4)));
    memset(t46, 0, 8);
    xsi_vlog_unsigned_minus(t46, 32, t45, 2, t44, 32);
    goto LAB41;

LAB42:    t51 = ((char*)((ng3)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t25, 32, t46, 32, t51, 32);
    goto LAB48;

LAB46:    memcpy(t25, t46, 8);
    goto LAB48;

}


extern void work_m_00000000000588494207_0690399989_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000000588494207_0690399989", "isim/mips_tb_isim_beh.exe.sim/work/m_00000000000588494207_0690399989.didat");
	xsi_register_executes(pe);
}
