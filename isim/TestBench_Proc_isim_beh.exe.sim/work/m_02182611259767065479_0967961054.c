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
static const char *ng0 = "/home/ise/SharedFolder/SingleCycleComputer/SignExtend.v";
static int ng1[] = {5, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {1023U, 0U};
static int ng5[] = {15, 0};
static int ng6[] = {6, 0};
static unsigned int ng7[] = {0U, 0U};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t15[8];
    char t16[8];
    char t17[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    char *t30;
    unsigned int t31;
    int t32;
    int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t52;
    char *t53;
    unsigned int t54;
    char *t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;

LAB0:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 2952);
    *((int *)t2) = 1;
    t3 = (t0 + 2664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1320U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);
    t14 = (t0 + 1720);
    t18 = (t0 + 1720);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng1)));
    t22 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t15, t16, t17, ((int*)(t20)), 2, t21, 32, 1, t22, 32, 1);
    t23 = (t15 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (!(t24));
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    t30 = (t17 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1320U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t8 = *((unsigned int *)t3);
    t9 = (t8 >> 6);
    t10 = (t9 & 1);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 6);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    t6 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t7 = (t4 + 4);
    t14 = (t6 + 4);
    t24 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t6);
    t31 = (t24 ^ t27);
    t34 = *((unsigned int *)t7);
    t36 = *((unsigned int *)t14);
    t37 = (t34 ^ t36);
    t40 = (t31 | t37);
    t41 = *((unsigned int *)t7);
    t42 = *((unsigned int *)t14);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB11;

LAB8:    if (t43 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t15) = 1;

LAB11:    t19 = (t15 + 4);
    t46 = *((unsigned int *)t19);
    t47 = (~(t46));
    t48 = *((unsigned int *)t15);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1720);
    t5 = (t0 + 1720);
    t6 = (t5 + 72U);
    t7 = *((char **)t6);
    t14 = ((char*)((ng5)));
    t18 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t4, t15, t16, ((int*)(t7)), 2, t14, 32, 1, t18, 32, 1);
    t19 = (t4 + 4);
    t8 = *((unsigned int *)t19);
    t25 = (!(t8));
    t20 = (t15 + 4);
    t9 = *((unsigned int *)t20);
    t28 = (!(t9));
    t29 = (t25 && t28);
    t21 = (t16 + 4);
    t10 = *((unsigned int *)t21);
    t32 = (!(t10));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB17;

LAB18:
LAB14:    goto LAB2;

LAB6:    t34 = *((unsigned int *)t17);
    t35 = (t34 + 0);
    t36 = *((unsigned int *)t15);
    t37 = *((unsigned int *)t16);
    t38 = (t36 - t37);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t14, t4, t35, *((unsigned int *)t16), t39, 0LL);
    goto LAB7;

LAB10:    t18 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(30, ng0);
    t20 = ((char*)((ng4)));
    t21 = (t0 + 1720);
    t22 = (t0 + 1720);
    t23 = (t22 + 72U);
    t26 = *((char **)t23);
    t30 = ((char*)((ng5)));
    t52 = ((char*)((ng6)));
    xsi_vlog_convert_partindices(t16, t17, t51, ((int*)(t26)), 2, t30, 32, 1, t52, 32, 1);
    t53 = (t16 + 4);
    t54 = *((unsigned int *)t53);
    t25 = (!(t54));
    t55 = (t17 + 4);
    t56 = *((unsigned int *)t55);
    t28 = (!(t56));
    t29 = (t25 && t28);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t57);
    t32 = (!(t58));
    t33 = (t29 && t32);
    if (t33 == 1)
        goto LAB15;

LAB16:    goto LAB14;

LAB15:    t59 = *((unsigned int *)t51);
    t35 = (t59 + 0);
    t60 = *((unsigned int *)t16);
    t61 = *((unsigned int *)t17);
    t38 = (t60 - t61);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t21, t20, t35, *((unsigned int *)t17), t39, 0LL);
    goto LAB16;

LAB17:    t11 = *((unsigned int *)t16);
    t35 = (t11 + 0);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t15);
    t38 = (t12 - t13);
    t39 = (t38 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t35, *((unsigned int *)t15), t39, 0LL);
    goto LAB18;

}


extern void work_m_02182611259767065479_0967961054_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_02182611259767065479_0967961054", "isim/TestBench_Proc_isim_beh.exe.sim/work/m_02182611259767065479_0967961054.didat");
	xsi_register_executes(pe);
}
