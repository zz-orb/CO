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
static const char *ng0 = "/home/co-eda/Desktop/CPU7/BE.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {15U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {12U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};



static void Always_36_0(char *t0)
{
    char t4[8];
    char t25[8];
    char t26[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    int t24;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3320);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 1528U);
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
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(85, ng0);

LAB53:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t19 = (t0 + 1368U);
    t20 = *((char **)t19);

LAB14:    t19 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t19, 2);
    if (t21 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t20, 2, t2, 2);
    if (t21 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(79, ng0);

LAB52:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);

LAB25:    goto LAB12;

LAB15:    xsi_set_current_line(39, ng0);

LAB26:    xsi_set_current_line(40, ng0);
    t22 = ((char*)((ng1)));
    t23 = (t0 + 1928);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 4);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB25;

LAB17:    xsi_set_current_line(43, ng0);

LAB27:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(47, ng0);

LAB28:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t3) = t14;

LAB29:    t12 = ((char*)((ng1)));
    t24 = xsi_vlog_unsigned_case_compare(t4, 1, t12, 1);
    if (t24 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t21 == 1)
        goto LAB32;

LAB33:
LAB34:    goto LAB25;

LAB21:    xsi_set_current_line(59, ng0);

LAB37:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);

LAB38:    t3 = ((char*)((ng1)));
    t24 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t24 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng5)));
    t21 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t21 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB25;

LAB30:    xsi_set_current_line(49, ng0);

LAB35:    xsi_set_current_line(50, ng0);
    t13 = ((char*)((ng5)));
    t19 = (t0 + 1928);
    xsi_vlogvar_assign_value(t19, t13, 0, 0, 4);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t26) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t11 & 65535U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 65535U);
    t6 = ((char*)((ng1)));
    xsi_vlogtype_concat(t25, 32, 32, 2U, t6, 16, t26, 16);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t25, 0, 0, 32);
    goto LAB34;

LAB32:    xsi_set_current_line(53, ng0);

LAB36:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng6)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t5 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t26) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t11 & 65535U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 65535U);
    xsi_vlogtype_concat(t25, 32, 32, 2U, t26, 16, t2, 16);
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t25, 0, 0, 32);
    goto LAB34;

LAB39:    xsi_set_current_line(61, ng0);

LAB48:    xsi_set_current_line(62, ng0);
    t6 = ((char*)((ng2)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t6, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t6 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    *((unsigned int *)t26) = t8;
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 0);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t11 & 255U);
    t14 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t14 & 255U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t25, 32, 32, 2U, t12, 24, t26, 8);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t25, 0, 0, 32);
    goto LAB47;

LAB41:    xsi_set_current_line(65, ng0);

LAB49:    xsi_set_current_line(66, ng0);
    t3 = ((char*)((ng4)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t26) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t11 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t25, 32, 32, 3U, t13, 16, t26, 8, t2, 8);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t25, 0, 0, 32);
    goto LAB47;

LAB43:    xsi_set_current_line(69, ng0);

LAB50:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng7)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t26) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t11 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t25, 32, 32, 3U, t13, 8, t26, 8, t2, 16);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t25, 0, 0, 32);
    goto LAB47;

LAB45:    xsi_set_current_line(73, ng0);

LAB51:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng8)));
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t3, 0, 0, 4);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t26, 0, 8);
    t3 = (t26 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t26) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t3) = t10;
    t11 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t11 & 255U);
    t14 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t14 & 255U);
    xsi_vlogtype_concat(t25, 32, 32, 2U, t26, 8, t2, 24);
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t25, 0, 0, 32);
    goto LAB47;

}


extern void work_m_04234235434063247110_4140825114_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_04234235434063247110_4140825114", "isim/mips_txt_isim_beh.exe.sim/work/m_04234235434063247110_4140825114.didat");
	xsi_register_executes(pe);
}
