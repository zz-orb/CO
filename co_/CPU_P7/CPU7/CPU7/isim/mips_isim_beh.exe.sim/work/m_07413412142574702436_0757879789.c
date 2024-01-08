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
static const char *ng0 = "/home/co-eda/Desktop/CPU7/NPC.v";
static unsigned int ng1[] = {4U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};



static void Cont_40_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 4728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 4616);
    *((int *)t10) = 1;

LAB1:    return;
}

static void NetDecl_41_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t6 = ((char*)((ng2)));
    t8 = (t0 + 1528U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1073741823U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 1073741823U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t7, 30, t6, 2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t4, 32, t5, 32);
    t18 = (t0 + 4792);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 8);
    xsi_driver_vfirst_trans(t18, 0, 31U);
    t23 = (t0 + 4632);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Always_43_2(char *t0)
{
    char t9[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
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
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 4296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4648);
    *((int *)t2) = 1;
    t3 = (t0 + 4328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB18:    xsi_set_current_line(46, ng0);
    t7 = (t0 + 2328U);
    t8 = *((char **)t7);
    t7 = (t0 + 2888);
    xsi_vlogvar_assign_value(t7, t8, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(48, ng0);

LAB19:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 2168U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB23;

LAB20:    if (t19 != 0)
        goto LAB22;

LAB21:    *((unsigned int *)t9) = 1;

LAB23:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(52, ng0);

LAB28:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 2888);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB26:    goto LAB17;

LAB11:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1688U);
    t7 = *((char **)t4);
    t4 = (t0 + 1208U);
    t8 = *((char **)t4);
    memset(t31, 0, 8);
    t4 = (t31 + 4);
    t22 = (t8 + 4);
    t10 = *((unsigned int *)t8);
    t11 = (t10 >> 28);
    *((unsigned int *)t31) = t11;
    t12 = *((unsigned int *)t22);
    t13 = (t12 >> 28);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t14 & 15U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 15U);
    xsi_vlogtype_concat(t9, 32, 32, 3U, t31, 4, t7, 26, t3, 2);
    t23 = (t0 + 2888);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(59, ng0);

LAB30:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1848U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB15:    xsi_set_current_line(62, ng0);

LAB31:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 2008U);
    t4 = *((char **)t3);
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB17;

LAB22:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(49, ng0);

LAB27:    xsi_set_current_line(50, ng0);
    t29 = (t0 + 2488U);
    t30 = *((char **)t29);
    t29 = (t0 + 2888);
    xsi_vlogvar_assign_value(t29, t30, 0, 0, 32);
    goto LAB26;

}


extern void work_m_07413412142574702436_0757879789_init()
{
	static char *pe[] = {(void *)Cont_40_0,(void *)NetDecl_41_1,(void *)Always_43_2};
	xsi_register_didat("work_m_07413412142574702436_0757879789", "isim/mips_isim_beh.exe.sim/work/m_07413412142574702436_0757879789.didat");
	xsi_register_executes(pe);
}
