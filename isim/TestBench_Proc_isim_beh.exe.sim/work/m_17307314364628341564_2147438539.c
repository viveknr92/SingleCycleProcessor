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
static const char *ng0 = "/home/ise/SharedFolder/SingleCycleComputer/Inst_Mem.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {8584U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {11649U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {8321U, 0U};
static unsigned int ng8[] = {3U, 0U};
static unsigned int ng9[] = {41217U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {1296U, 0U};
static unsigned int ng12[] = {5U, 0U};
static unsigned int ng13[] = {50464U, 0U};
static unsigned int ng14[] = {6U, 0U};
static unsigned int ng15[] = {44417U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {35846U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {24705U, 0U};
static unsigned int ng20[] = {9U, 0U};
static unsigned int ng21[] = {16897U, 0U};
static int ng22[] = {0, 0};



static void Always_42_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4584);
    *((int *)t2) = 1;
    t3 = (t0 + 4296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 2952U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 32, t5, 16, t4, 32);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng18)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng20)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng22)));
    t3 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 16, 0LL);
    goto LAB29;

LAB9:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB11:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB13:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB15:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB17:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB19:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 3352);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB29;

}


extern void work_m_17307314364628341564_2147438539_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_17307314364628341564_2147438539", "isim/TestBench_Proc_isim_beh.exe.sim/work/m_17307314364628341564_2147438539.didat");
	xsi_register_executes(pe);
}
