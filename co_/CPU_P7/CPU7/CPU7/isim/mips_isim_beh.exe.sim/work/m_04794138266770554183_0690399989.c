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
static const char *ng0 = "/home/co-eda/Desktop/CPU7/EREG.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {16768U, 0U};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {10U, 0U};
static unsigned int ng6[] = {8U, 0U};



static void Always_49_0(char *t0)
{
    char t7[8];
    char t42[8];
    char t43[8];
    char t44[8];
    char t45[8];
    char t50[8];
    char t51[8];
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
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t52;
    char *t53;
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
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;

LAB0:    t1 = (t0 + 5880U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 6200);
    *((int *)t2) = 1;
    t3 = (t0 + 5912);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
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

LAB10:    xsi_set_current_line(60, ng0);
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

LAB27:    xsi_set_current_line(70, ng0);

LAB30:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3128U);
    t3 = *((char **)t2);
    memset(t42, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t2) != 0)
        goto LAB33;

LAB34:    t5 = (t42 + 4);
    t15 = *((unsigned int *)t42);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB35;

LAB36:    t18 = *((unsigned int *)t42);
    t19 = (~(t18));
    t22 = *((unsigned int *)t5);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t5) > 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t42) > 0)
        goto LAB41;

LAB42:    memcpy(t7, t12, 8);

LAB43:    t11 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t11, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2328U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 5, 0LL);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2488U);
    t3 = *((char **)t2);
    t2 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t43, 0, 8);
    t4 = (t3 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB45;

LAB44:    t5 = (t2 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t3) > *((unsigned int *)t2))
        goto LAB46;

LAB47:    memset(t42, 0, 8);
    t11 = (t43 + 4);
    t8 = *((unsigned int *)t11);
    t9 = (~(t8));
    t10 = *((unsigned int *)t43);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t11) != 0)
        goto LAB51;

LAB52:    t20 = (t42 + 4);
    t15 = *((unsigned int *)t42);
    t16 = *((unsigned int *)t20);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB53;

LAB54:    t18 = *((unsigned int *)t42);
    t19 = (~(t18));
    t22 = *((unsigned int *)t20);
    t23 = (t19 || t22);
    if (t23 > 0)
        goto LAB55;

LAB56:    if (*((unsigned int *)t20) > 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t42) > 0)
        goto LAB59;

LAB60:    memcpy(t7, t40, 8);

LAB61:    t41 = (t0 + 4648);
    xsi_vlogvar_wait_assign_value(t41, t7, 0, 0, 2, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    memset(t43, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 31U);
    if (t14 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t2) != 0)
        goto LAB64;

LAB65:    memset(t42, 0, 8);
    t5 = (t43 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    t17 = *((unsigned int *)t43);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t5) != 0)
        goto LAB68;

LAB69:    t11 = (t42 + 4);
    t22 = *((unsigned int *)t42);
    t23 = *((unsigned int *)t11);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB70;

LAB71:    t26 = *((unsigned int *)t42);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t30 = (t27 || t28);
    if (t30 > 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t11) > 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t42) > 0)
        goto LAB76;

LAB77:    memcpy(t7, t44, 8);

LAB78:    t70 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t70, t7, 0, 0, 5, 0LL);

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

LAB9:    xsi_set_current_line(50, ng0);

LAB12:    xsi_set_current_line(51, ng0);
    t40 = ((char*)((ng1)));
    t41 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 32, 0LL);
    xsi_set_current_line(52, ng0);
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

LAB25:    t12 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t12, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
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

LAB26:    xsi_set_current_line(60, ng0);

LAB29:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1848U);
    t3 = *((char **)t2);
    t2 = (t0 + 3848);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4008);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4808);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4968);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    goto LAB28;

LAB31:    *((unsigned int *)t42) = 1;
    goto LAB34;

LAB33:    t4 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB34;

LAB35:    t6 = ((char*)((ng1)));
    goto LAB36;

LAB37:    t11 = (t0 + 1688U);
    t12 = *((char **)t11);
    goto LAB38;

LAB39:    xsi_vlog_unsigned_bit_combine(t7, 32, t6, 32, t12, 32);
    goto LAB43;

