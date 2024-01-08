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
static const char *ng0 = "/home/co-eda/Desktop/CPU7/ALU.v";
static unsigned int ng1[] = {2U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static unsigned int ng8[] = {6U, 0U};



static void NetDecl_38_0(char *t0)
{
    char t3[16];
    char t6[8];
    char t14[16];
    char t18[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3480U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogtype_concat(t3, 33, 33, 2U, t6, 1, t4, 32);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    t15 = (t0 + 1208U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t18, 1, t16, 32);
    xsi_vlog_unsigned_add(t26, 33, t3, 33, t14, 33);
    t27 = (t0 + 5200);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t31, 0, t26, 0, 33);
    xsi_driver_vfirst_trans(t27, 0, 32U);
    t32 = (t0 + 5040);
    *((int *)t32) = 1;

LAB1:    return;
}

static void NetDecl_39_1(char *t0)
{
    char t3[16];
    char t6[8];
    char t14[16];
    char t18[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 3728U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogtype_concat(t3, 33, 33, 2U, t6, 1, t4, 32);
    t15 = (t0 + 1208U);
    t16 = *((char **)t15);
    t15 = (t0 + 1208U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t18, 1, t16, 32);
    xsi_vlog_unsigned_minus(t26, 33, t3, 33, t14, 33);
    t27 = (t0 + 5264);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t31, 0, t26, 0, 33);
    xsi_driver_vfirst_trans(t27, 0, 32U);
    t32 = (t0 + 5056);
    *((int *)t32) = 1;

LAB1:    return;
}

static void NetDecl_40_2(char *t0)
{
    char t4[16];
    char t7[8];
    char t16[16];
    char t20[8];
    char t28[16];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3976U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1048U);
    t5 = *((char **)t2);
    t2 = (t0 + 1048U);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t7 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t6);
    t10 = (t9 >> 31);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 31);
    t14 = (t13 & 1);
    *((unsigned int *)t2) = t14;
    xsi_vlogtype_concat(t4, 33, 33, 2U, t7, 1, t5, 32);
    t17 = (t0 + 1208U);
    t18 = *((char **)t17);
    t17 = (t0 + 1208U);
    t19 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t20 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 31);
    t24 = (t23 & 1);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 31);
    t27 = (t26 & 1);
    *((unsigned int *)t17) = t27;
    xsi_vlogtype_concat(t16, 33, 33, 2U, t20, 1, t18, 32);
    xsi_vlog_signed_add(t28, 33, t4, 33, t16, 33);
    t29 = (t0 + 5328);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    xsi_vlog_bit_copy(t33, 0, t28, 0, 33);
    xsi_driver_vfirst_trans(t29, 0, 32U);
    t34 = (t0 + 5072);
    *((int *)t34) = 1;

LAB1:    return;
}

