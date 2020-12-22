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
static const char *ng0 = "C:/.Xilinx/extra2LPCompe475/Extra2LPTop.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};



static void Always_40_0(char *t0)
{
    char t7[16];
    char t12[16];
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;

LAB0:    t1 = (t0 + 3968U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4536);
    *((int *)t2) = 1;
    t3 = (t0 + 4000);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 3048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t5, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);

LAB12:    xsi_set_current_line(66, ng0);
    t8 = (t0 + 2408);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    xsi_vlogtype_concat(t7, 36, 36, 2U, t11, 4, t10, 32);
    t13 = (t0 + 2568);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    xsi_vlogtype_concat(t12, 36, 36, 2U, t16, 4, t15, 32);
    xsi_vlog_unsigned_add(t17, 36, t7, 36, t12, 36);
    t18 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t18, t17, 0, 0, 36, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t8, t5, 0, 0, 36, 0LL);
    goto LAB11;

LAB9:    xsi_set_current_line(71, ng0);

LAB13:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 2248);
    t5 = (t3 + 56U);
    t8 = *((char **)t5);
    t9 = ((char*)((ng4)));
    xsi_vlog_unsigned_lshift(t7, 36, t8, 36, t9, 32);
    t10 = (t0 + 2888);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    xsi_vlog_unsigned_add(t12, 36, t7, 36, t13, 32);
    t14 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, 0, 36, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB11;

}

static void Cont_83_1(char *t0)
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

LAB0:    t1 = (t0 + 4216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    xsi_vlog_bit_copy(t9, 0, t4, 0, 36);
    xsi_driver_vfirst_trans(t5, 0, 35);
    t10 = (t0 + 4552);
    *((int *)t10) = 1;

LAB1:    return;
}


extern void work_m_00000000001009652992_3375507604_init()
{
	static char *pe[] = {(void *)Always_40_0,(void *)Cont_83_1};
	xsi_register_didat("work_m_00000000001009652992_3375507604", "isim/Extra2LPTest_isim_beh.exe.sim/work/m_00000000001009652992_3375507604.didat");
	xsi_register_executes(pe);
}