LAB41:    memcpy(t7, t6, 8);
    goto LAB43;

LAB45:    t6 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB46:    *((unsigned int *)t43) = 1;
    goto LAB47;

LAB49:    *((unsigned int *)t42) = 1;
    goto LAB52;

LAB51:    t12 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB52;

LAB53:    t21 = (t0 + 2648U);
    t34 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t44, 0, 8);
    xsi_vlog_unsigned_minus(t44, 32, t34, 2, t21, 32);
    goto LAB54;

LAB55:    t40 = ((char*)((ng1)));
    goto LAB56;

LAB57:    xsi_vlog_unsigned_bit_combine(t7, 32, t44, 32, t40, 32);
    goto LAB61;

LAB59:    memcpy(t7, t44, 8);
    goto LAB61;

LAB62:    *((unsigned int *)t43) = 1;
    goto LAB65;

LAB64:    t4 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB65;

LAB66:    *((unsigned int *)t42) = 1;
    goto LAB69;

LAB68:    t6 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB69;

LAB70:    t12 = (t0 + 2968U);
    t20 = *((char **)t12);
    goto LAB71;

LAB72:    t12 = (t0 + 3128U);
    t21 = *((char **)t12);
    memset(t45, 0, 8);
    t12 = (t21 + 4);
    t31 = *((unsigned int *)t12);
    t32 = (~(t31));
    t33 = *((unsigned int *)t21);
    t35 = (t33 & t32);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t12) != 0)
        goto LAB81;

LAB82:    t40 = (t45 + 4);
    t37 = *((unsigned int *)t45);
    t38 = *((unsigned int *)t40);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB83;

LAB84:    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t40);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t40) > 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t45) > 0)
        goto LAB89;

LAB90:    memcpy(t44, t50, 8);

LAB91:    goto LAB73;

LAB74:    xsi_vlog_unsigned_bit_combine(t7, 5, t20, 5, t44, 5);
    goto LAB78;

LAB76:    memcpy(t7, t20, 8);
    goto LAB78;

LAB79:    *((unsigned int *)t45) = 1;
    goto LAB82;

LAB81:    t34 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB82;

LAB83:    t41 = ((char*)((ng5)));
    goto LAB84;

LAB85:    t52 = (t0 + 3288U);
    t53 = *((char **)t52);
    memset(t51, 0, 8);
    t52 = (t53 + 4);
    t54 = *((unsigned int *)t52);
    t55 = (~(t54));
    t56 = *((unsigned int *)t53);
    t57 = (t56 & t55);
    t58 = (t57 & 1U);
    if (t58 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t52) != 0)
        goto LAB94;

LAB95:    t60 = (t51 + 4);
    t61 = *((unsigned int *)t51);
    t62 = *((unsigned int *)t60);
    t63 = (t61 || t62);
    if (t63 > 0)
        goto LAB96;

LAB97:    t65 = *((unsigned int *)t51);
    t66 = (~(t65));
    t67 = *((unsigned int *)t60);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t60) > 0)
        goto LAB100;

LAB101:    if (*((unsigned int *)t51) > 0)
        goto LAB102;

LAB103:    memcpy(t50, t69, 8);

LAB104:    goto LAB86;

LAB87:    xsi_vlog_unsigned_bit_combine(t44, 5, t41, 5, t50, 5);
    goto LAB91;

LAB89:    memcpy(t44, t41, 8);
    goto LAB91;

LAB92:    *((unsigned int *)t51) = 1;
    goto LAB95;

LAB94:    t59 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB95;

LAB96:    t64 = ((char*)((ng6)));
    goto LAB97;

LAB98:    t69 = ((char*)((ng1)));
    goto LAB99;

LAB100:    xsi_vlog_unsigned_bit_combine(t50, 5, t64, 5, t69, 5);
    goto LAB104;

LAB102:    memcpy(t50, t64, 8);
    goto LAB104;

}


extern void work_m_04794138266770554183_0690399989_init()
{
	static char *pe[] = {(void *)Always_49_0};
	xsi_register_didat("work_m_04794138266770554183_0690399989", "isim/mips_isim_beh.exe.sim/work/m_04794138266770554183_0690399989.didat");
	xsi_register_executes(pe);
}