static void Cont_41_3(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t36[8];
    char t47[8];
    char t56[8];
    char t72[8];
    char t86[8];
    char t94[8];
    char t142[8];
    char t143[8];
    char t146[8];
    char t162[8];
    char t176[8];
    char t187[8];
    char t196[8];
    char t212[8];
    char t226[8];
    char t234[8];
    char t282[8];
    char t283[8];
    char t286[8];
    char t302[8];
    char t316[8];
    char t327[8];
    char t336[8];
    char t352[8];
    char t366[8];
    char t374[8];
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
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    char *t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    char *t144;
    char *t145;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    char *t174;
    char *t175;
    char *t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    char *t185;
    char *t186;
    char *t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    char *t195;
    char *t197;
    char *t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    unsigned int t205;
    unsigned int t206;
    unsigned int t207;
    unsigned int t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t213;
    unsigned int t214;
    unsigned int t215;
    char *t216;
    char *t217;
    char *t218;
    unsigned int t219;
    unsigned int t220;
    unsigned int t221;
    unsigned int t222;
    unsigned int t223;
    unsigned int t224;
    unsigned int t225;
    char *t227;
    unsigned int t228;
    unsigned int t229;
    unsigned int t230;
    unsigned int t231;
    unsigned int t232;
    char *t233;
    unsigned int t235;
    unsigned int t236;
    unsigned int t237;
    char *t238;
    char *t239;
    char *t240;
    unsigned int t241;
    unsigned int t242;
    unsigned int t243;
    unsigned int t244;
    unsigned int t245;
    unsigned int t246;
    unsigned int t247;
    char *t248;
    char *t249;
    unsigned int t250;
    unsigned int t251;
    unsigned int t252;
    unsigned int t253;
    unsigned int t254;
    unsigned int t255;
    unsigned int t256;
    unsigned int t257;
    int t258;
    int t259;
    unsigned int t260;
    unsigned int t261;
    unsigned int t262;
    unsigned int t263;
    unsigned int t264;
    unsigned int t265;
    char *t266;
    unsigned int t267;
    unsigned int t268;
    unsigned int t269;
    unsigned int t270;
    unsigned int t271;
    char *t272;
    char *t273;
    unsigned int t274;
    unsigned int t275;
    unsigned int t276;
    char *t277;
    unsigned int t278;
    unsigned int t279;
    unsigned int t280;
    unsigned int t281;
    char *t284;
    char *t285;
    char *t287;
    char *t288;
    unsigned int t289;
    unsigned int t290;
    unsigned int t291;
    unsigned int t292;
    unsigned int t293;
    unsigned int t294;
    unsigned int t295;
    unsigned int t296;
    unsigned int t297;
    unsigned int t298;
    unsigned int t299;
    unsigned int t300;
    char *t301;
    char *t303;
    unsigned int t304;
    unsigned int t305;
    unsigned int t306;
    unsigned int t307;
    unsigned int t308;
    char *t309;
    char *t310;
    unsigned int t311;
    unsigned int t312;
    unsigned int t313;
    char *t314;
    char *t315;
    char *t317;
    char *t318;
    unsigned int t319;
    unsigned int t320;
    unsigned int t321;
    unsigned int t322;
    unsigned int t323;
    unsigned int t324;
    char *t325;
    char *t326;
    char *t328;
    unsigned int t329;
    unsigned int t330;
    unsigned int t331;
    unsigned int t332;
    unsigned int t333;
    unsigned int t334;
    char *t335;
    char *t337;
    char *t338;
    unsigned int t339;
    unsigned int t340;
    unsigned int t341;
    unsigned int t342;
    unsigned int t343;
    unsigned int t344;
    unsigned int t345;
    unsigned int t346;
    unsigned int t347;
    unsigned int t348;
    unsigned int t349;
    unsigned int t350;
    char *t351;
    unsigned int t353;
    unsigned int t354;
    unsigned int t355;
    char *t356;
    char *t357;
    char *t358;
    unsigned int t359;
    unsigned int t360;
    unsigned int t361;
    unsigned int t362;
    unsigned int t363;
    unsigned int t364;
    unsigned int t365;
    char *t367;
    unsigned int t368;
    unsigned int t369;
    unsigned int t370;
    unsigned int t371;
    unsigned int t372;
    char *t373;
    unsigned int t375;
    unsigned int t376;
    unsigned int t377;
    char *t378;
    char *t379;
    char *t380;
    unsigned int t381;
    unsigned int t382;
    unsigned int t383;
    unsigned int t384;
    unsigned int t385;
    unsigned int t386;
    unsigned int t387;
    char *t388;
    char *t389;
    unsigned int t390;
    unsigned int t391;
    unsigned int t392;
    unsigned int t393;
    unsigned int t394;
    unsigned int t395;
    unsigned int t396;
    unsigned int t397;
    int t398;
    int t399;
    unsigned int t400;
    unsigned int t401;
    unsigned int t402;
    unsigned int t403;
    unsigned int t404;
    unsigned int t405;
    char *t406;
    unsigned int t407;
    unsigned int t408;
    unsigned int t409;
    unsigned int t410;
    unsigned int t411;
    char *t412;
    char *t413;
    unsigned int t414;
    unsigned int t415;
    unsigned int t416;
    char *t417;
    unsigned int t418;
    unsigned int t419;
    unsigned int t420;
    unsigned int t421;
    char *t422;
    char *t423;
    char *t424;
    char *t425;
    char *t426;
    char *t427;
    unsigned int t428;
    unsigned int t429;
    char *t430;
    unsigned int t431;
    unsigned int t432;
    char *t433;
    unsigned int t434;
    unsigned int t435;
    char *t436;

LAB0:    t1 = (t0 + 4224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
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

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t94, t22, 8);

LAB14:    memset(t4, 0, 8);
    t126 = (t94 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t94);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t126) != 0)
        goto LAB31;

