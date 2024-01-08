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
static const char *ng0 = "C:/Users/hp/Desktop/CPU_P6/CPU6_1/BE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void Always_35_0(char *t0)
{
    char t9[8];
    char t19[8];
    char t20[8];
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
    int t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(77, ng0);

LAB44:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB18:    xsi_set_current_line(38, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(41, ng0);

LAB19:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(45, ng0);

LAB20:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 1);
    t12 = (t11 & 1);
    *((unsigned int *)t9) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    t15 = (t14 & 1);
    *((unsigned int *)t3) = t15;

LAB21:    t8 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t9, 1, t8, 1);
    if (t16 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 1, t2, 1);
    if (t6 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB17;

LAB13:    xsi_set_current_line(57, ng0);

LAB29:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);

LAB30:    t3 = ((char*)((ng1)));
    t16 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t16 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t6 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB17;

LAB22:    xsi_set_current_line(47, ng0);

LAB27:    xsi_set_current_line(48, ng0);
    t17 = ((char*)((ng5)));
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 4);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t20 + 4);
    t4 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 65535U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 65535U);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t7, 16, t20, 16);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t19, 0, 0, 32);
    goto LAB26;

LAB24:    xsi_set_current_line(51, ng0);

LAB28:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t7 = (t4 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 65535U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 65535U);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t20, 16, t2, 16);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t19, 0, 0, 32);
    goto LAB26;

LAB31:    xsi_set_current_line(59, ng0);

LAB40:    xsi_set_current_line(60, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t20, 0, 8);
    t2 = (t20 + 4);
    t7 = (t3 + 4);
    t10 = *((unsigned int *)t3);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t7);
    t13 = (t12 >> 0);
    *((unsigned int *)t2) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 255U);
    t15 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t15 & 255U);
    t8 = ((char*)((ng1)));
    xsi_vlogtype_concat(t19, 32, 32, 2U, t8, 24, t20, 8);
    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    goto LAB39;

LAB33:    xsi_set_current_line(63, ng0);

LAB41:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t19, 32, 32, 3U, t17, 16, t20, 8, t2, 8);
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    goto LAB39;

LAB35:    xsi_set_current_line(67, ng0);

LAB42:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng7)));
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    t17 = ((char*)((ng1)));
    xsi_vlogtype_concat(t19, 32, 32, 3U, t17, 8, t20, 8, t2, 16);
    t18 = (t0 + 1928);
    xsi_vlogvar_assign_value(t18, t19, 0, 0, 32);
    goto LAB39;

LAB37:    xsi_set_current_line(71, ng0);

LAB43:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng8)));
    t7 = (t0 + 1768);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 4);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t20, 0, 8);
    t3 = (t20 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t20) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 0);
    *((unsigned int *)t3) = t13;
    t14 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t14 & 255U);
    t15 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t15 & 255U);
    xsi_vlogtype_concat(t19, 32, 32, 2U, t20, 8, t2, 24);
    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t19, 0, 0, 32);
    goto LAB39;

}


extern void work_m_00000000002993858264_4140825114_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000002993858264_4140825114", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000002993858264_4140825114.didat");
	xsi_register_executes(pe);
}
