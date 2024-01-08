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
static const char *ng0 = "C:/Users/hp/Desktop/CPU_P6/CPU6_1/EREG.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t23[8];
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
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

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
    t4 = (t0 + 1208U);
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
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);

LAB14:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB16;

LAB15:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB17;

LAB18:    memset(t14, 0, 8);
    t12 = (t15 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t15);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t12) != 0)
        goto LAB22;

LAB23:    t17 = (t14 + 4);
    t18 = *((unsigned int *)t14);
    t19 = *((unsigned int *)t17);
    t20 = (t18 || t19);
    if (t20 > 0)
        goto LAB24;

LAB25:    t24 = *((unsigned int *)t14);
    t25 = (~(t24));
    t26 = *((unsigned int *)t17);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB26;

LAB27:    if (*((unsigned int *)t17) > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t14) > 0)
        goto LAB30;

LAB31:    memcpy(t13, t28, 8);

LAB32:    t29 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t29, t13, 0, 0, 2, 0LL);

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
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB16:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t15) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB22:    t16 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB23;

LAB24:    t21 = (t0 + 2488U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t22, 2, t21, 32);
    goto LAB25;

LAB26:    t28 = ((char*)((ng2)));
    goto LAB27;

LAB28:    xsi_vlog_unsigned_bit_combine(t13, 32, t23, 32, t28, 32);
    goto LAB32;

LAB30:    memcpy(t13, t23, 8);
    goto LAB32;

}


extern void work_m_00000000002822271423_0690399989_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000002822271423_0690399989", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002822271423_0690399989.didat");
	xsi_register_executes(pe);
}