LAB32:    t133 = (t4 + 4);
    t134 = *((unsigned int *)t4);
    t135 = *((unsigned int *)t133);
    t136 = (t134 || t135);
    if (t136 > 0)
        goto LAB33;

LAB34:    t138 = *((unsigned int *)t4);
    t139 = (~(t138));
    t140 = *((unsigned int *)t133);
    t141 = (t139 || t140);
    if (t141 > 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t133) > 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t4) > 0)
        goto LAB39;

LAB40:    memcpy(t3, t142, 8);

LAB41:    t423 = (t0 + 5392);
    t424 = (t423 + 56U);
    t425 = *((char **)t424);
    t426 = (t425 + 56U);
    t427 = *((char **)t426);
    memset(t427, 0, 8);
    t428 = 1U;
    t429 = t428;
    t430 = (t3 + 4);
    t431 = *((unsigned int *)t3);
    t428 = (t428 & t431);
    t432 = *((unsigned int *)t430);
    t429 = (t429 & t432);
    t433 = (t427 + 4);
    t434 = *((unsigned int *)t427);
    *((unsigned int *)t427) = (t434 | t428);
    t435 = *((unsigned int *)t433);
    *((unsigned int *)t433) = (t435 | t429);
    xsi_driver_vfirst_trans(t423, 0, 0);
    t436 = (t0 + 5088);
    *((int *)t436) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1848U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 8);
    t38 = (t35 + 12);
    t39 = *((unsigned int *)t37);
    t40 = (t39 >> 0);
    t41 = (t40 & 1);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t38);
    t43 = (t42 >> 0);
    t44 = (t43 & 1);
    *((unsigned int *)t34) = t44;
    t45 = (t0 + 1848U);
    t46 = *((char **)t45);
    memset(t47, 0, 8);
    t45 = (t47 + 4);
    t48 = (t46 + 4);
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 31);
    t51 = (t50 & 1);
    *((unsigned int *)t47) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 >> 31);
    t54 = (t53 & 1);
    *((unsigned int *)t45) = t54;
    t55 = ((char*)((ng2)));
    memset(t56, 0, 8);
    t57 = (t47 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t47);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB18;

LAB15:    if (t68 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t56) = 1;

LAB18:    t73 = *((unsigned int *)t36);
    t74 = *((unsigned int *)t56);
    t75 = (t73 ^ t74);
    *((unsigned int *)t72) = t75;
    t76 = (t36 + 4);
    t77 = (t56 + 4);
    t78 = (t72 + 4);
    t79 = *((unsigned int *)t76);
    t80 = *((unsigned int *)t77);
    t81 = (t79 | t80);
    *((unsigned int *)t78) = t81;
    t82 = *((unsigned int *)t78);
    t83 = (t82 != 0);
    if (t83 == 1)
        goto LAB19;

LAB20:
LAB21:    memset(t86, 0, 8);
    t87 = (t72 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t72);
    t91 = (t90 & t89);
    t92 = (t91 & 1U);
    if (t92 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t87) != 0)
        goto LAB24;

LAB25:    t95 = *((unsigned int *)t22);
    t96 = *((unsigned int *)t86);
    t97 = (t95 & t96);
    *((unsigned int *)t94) = t97;
    t98 = (t22 + 4);
    t99 = (t86 + 4);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t98);
    t102 = *((unsigned int *)t99);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB14;

LAB17:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB18;

LAB19:    t84 = *((unsigned int *)t72);
    t85 = *((unsigned int *)t78);
    *((unsigned int *)t72) = (t84 | t85);
    goto LAB21;

LAB22:    *((unsigned int *)t86) = 1;
    goto LAB25;

LAB24:    t93 = (t86 + 4);
    *((unsigned int *)t86) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB25;

