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
static const char *ng0 = "/home/ise/SharedFolder/SingleCycleComputer/ALU.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static int ng5[] = {15, 0};



static void Always_35_0(char *t0)
{
    char t8[8];
    char t10[8];
    char t37[8];
    char t43[8];
    char t48[8];
    char t64[8];
    char t78[8];
    char t83[8];
    char t99[8];
    char t107[8];
    char t138[8];
    char t146[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t9;
    char *t11;
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
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    char *t150;
    char *t151;
    char *t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    char *t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    int t170;
    int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    unsigned int t177;
    char *t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    unsigned int t183;
    char *t184;
    char *t185;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 4056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 16, 0LL);
    t5 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t5, t2, 16, 0, 1, 0LL);

LAB13:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t5 + 4);
    t11 = (t7 + 4);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t9);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t9);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB17;

LAB14:    if (t21 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB18;

LAB19:
LAB20:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2472);
    t9 = (t7 + 72U);
    t11 = *((char **)t9);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t11, 2, t24, 32, 1);
    t25 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t31 = (t8 + 4);
    t32 = (t25 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t25);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t32);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB24;

LAB21:    if (t21 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t10) = 1;

LAB24:    t34 = (t10 + 4);
    t26 = *((unsigned int *)t34);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2472);
    t9 = (t7 + 72U);
    t11 = *((char **)t9);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t11, 2, t24, 32, 1);
    t25 = ((char*)((ng4)));
    memset(t10, 0, 8);
    t31 = (t8 + 4);
    t32 = (t25 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t25);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t32);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB31;

LAB28:    if (t21 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t10) = 1;

LAB31:    memset(t37, 0, 8);
    t34 = (t10 + 4);
    t26 = *((unsigned int *)t34);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t34) != 0)
        goto LAB34;

LAB35:    t36 = (t37 + 4);
    t38 = *((unsigned int *)t37);
    t39 = *((unsigned int *)t36);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB36;

LAB37:    memcpy(t146, t37, 8);

LAB38:    t178 = (t146 + 4);
    t179 = *((unsigned int *)t178);
    t180 = (~(t179));
    t181 = *((unsigned int *)t146);
    t182 = (t181 & t180);
    t183 = (t182 != 0);
    if (t183 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2472);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2472);
    t9 = (t7 + 72U);
    t11 = *((char **)t9);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t8, 32, t5, t11, 2, t24, 32, 1);
    t25 = ((char*)((ng1)));
    memset(t10, 0, 8);
    t31 = (t8 + 4);
    t32 = (t25 + 4);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t25);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t31);
    t16 = *((unsigned int *)t32);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t31);
    t20 = *((unsigned int *)t32);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB74;

LAB71:    if (t21 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t10) = 1;

LAB74:    memset(t37, 0, 8);
    t34 = (t10 + 4);
    t26 = *((unsigned int *)t34);
    t27 = (~(t26));
    t28 = *((unsigned int *)t10);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t34) != 0)
        goto LAB77;

LAB78:    t36 = (t37 + 4);
    t38 = *((unsigned int *)t37);
    t39 = *((unsigned int *)t36);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB79;

LAB80:    memcpy(t146, t37, 8);

LAB81:    t178 = (t146 + 4);
    t179 = *((unsigned int *)t178);
    t180 = (~(t179));
    t181 = *((unsigned int *)t146);
    t182 = (t181 & t180);
    t183 = (t182 != 0);
    if (t183 > 0)
        goto LAB111;

LAB112:
LAB113:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1592U);
    t5 = *((char **)t4);
    t4 = (t0 + 1752U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_add(t8, 17, t5, 16, t7, 16);
    t4 = (t0 + 1912U);
    t9 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 17, t8, 17, t9, 1);
    t4 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t4, t10, 0, 0, 16, 0LL);
    t11 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t11, t10, 16, 0, 1, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1592U);
    t5 = *((char **)t4);
    t4 = (t0 + 1752U);
    t7 = *((char **)t4);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 17, t5, 16, t7, 16);
    t4 = (t0 + 1912U);
    t9 = *((char **)t4);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 17, t8, 17, t9, 1);
    t4 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t4, t10, 0, 0, 16, 0LL);
    t11 = (t0 + 3112);
    xsi_vlogvar_wait_assign_value(t11, t10, 16, 0, 1, 0LL);
    goto LAB13;

