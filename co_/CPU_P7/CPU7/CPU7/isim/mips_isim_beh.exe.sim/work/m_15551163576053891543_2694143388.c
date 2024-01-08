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
static const char *ng0 = "/home/co-eda/Desktop/CPU7/DE.v";
static int ng1[] = {7, 0};
static int ng2[] = {8, 0};
static int ng3[] = {15, 0};
static int ng4[] = {16, 0};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {1U, 0U};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {24, 0};
static unsigned int ng10[] = {3U, 0U};
static unsigned int ng11[] = {4U, 0U};



static void Always_37_0(char *t0)
{
    char t4[8];
    char t13[8];
    char t14[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1168U);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    t10 = ((char*)((ng2)));
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_multiply(t13, 32, t10, 32, t12, 2);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t9, 32, t13, 32);
    t11 = ((char*)((ng2)));
    xsi_vlog_get_indexed_partselect(t4, 8, t6, ((int*)(t8)), 2, t14, 32, 2, t11, 32, 1, 0);
    t15 = (t0 + 1928);
    xsi_vlogvar_assign_value(t15, t4, 0, 0, 8);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng3)));
    t8 = ((char*)((ng4)));
    t9 = (t0 + 1048U);
    t10 = *((char **)t9);
    t9 = (t0 + 1008U);
    t11 = (t9 + 72U);
    t12 = *((char **)t11);
    t15 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t10, t12, 2, t15, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t8, 32, t13, 32);
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t7, 32, t14, 32);
    t17 = ((char*)((ng4)));
    xsi_vlog_get_indexed_partselect(t4, 16, t3, ((int*)(t6)), 2, t16, 32, 2, t17, 32, 1, 0);
    t18 = (t0 + 2088);
    xsi_vlogvar_assign_value(t18, t4, 0, 0, 16);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng6)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t19 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng7)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t19 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng8)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t19 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng10)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t19 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng11)));
    t19 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t19 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(56, ng0);

LAB25:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t5 = *((char **)t2);
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t5, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);

LAB20:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t6, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t8, 24, t7, 8);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(47, ng0);

LAB22:    xsi_set_current_line(48, ng0);
    t5 = (t0 + 1928);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng9)));
    t9 = (t0 + 1928);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 7);
    t22 = (t21 & 1);
    *((unsigned int *)t14) = t22;
    t23 = *((unsigned int *)t15);
    t24 = (t23 >> 7);
    t25 = (t24 & 1);
    *((unsigned int *)t12) = t25;
    xsi_vlog_mul_concat(t13, 24, 1, t8, 1U, t14, 1);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t13, 24, t7, 8);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(50, ng0);

LAB23:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    xsi_vlogtype_concat(t4, 32, 32, 2U, t8, 16, t7, 16);
    t9 = (t0 + 1768);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(53, ng0);

LAB24:    xsi_set_current_line(54, ng0);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    t9 = (t0 + 2088);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t12 = (t14 + 4);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t14) = t22;
    t23 = *((unsigned int *)t15);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t12) = t25;
    xsi_vlog_mul_concat(t13, 16, 1, t8, 1U, t14, 1);
    xsi_vlogtype_concat(t4, 32, 32, 2U, t13, 16, t7, 16);
    t17 = (t0 + 1768);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 32);
    goto LAB19;

}


extern void work_m_15551163576053891543_2694143388_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_15551163576053891543_2694143388", "isim/mips_isim_beh.exe.sim/work/m_15551163576053891543_2694143388.didat");
	xsi_register_executes(pe);
}