LAB26:    t106 = *((unsigned int *)t94);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t94) = (t106 | t107);
    t108 = (t22 + 4);
    t109 = (t86 + 4);
    t110 = *((unsigned int *)t22);
    t111 = (~(t110));
    t112 = *((unsigned int *)t108);
    t113 = (~(t112));
    t114 = *((unsigned int *)t86);
    t115 = (~(t114));
    t116 = *((unsigned int *)t109);
    t117 = (~(t116));
    t118 = (t111 & t113);
    t119 = (t115 & t117);
    t120 = (~(t118));
    t121 = (~(t119));
    t122 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t122 & t120);
    t123 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t123 & t121);
    t124 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t124 & t120);
    t125 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t125 & t121);
    goto LAB28;

LAB29:    *((unsigned int *)t4) = 1;
    goto LAB32;

LAB31:    t132 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB32;

LAB33:    t137 = ((char*)((ng2)));
    goto LAB34;

LAB35:    t144 = (t0 + 1368U);
    t145 = *((char **)t144);
    t144 = ((char*)((ng3)));
    memset(t146, 0, 8);
    t147 = (t145 + 4);
    t148 = (t144 + 4);
    t149 = *((unsigned int *)t145);
    t150 = *((unsigned int *)t144);
    t151 = (t149 ^ t150);
    t152 = *((unsigned int *)t147);
    t153 = *((unsigned int *)t148);
    t154 = (t152 ^ t153);
    t155 = (t151 | t154);
    t156 = *((unsigned int *)t147);
    t157 = *((unsigned int *)t148);
    t158 = (t156 | t157);
    t159 = (~(t158));
    t160 = (t155 & t159);
    if (t160 != 0)
        goto LAB45;

LAB42:    if (t158 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t146) = 1;

LAB45:    memset(t162, 0, 8);
    t163 = (t146 + 4);
    t164 = *((unsigned int *)t163);
    t165 = (~(t164));
    t166 = *((unsigned int *)t146);
    t167 = (t166 & t165);
    t168 = (t167 & 1U);
    if (t168 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t163) != 0)
        goto LAB48;

LAB49:    t170 = (t162 + 4);
    t171 = *((unsigned int *)t162);
    t172 = *((unsigned int *)t170);
    t173 = (t171 || t172);
    if (t173 > 0)
        goto LAB50;

LAB51:    memcpy(t234, t162, 8);

LAB52:    memset(t143, 0, 8);
    t266 = (t234 + 4);
    t267 = *((unsigned int *)t266);
    t268 = (~(t267));
    t269 = *((unsigned int *)t234);
    t270 = (t269 & t268);
    t271 = (t270 & 1U);
    if (t271 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t266) != 0)
        goto LAB69;

LAB70:    t273 = (t143 + 4);
    t274 = *((unsigned int *)t143);
    t275 = *((unsigned int *)t273);
    t276 = (t274 || t275);
    if (t276 > 0)
        goto LAB71;

LAB72:    t278 = *((unsigned int *)t143);
    t279 = (~(t278));
    t280 = *((unsigned int *)t273);
    t281 = (t279 || t280);
    if (t281 > 0)
        goto LAB73;

LAB74:    if (*((unsigned int *)t273) > 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t143) > 0)
        goto LAB77;

LAB78:    memcpy(t142, t282, 8);

LAB79:    goto LAB36;

LAB37:    xsi_vlog_unsigned_bit_combine(t3, 1, t137, 1, t142, 1);
    goto LAB41;

LAB39:    memcpy(t3, t137, 8);
    goto LAB41;

LAB44:    t161 = (t146 + 4);
    *((unsigned int *)t146) = 1;
    *((unsigned int *)t161) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t162) = 1;
    goto LAB49;

LAB48:    t169 = (t162 + 4);
    *((unsigned int *)t162) = 1;
    *((unsigned int *)t169) = 1;
    goto LAB49;