LAB16:    t24 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(49, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 1, 0LL);
    goto LAB20;

LAB23:    t33 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(53, ng0);
    t35 = ((char*)((ng4)));
    t36 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 1, 0LL);
    goto LAB27;

LAB30:    t33 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t37) = 1;
    goto LAB35;

LAB34:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB35;

LAB36:    t41 = (t0 + 1592U);
    t42 = *((char **)t41);
    t41 = (t0 + 1552U);
    t44 = (t41 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t43, 32, t42, t45, 2, t46, 32, 1);
    t47 = ((char*)((ng1)));
    memset(t48, 0, 8);
    t49 = (t43 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB42;

LAB39:    if (t60 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t48) = 1;

LAB42:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t65) != 0)
        goto LAB45;

LAB46:    t72 = (t64 + 4);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB47;

LAB48:    memcpy(t107, t64, 8);

LAB49:    memset(t138, 0, 8);
    t139 = (t107 + 4);
    t140 = *((unsigned int *)t139);
    t141 = (~(t140));
    t142 = *((unsigned int *)t107);
    t143 = (t142 & t141);
    t144 = (t143 & 1U);
    if (t144 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t139) != 0)
        goto LAB63;

LAB64:    t147 = *((unsigned int *)t37);
    t148 = *((unsigned int *)t138);
    t149 = (t147 & t148);
    *((unsigned int *)t146) = t149;
    t150 = (t37 + 4);
    t151 = (t138 + 4);
    t152 = (t146 + 4);
    t153 = *((unsigned int *)t150);
    t154 = *((unsigned int *)t151);
    t155 = (t153 | t154);
    *((unsigned int *)t152) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 != 0);
    if (t157 == 1)
        goto LAB65;

LAB66:
LAB67:    goto LAB38;

LAB41:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB42;

LAB43:    *((unsigned int *)t64) = 1;
    goto LAB46;

LAB45:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB46;

LAB47:    t76 = (t0 + 1752U);
    t77 = *((char **)t76);
    t76 = (t0 + 1712U);
    t79 = (t76 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t78, 32, t77, t80, 2, t81, 32, 1);
    t82 = ((char*)((ng1)));
    memset(t83, 0, 8);
    t84 = (t78 + 4);
    t85 = (t82 + 4);
    t86 = *((unsigned int *)t78);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = *((unsigned int *)t84);
    t90 = *((unsigned int *)t85);
    t91 = (t89 ^ t90);
    t92 = (t88 | t91);
    t93 = *((unsigned int *)t84);
    t94 = *((unsigned int *)t85);
    t95 = (t93 | t94);
    t96 = (~(t95));
    t97 = (t92 & t96);
    if (t97 != 0)
        goto LAB53;

LAB50:    if (t95 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t83) = 1;

LAB53:    memset(t99, 0, 8);
    t100 = (t83 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t83);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t100) != 0)
        goto LAB56;

LAB57:    t108 = *((unsigned int *)t64);
    t109 = *((unsigned int *)t99);
    t110 = (t108 & t109);
    *((unsigned int *)t107) = t110;
    t111 = (t64 + 4);
    t112 = (t99 + 4);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t112);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t98 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t99) = 1;
    goto LAB57;

LAB56:    t106 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB57;

LAB58:    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t107) = (t119 | t120);
    t121 = (t64 + 4);
    t122 = (t99 + 4);
    t123 = *((unsigned int *)t64);
    t124 = (~(t123));
    t125 = *((unsigned int *)t121);
    t126 = (~(t125));
    t127 = *((unsigned int *)t99);
    t128 = (~(t127));
    t129 = *((unsigned int *)t122);
    t130 = (~(t129));
    t6 = (t124 & t126);
    t131 = (t128 & t130);
    t132 = (~(t6));
    t133 = (~(t131));
    t134 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t134 & t132);
    t135 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t135 & t133);
    t136 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t136 & t132);
    t137 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t137 & t133);
    goto LAB60;

