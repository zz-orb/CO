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
static const char *ng0 = "C:/Users/hp/Desktop/CPU_P6/CPU6_1/MDU.v";
static unsigned int ng1[] = {5U, 0U};
static unsigned int ng2[] = {6U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {5, 0};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {3U, 0U};
static int ng9[] = {10, 0};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};



static void Cont_50_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;

LAB0:    t1 = (t0 + 4288U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t79 = (t0 + 4952);
    t80 = (t79 + 56U);
    t81 = *((char **)t80);
    t82 = (t81 + 56U);
    t83 = *((char **)t82);
    memcpy(t83, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t84 = (t0 + 4856);
    *((int *)t84) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 2408);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 1528U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t78, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 2568);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t78 = ((char*)((ng3)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t78, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

}

static void Always_52_1(char *t0)
{
    char t13[8];
    char t29[16];
    char t32[16];
    char t34[16];
    char t36[8];
    char t37[8];
    char t40[8];
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
    int t28;
    char *t30;
    char *t31;
    char *t33;
    char *t35;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;

LAB0:    t1 = (t0 + 4536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 4872);
    *((int *)t2) = 1;
    t3 = (t0 + 4568);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
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

LAB7:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB35;

LAB32:    if (t18 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t13) = 1;

LAB35:    t30 = (t13 + 4);
    t21 = *((unsigned int *)t30);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB52;

LAB49:    if (t18 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    t30 = (t13 + 4);
    t21 = *((unsigned int *)t30);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB53;

LAB54:
LAB55:
LAB38:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(53, ng0);

LAB9:    xsi_set_current_line(54, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(65, ng0);

LAB17:    xsi_set_current_line(66, ng0);
    t26 = (t0 + 1528U);
    t27 = *((char **)t26);

LAB18:    t26 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 4, t26, 4);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t28 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t28 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t28 = xsi_vlog_unsigned_case_compare(t27, 4, t2, 4);
    if (t28 == 1)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB16;

LAB19:    xsi_set_current_line(67, ng0);

LAB28:    xsi_set_current_line(68, ng0);
    t30 = (t0 + 1688U);
    t31 = *((char **)t30);
    xsi_vlogtype_sign_extend(t29, 64, t31, 32);
    t30 = (t0 + 1848U);
    t33 = *((char **)t30);
    xsi_vlogtype_sign_extend(t32, 64, t33, 32);
    xsi_vlog_signed_multiply(t34, 64, t29, 64, t32, 64);
    t30 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t30, t34, 0, 0, 32, 0LL);
    t35 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t35, t34, 32, 0, 32, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB21:    xsi_set_current_line(71, ng0);

LAB29:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    xsi_vlog_unsigned_multiply(t29, 64, t4, 32, t5, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 32, 0LL);
    t11 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t11, t29, 32, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(75, ng0);

LAB30:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    memset(t37, 0, 8);
    xsi_vlog_signed_divide(t37, 32, t4, 32, t5, 32);
    t3 = (t0 + 1688U);
    t11 = *((char **)t3);
    t3 = (t0 + 1848U);
    t12 = *((char **)t3);
    memset(t40, 0, 8);
    xsi_vlog_signed_mod(t40, 32, t11, 32, t12, 32);
    xsi_vlogtype_concat(t29, 64, 64, 2U, t40, 32, t37, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 32, 0LL);
    t26 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t26, t29, 32, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(79, ng0);

LAB31:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 1848U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_divide(t13, 32, t4, 32, t5, 32);
    t3 = (t0 + 1688U);
    t11 = *((char **)t3);
    t3 = (t0 + 1848U);
    t12 = *((char **)t3);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_mod(t36, 32, t11, 32, t12, 32);
    xsi_vlogtype_concat(t29, 64, 64, 2U, t36, 32, t13, 32);
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t29, 0, 0, 32, 0LL);
    t26 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t26, t29, 32, 0, 32, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB27;

LAB34:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(88, ng0);

LAB39:    xsi_set_current_line(89, ng0);
    t31 = (t0 + 3208);
    t33 = (t31 + 56U);
    t35 = *((char **)t33);
    t41 = (t0 + 3368);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t36, 0, 8);
    t44 = (t35 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t35);
    t47 = *((unsigned int *)t43);
    t48 = (t46 ^ t47);
    t49 = *((unsigned int *)t44);
    t50 = *((unsigned int *)t45);
    t51 = (t49 ^ t50);
    t52 = (t48 | t51);
    t53 = *((unsigned int *)t44);
    t54 = *((unsigned int *)t45);
    t55 = (t53 | t54);
    t56 = (~(t55));
    t57 = (t52 & t56);
    if (t57 != 0)
        goto LAB43;

LAB40:    if (t55 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t36) = 1;

LAB43:    t59 = (t36 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t36);
    t63 = (t62 & t61);
    t64 = (t63 != 0);
    if (t64 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(93, ng0);

LAB48:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3208);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 4, t5, 32);
    t11 = (t0 + 3208);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 4);

LAB46:    goto LAB38;

LAB42:    t58 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(89, ng0);

LAB47:    xsi_set_current_line(90, ng0);
    t65 = (t0 + 3048);
    t66 = (t65 + 56U);
    t67 = *((char **)t66);
    t68 = (t0 + 2888);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    xsi_vlogtype_concat(t29, 64, 64, 2U, t70, 32, t67, 32);
    t71 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t71, t29, 0, 0, 32, 0LL);
    t72 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t72, t29, 32, 0, 32, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB46;

LAB51:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(98, ng0);

LAB56:    xsi_set_current_line(99, ng0);
    t31 = (t0 + 1528U);
    t33 = *((char **)t31);

LAB57:    t31 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t33, 4, t31, 4);
    if (t28 == 1)
        goto LAB58;

LAB59:    t2 = ((char*)((ng12)));
    t28 = xsi_vlog_unsigned_case_compare(t33, 4, t2, 4);
    if (t28 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB55;

LAB58:    xsi_set_current_line(100, ng0);

LAB63:    xsi_set_current_line(101, ng0);
    t35 = (t0 + 1688U);
    t41 = *((char **)t35);
    t35 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t35, t41, 0, 0, 32, 0LL);
    goto LAB62;

LAB60:    xsi_set_current_line(103, ng0);

LAB64:    xsi_set_current_line(104, ng0);
    t3 = (t0 + 1688U);
    t4 = *((char **)t3);
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 32, 0LL);
    goto LAB62;

}


extern void work_m_00000000004246447519_4111503280_init()
{
	static char *pe[] = {(void *)Cont_50_0,(void *)Always_52_1};
	xsi_register_didat("work_m_00000000004246447519_4111503280", "isim/mips_txt_isim_beh.exe.sim/work/m_00000000004246447519_4111503280.didat");
	xsi_register_executes(pe);
}