LAB50:    t174 = (t0 + 1848U);
    t175 = *((char **)t174);
    memset(t176, 0, 8);
    t174 = (t176 + 4);
    t177 = (t175 + 8);
    t178 = (t175 + 12);
    t179 = *((unsigned int *)t177);
    t180 = (t179 >> 0);
    t181 = (t180 & 1);
    *((unsigned int *)t176) = t181;
    t182 = *((unsigned int *)t178);
    t183 = (t182 >> 0);
    t184 = (t183 & 1);
    *((unsigned int *)t174) = t184;
    t185 = (t0 + 1848U);
    t186 = *((char **)t185);
    memset(t187, 0, 8);
    t185 = (t187 + 4);
    t188 = (t186 + 4);
    t189 = *((unsigned int *)t186);
    t190 = (t189 >> 31);
    t191 = (t190 & 1);
    *((unsigned int *)t187) = t191;
    t192 = *((unsigned int *)t188);
    t193 = (t192 >> 31);
    t194 = (t193 & 1);
    *((unsigned int *)t185) = t194;
    t195 = ((char*)((ng2)));
    memset(t196, 0, 8);
    t197 = (t187 + 4);
    t198 = (t195 + 4);
    t199 = *((unsigned int *)t187);
    t200 = *((unsigned int *)t195);
    t201 = (t199 ^ t200);
    t202 = *((unsigned int *)t197);
    t203 = *((unsigned int *)t198);
    t204 = (t202 ^ t203);
    t205 = (t201 | t204);
    t206 = *((unsigned int *)t197);
    t207 = *((unsigned int *)t198);
    t208 = (t206 | t207);
    t209 = (~(t208));
    t210 = (t205 & t209);
    if (t210 != 0)
        goto LAB56;

LAB53:    if (t208 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t196) = 1;

LAB56:    t213 = *((unsigned int *)t176);
    t214 = *((unsigned int *)t196);
    t215 = (t213 ^ t214);
    *((unsigned int *)t212) = t215;
    t216 = (t176 + 4);
    t217 = (t196 + 4);
    t218 = (t212 + 4);
    t219 = *((unsigned int *)t216);
    t220 = *((unsigned int *)t217);
    t221 = (t219 | t220);
    *((unsigned int *)t218) = t221;
    t222 = *((unsigned int *)t218);
    t223 = (t222 != 0);
    if (t223 == 1)
        goto LAB57;

LAB58:
LAB59:    memset(t226, 0, 8);
    t227 = (t212 + 4);
    t228 = *((unsigned int *)t227);
    t229 = (~(t228));
    t230 = *((unsigned int *)t212);
    t231 = (t230 & t229);
    t232 = (t231 & 1U);
    if (t232 != 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t227) != 0)
        goto LAB62;

LAB63:    t235 = *((unsigned int *)t162);
    t236 = *((unsigned int *)t226);
    t237 = (t235 & t236);
    *((unsigned int *)t234) = t237;
    t238 = (t162 + 4);
    t239 = (t226 + 4);
    t240 = (t234 + 4);
    t241 = *((unsigned int *)t238);
    t242 = *((unsigned int *)t239);
    t243 = (t241 | t242);
    *((unsigned int *)t240) = t243;
    t244 = *((unsigned int *)t240);
    t245 = (t244 != 0);
    if (t245 == 1)
        goto LAB64;

LAB65:
LAB66:    goto LAB52;

LAB55:    t211 = (t196 + 4);
    *((unsigned int *)t196) = 1;
    *((unsigned int *)t211) = 1;
    goto LAB56;

LAB57:    t224 = *((unsigned int *)t212);
    t225 = *((unsigned int *)t218);
    *((unsigned int *)t212) = (t224 | t225);
    goto LAB59;

LAB60:    *((unsigned int *)t226) = 1;
    goto LAB63;

LAB62:    t233 = (t226 + 4);
    *((unsigned int *)t226) = 1;
    *((unsigned int *)t233) = 1;
    goto LAB63;

LAB64:    t246 = *((unsigned int *)t234);
    t247 = *((unsigned int *)t240);
    *((unsigned int *)t234) = (t246 | t247);
    t248 = (t162 + 4);
    t249 = (t226 + 4);
    t250 = *((unsigned int *)t162);
    t251 = (~(t250));
    t252 = *((unsigned int *)t248);
    t253 = (~(t252));
    t254 = *((unsigned int *)t226);
    t255 = (~(t254));
    t256 = *((unsigned int *)t249);
    t257 = (~(t256));
    t258 = (t251 & t253);
    t259 = (t255 & t257);
    t260 = (~(t258));
    t261 = (~(t259));
    t262 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t262 & t260);
    t263 = *((unsigned int *)t240);
    *((unsigned int *)t240) = (t263 & t261);
    t264 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t264 & t260);
    t265 = *((unsigned int *)t234);
    *((unsigned int *)t234) = (t265 & t261);
    goto LAB66;