LAB61:    *((unsigned int *)t138) = 1;
    goto LAB64;

LAB63:    t145 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB64;

LAB65:    t158 = *((unsigned int *)t146);
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t146) = (t158 | t159);
    t160 = (t37 + 4);
    t161 = (t138 + 4);
    t162 = *((unsigned int *)t37);
    t163 = (~(t162));
    t164 = *((unsigned int *)t160);
    t165 = (~(t164));
    t166 = *((unsigned int *)t138);
    t167 = (~(t166));
    t168 = *((unsigned int *)t161);
    t169 = (~(t168));
    t170 = (t163 & t165);
    t171 = (t167 & t169);
    t172 = (~(t170));
    t173 = (~(t171));
    t174 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t174 & t172);
    t175 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t175 & t173);
    t176 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t176 & t172);
    t177 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t177 & t173);
    goto LAB67;

LAB68:    xsi_set_current_line(57, ng0);
    t184 = ((char*)((ng4)));
    t185 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t185, t184, 0, 0, 1, 0LL);
    goto LAB70;

LAB73:    t33 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t37) = 1;
    goto LAB78;

LAB77:    t35 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB78;

LAB79:    t41 = (t0 + 1592U);
    t42 = *((char **)t41);
    t41 = (t0 + 1552U);
    t44 = (t41 + 72U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t43, 32, t42, t45, 2, t46, 32, 1);
    t47 = ((char*)((ng4)));
    memset(t48, 0, 8);
    t49 = (t43 + 4);
    t50 = (t47 + 4);
    t51 = *((unsigned int *)t43);
    t52 = *((unsigned int *)t47);
    t53 = (t51 ^ t52);
    t54 = *((unsigned int *)t49);
    t55 = *((unsigned int *)t50);
    t56 = (t54 ^ t55);
    t57 = (t53 | t56);
    t58 = *((unsigned int *)t49);
    t59 = *((unsigned int *)t50);
    t60 = (t58 | t59);
    t61 = (~(t60));
    t62 = (t57 & t61);
    if (t62 != 0)
        goto LAB85;

LAB82:    if (t60 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t48) = 1;

LAB85:    memset(t64, 0, 8);
    t65 = (t48 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t48);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB86;

LAB87:    if (*((unsigned int *)t65) != 0)
        goto LAB88;

LAB89:    t72 = (t64 + 4);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB90;

LAB91:    memcpy(t107, t64, 8);

LAB92:    memset(t138, 0, 8);
    t139 = (t107 + 4);
    t140 = *((unsigned int *)t139);
    t141 = (~(t140));
    t142 = *((unsigned int *)t107);
    t143 = (t142 & t141);
    t144 = (t143 & 1U);
    if (t144 != 0)
        goto LAB104;

LAB105:    if (*((unsigned int *)t139) != 0)
        goto LAB106;

LAB107:    t147 = *((unsigned int *)t37);
    t148 = *((unsigned int *)t138);
    t149 = (t147 & t148);
    *((unsigned int *)t146) = t149;
    t150 = (t37 + 4);
    t151 = (t138 + 4);
    t152 = (t146 + 4);
    t153 = *((unsigned int *)t150);
    t154 = *((unsigned int *)t151);
    t155 = (t153 | t154);
    *((unsigned int *)t152) = t155;
    t156 = *((unsigned int *)t152);
    t157 = (t156 != 0);
    if (t157 == 1)
        goto LAB108;

LAB109:
LAB110:    goto LAB81;

LAB84:    t63 = (t48 + 4);
    *((unsigned int *)t48) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB85;

LAB86:    *((unsigned int *)t64) = 1;
    goto LAB89;

LAB88:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB89;