LAB67:    *((unsigned int *)t143) = 1;
    goto LAB70;

LAB69:    t272 = (t143 + 4);
    *((unsigned int *)t143) = 1;
    *((unsigned int *)t272) = 1;
    goto LAB70;

LAB71:    t277 = ((char*)((ng2)));
    goto LAB72;

LAB73:    t284 = (t0 + 1368U);
    t285 = *((char **)t284);
    t284 = ((char*)((ng4)));
    memset(t286, 0, 8);
    t287 = (t285 + 4);
    t288 = (t284 + 4);
    t289 = *((unsigned int *)t285);
    t290 = *((unsigned int *)t284);
    t291 = (t289 ^ t290);
    t292 = *((unsigned int *)t287);
    t293 = *((unsigned int *)t288);
    t294 = (t292 ^ t293);
    t295 = (t291 | t294);
    t296 = *((unsigned int *)t287);
    t297 = *((unsigned int *)t288);
    t298 = (t296 | t297);
    t299 = (~(t298));
    t300 = (t295 & t299);
    if (t300 != 0)
        goto LAB83;

LAB80:    if (t298 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t286) = 1;

LAB83:    memset(t302, 0, 8);
    t303 = (t286 + 4);
    t304 = *((unsigned int *)t303);
    t305 = (~(t304));
    t306 = *((unsigned int *)t286);
    t307 = (t306 & t305);
    t308 = (t307 & 1U);
    if (t308 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t303) != 0)
        goto LAB86;

LAB87:    t310 = (t302 + 4);
    t311 = *((unsigned int *)t302);
    t312 = *((unsigned int *)t310);
    t313 = (t311 || t312);
    if (t313 > 0)
        goto LAB88;

LAB89:    memcpy(t374, t302, 8);

LAB90:    memset(t283, 0, 8);
    t406 = (t374 + 4);
    t407 = *((unsigned int *)t406);
    t408 = (~(t407));
    t409 = *((unsigned int *)t374);
    t410 = (t409 & t408);
    t411 = (t410 & 1U);
    if (t411 != 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t406) != 0)
        goto LAB107;

LAB108:    t413 = (t283 + 4);
    t414 = *((unsigned int *)t283);
    t415 = *((unsigned int *)t413);
    t416 = (t414 || t415);
    if (t416 > 0)
        goto LAB109;

LAB110:    t418 = *((unsigned int *)t283);
    t419 = (~(t418));
    t420 = *((unsigned int *)t413);
    t421 = (t419 || t420);
    if (t421 > 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t413) > 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t283) > 0)
        goto LAB115;

LAB116:    memcpy(t282, t422, 8);

LAB117:    goto LAB74;

LAB75:    xsi_vlog_unsigned_bit_combine(t142, 1, t277, 1, t282, 1);
    goto LAB79;

LAB77:    memcpy(t142, t277, 8);
    goto LAB79;

LAB82:    t301 = (t286 + 4);
    *((unsigned int *)t286) = 1;
    *((unsigned int *)t301) = 1;
    goto LAB83;

LAB84:    *((unsigned int *)t302) = 1;
    goto LAB87;

LAB86:    t309 = (t302 + 4);
    *((unsigned int *)t302) = 1;
    *((unsigned int *)t309) = 1;
    goto LAB87;

LAB88:    t314 = (t0 + 2008U);
    t315 = *((char **)t314);
    memset(t316, 0, 8);
    t314 = (t316 + 4);
    t317 = (t315 + 8);
    t318 = (t315 + 12);
    t319 = *((unsigned int *)t317);
    t320 = (t319 >> 0);
    t321 = (t320 & 1);
    *((unsigned int *)t316) = t321;
    t322 = *((unsigned int *)t318);
    t323 = (t322 >> 0);
    t324 = (t323 & 1);
    *((unsigned int *)t314) = t324;
    t325 = (t0 + 2008U);
    t326 = *((char **)t325);
    memset(t327, 0, 8);
    t325 = (t327 + 4);
    t328 = (t326 + 4);
    t329 = *((unsigned int *)t326);
    t330 = (t329 >> 31);
    t331 = (t330 & 1);
    *((unsigned int *)t327) = t331;
    t332 = *((unsigned int *)t328);
    t333 = (t332 >> 31);
    t334 = (t333 & 1);
    *((unsigned int *)t325) = t334;
    t335 = ((char*)((ng2)));
    memset(t336, 0, 8);
    t337 = (t327 + 4);
    t338 = (t335 + 4);
    t339 = *((unsigned int *)t327);
    t340 = *((unsigned int *)t335);
    t341 = (t339 ^ t340);
    t342 = *((unsigned int *)t337);
    t343 = *((unsigned int *)t338);
    t344 = (t342 ^ t343);
    t345 = (t341 | t344);
    t346 = *((unsigned int *)t337);
    t347 = *((unsigned int *)t338);
    t348 = (t346 | t347);
    t349 = (~(t348));
    t350 = (t345 & t349);
    if (t350 != 0)
        goto LAB94;