LAB90:    t76 = (t0 + 1752U);
    t77 = *((char **)t76);
    t76 = (t0 + 1712U);
    t79 = (t76 + 72U);
    t80 = *((char **)t79);
    t81 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t78, 32, t77, t80, 2, t81, 32, 1);
    t82 = ((char*)((ng4)));
    memset(t83, 0, 8);
    t84 = (t78 + 4);
    t85 = (t82 + 4);
    t86 = *((unsigned int *)t78);
    t87 = *((unsigned int *)t82);
    t88 = (t86 ^ t87);
    t89 = *((unsigned int *)t84);
    t90 = *((unsigned int *)t85);
    t91 = (t89 ^ t90);
    t92 = (t88 | t91);
    t93 = *((unsigned int *)t84);
    t94 = *((unsigned int *)t85);
    t95 = (t93 | t94);
    t96 = (~(t95));
    t97 = (t92 & t96);
    if (t97 != 0)
        goto LAB96;

LAB93:    if (t95 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t83) = 1;

LAB96:    memset(t99, 0, 8);
    t100 = (t83 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (~(t101));
    t103 = *((unsigned int *)t83);
    t104 = (t103 & t102);
    t105 = (t104 & 1U);
    if (t105 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t100) != 0)
        goto LAB99;

LAB100:    t108 = *((unsigned int *)t64);
    t109 = *((unsigned int *)t99);
    t110 = (t108 & t109);
    *((unsigned int *)t107) = t110;
    t111 = (t64 + 4);
    t112 = (t99 + 4);
    t113 = (t107 + 4);
    t114 = *((unsigned int *)t111);
    t115 = *((unsigned int *)t112);
    t116 = (t114 | t115);
    *((unsigned int *)t113) = t116;
    t117 = *((unsigned int *)t113);
    t118 = (t117 != 0);
    if (t118 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB92;

LAB95:    t98 = (t83 + 4);
    *((unsigned int *)t83) = 1;
    *((unsigned int *)t98) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t99) = 1;
    goto LAB100;

LAB99:    t106 = (t99 + 4);
    *((unsigned int *)t99) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB100;

LAB101:    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t107) = (t119 | t120);
    t121 = (t64 + 4);
    t122 = (t99 + 4);
    t123 = *((unsigned int *)t64);
    t124 = (~(t123));
    t125 = *((unsigned int *)t121);
    t126 = (~(t125));
    t127 = *((unsigned int *)t99);
    t128 = (~(t127));
    t129 = *((unsigned int *)t122);
    t130 = (~(t129));
    t6 = (t124 & t126);
    t131 = (t128 & t130);
    t132 = (~(t6));
    t133 = (~(t131));
    t134 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t134 & t132);
    t135 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t135 & t133);
    t136 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t136 & t132);
    t137 = *((unsigned int *)t107);
    *((unsigned int *)t107) = (t137 & t133);
    goto LAB103;

LAB104:    *((unsigned int *)t138) = 1;
    goto LAB107;

LAB106:    t145 = (t138 + 4);
    *((unsigned int *)t138) = 1;
    *((unsigned int *)t145) = 1;
    goto LAB107;

LAB108:    t158 = *((unsigned int *)t146);
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t146) = (t158 | t159);
    t160 = (t37 + 4);
    t161 = (t138 + 4);
    t162 = *((unsigned int *)t37);
    t163 = (~(t162));
    t164 = *((unsigned int *)t160);
    t165 = (~(t164));
    t166 = *((unsigned int *)t138);
    t167 = (~(t166));
    t168 = *((unsigned int *)t161);
    t169 = (~(t168));
    t170 = (t163 & t165);
    t171 = (t167 & t169);
    t172 = (~(t170));
    t173 = (~(t171));
    t174 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t174 & t172);
    t175 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t175 & t173);
    t176 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t176 & t172);
    t177 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t177 & t173);
    goto LAB110;

LAB111:    xsi_set_current_line(61, ng0);
    t184 = ((char*)((ng4)));
    t185 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t185, t184, 0, 0, 1, 0LL);
    goto LAB113;

}


extern void work_m_07862619459352702581_0886308060_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_07862619459352702581_0886308060", "isim/Processor_isim_beh.exe.sim/work/m_07862619459352702581_0886308060.didat");
	xsi_register_executes(pe);
}