LAB91:    if (t348 != 0)
        goto LAB93;

LAB92:    *((unsigned int *)t336) = 1;

LAB94:    t353 = *((unsigned int *)t316);
    t354 = *((unsigned int *)t336);
    t355 = (t353 ^ t354);
    *((unsigned int *)t352) = t355;
    t356 = (t316 + 4);
    t357 = (t336 + 4);
    t358 = (t352 + 4);
    t359 = *((unsigned int *)t356);
    t360 = *((unsigned int *)t357);
    t361 = (t359 | t360);
    *((unsigned int *)t358) = t361;
    t362 = *((unsigned int *)t358);
    t363 = (t362 != 0);
    if (t363 == 1)
        goto LAB95;

LAB96:
LAB97:    memset(t366, 0, 8);
    t367 = (t352 + 4);
    t368 = *((unsigned int *)t367);
    t369 = (~(t368));
    t370 = *((unsigned int *)t352);
    t371 = (t370 & t369);
    t372 = (t371 & 1U);
    if (t372 != 0)
        goto LAB98;

LAB99:    if (*((unsigned int *)t367) != 0)
        goto LAB100;

LAB101:    t375 = *((unsigned int *)t302);
    t376 = *((unsigned int *)t366);
    t377 = (t375 & t376);
    *((unsigned int *)t374) = t377;
    t378 = (t302 + 4);
    t379 = (t366 + 4);
    t380 = (t374 + 4);
    t381 = *((unsigned int *)t378);
    t382 = *((unsigned int *)t379);
    t383 = (t381 | t382);
    *((unsigned int *)t380) = t383;
    t384 = *((unsigned int *)t380);
    t385 = (t384 != 0);
    if (t385 == 1)
        goto LAB102;

LAB103:
LAB104:    goto LAB90;

LAB93:    t351 = (t336 + 4);
    *((unsigned int *)t336) = 1;
    *((unsigned int *)t351) = 1;
    goto LAB94;

LAB95:    t364 = *((unsigned int *)t352);
    t365 = *((unsigned int *)t358);
    *((unsigned int *)t352) = (t364 | t365);
    goto LAB97;

LAB98:    *((unsigned int *)t366) = 1;
    goto LAB101;

LAB100:    t373 = (t366 + 4);
    *((unsigned int *)t366) = 1;
    *((unsigned int *)t373) = 1;
    goto LAB101;

LAB102:    t386 = *((unsigned int *)t374);
    t387 = *((unsigned int *)t380);
    *((unsigned int *)t374) = (t386 | t387);
    t388 = (t302 + 4);
    t389 = (t366 + 4);
    t390 = *((unsigned int *)t302);
    t391 = (~(t390));
    t392 = *((unsigned int *)t388);
    t393 = (~(t392));
    t394 = *((unsigned int *)t366);
    t395 = (~(t394));
    t396 = *((unsigned int *)t389);
    t397 = (~(t396));
    t398 = (t391 & t393);
    t399 = (t395 & t397);
    t400 = (~(t398));
    t401 = (~(t399));
    t402 = *((unsigned int *)t380);
    *((unsigned int *)t380) = (t402 & t400);
    t403 = *((unsigned int *)t380);
    *((unsigned int *)t380) = (t403 & t401);
    t404 = *((unsigned int *)t374);
    *((unsigned int *)t374) = (t404 & t400);
    t405 = *((unsigned int *)t374);
    *((unsigned int *)t374) = (t405 & t401);
    goto LAB104;

LAB105:    *((unsigned int *)t283) = 1;
    goto LAB108;

LAB107:    t412 = (t283 + 4);
    *((unsigned int *)t283) = 1;
    *((unsigned int *)t412) = 1;
    goto LAB108;

LAB109:    t417 = ((char*)((ng2)));
    goto LAB110;

LAB111:    t422 = ((char*)((ng5)));
    goto LAB112;

LAB113:    xsi_vlog_unsigned_bit_combine(t282, 1, t417, 1, t422, 1);
    goto LAB117;

LAB115:    memcpy(t282, t417, 8);
    goto LAB117;

}

static void Always_46_4(char *t0)
{
    char t10[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;

LAB0:    t1 = (t0 + 4472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 5104);
    *((int *)t2) = 1;
    t3 = (t0 + 4504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(72, ng0);

LAB45:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(48, ng0);

LAB26:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    t11 = *((unsigned int *)t8);
    t12 = *((unsigned int *)t9);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t7 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = (t10 + 4);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t14);
    t18 = (t16 | t17);
    *((unsigned int *)t15) = t18;
    t19 = *((unsigned int *)t15);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB27;

LAB28:
LAB29:    t41 = (t0 + 2568);
    xsi_vlogvar_assign_value(t41, t10, 0, 0, 32);
    goto LAB25;

LAB9:    xsi_set_current_line(51, ng0);

LAB30:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    *((unsigned int *)t9) = t18;
    t19 = *((unsigned int *)t9);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB31;

LAB32:
LAB33:    t23 = (t0 + 2568);
    xsi_vlogvar_assign_value(t23, t10, 0, 0, 32);
    goto LAB25;

LAB11:    xsi_set_current_line(54, ng0);

LAB34:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB25;

LAB13:    xsi_set_current_line(57, ng0);

LAB35:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB25;

LAB15:    xsi_set_current_line(60, ng0);

LAB36:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB25;

LAB17:    xsi_set_current_line(63, ng0);

LAB37:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    xsi_vlog_signed_less(t43, 32, t4, 32, t7, 32);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t43, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(66, ng0);

LAB38:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t4 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB40;

LAB39:    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB40;

LAB43:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB41;

LAB42:    t14 = (t0 + 2568);
    xsi_vlogvar_assign_value(t14, t10, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(69, ng0);

LAB44:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1208U);
    t7 = *((char **)t3);
    memset(t43, 0, 8);
    xsi_vlog_signed_add(t43, 32, t4, 32, t7, 32);
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t43, 0, 0, 32);
    goto LAB25;

LAB27:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t10) = (t21 | t22);
    t23 = (t8 + 4);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t8);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (~(t27));
    t29 = *((unsigned int *)t9);
    t30 = (~(t29));
    t31 = *((unsigned int *)t24);
    t32 = (~(t31));
    t33 = (t26 & t28);
    t34 = (t30 & t32);
    t35 = (~(t33));
    t36 = (~(t34));
    t37 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t37 & t35);
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t39 & t35);
    t40 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t40 & t36);
    goto LAB29;

LAB31:    t21 = *((unsigned int *)t10);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t21 | t22);
    t14 = (t4 + 4);
    t15 = (t7 + 4);
    t25 = *((unsigned int *)t14);
    t26 = (~(t25));
    t27 = *((unsigned int *)t4);
    t33 = (t27 & t26);
    t28 = *((unsigned int *)t15);
    t29 = (~(t28));
    t30 = *((unsigned int *)t7);
    t34 = (t30 & t29);
    t31 = (~(t33));
    t32 = (~(t34));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t31);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t32);
    goto LAB33;

LAB40:    t9 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB42;

LAB41:    *((unsigned int *)t10) = 1;
    goto LAB42;

}

static void Cont_78_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 5456);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 5120);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_07978729218441776570_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_38_0,(void *)NetDecl_39_1,(void *)NetDecl_40_2,(void *)Cont_41_3,(void *)Always_46_4,(void *)Cont_78_5};
	xsi_register_didat("work_m_07978729218441776570_0886308060", "isim/mips_txt_isim_beh.exe.sim/work/m_07978729218441776570_0886308060.didat");
	xsi_register_executes(pe);
}
