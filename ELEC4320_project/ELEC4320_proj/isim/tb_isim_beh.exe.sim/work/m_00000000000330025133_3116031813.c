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
static const char *ng0 = "C:/Users/cljchanac/Desktop/ELEC4320_project/ELEC4320_proj/image_main.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {100, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {6U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {8U, 0U};
static unsigned int ng13[] = {9U, 0U};
static unsigned int ng14[] = {10U, 0U};
static int ng15[] = {9, 0};



static void Initial_50_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(50, ng0);

LAB2:    xsi_set_current_line(51, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 17, 0LL);
    xsi_set_current_line(52, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2888);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3048);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_65_1(char *t0)
{
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

LAB0:    t1 = (t0 + 4856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6416);
    *((int *)t2) = 1;
    t3 = (t0 + 4888);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(66, ng0);

LAB9:    xsi_set_current_line(67, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 3208);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 17, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 7, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

}

static void Always_73_2(char *t0)
{
    char t14[8];
    char t15[8];
    char t20[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;

LAB0:    t1 = (t0 + 5104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 6432);
    *((int *)t2) = 1;
    t3 = (t0 + 5136);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t7, 5);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 5, t2, 5);
    if (t8 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(76, ng0);

LAB30:    xsi_set_current_line(77, ng0);
    t9 = ((char*)((ng4)));
    t10 = (t0 + 3528);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t12, 7, t13, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t9, 32, t14, 32);
    t16 = (t0 + 3368);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t18, 7, t19, 32);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t15, 32, t20, 32);
    t22 = (t0 + 3208);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 17);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB9:    xsi_set_current_line(82, ng0);

LAB31:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t7, 7, t9, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t3, 32, t14, 32);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t15, 32, t12, 7);
    t13 = (t0 + 3208);
    xsi_vlogvar_assign_value(t13, t20, 0, 0, 17);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t3, 8, t2, 32);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB11:    xsi_set_current_line(87, ng0);

LAB32:    xsi_set_current_line(88, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t7, 7, t9, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t3, 32, t14, 32);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t12, 7, t13, 32);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t15, 32, t20, 32);
    t16 = (t0 + 3208);
    xsi_vlogvar_assign_value(t16, t21, 0, 0, 17);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB13:    xsi_set_current_line(93, ng0);

LAB33:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t3, 32, t7, 7);
    t9 = (t0 + 3368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t11, 7, t12, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t14, 32, t15, 32);
    t13 = (t0 + 3208);
    xsi_vlogvar_assign_value(t13, t20, 0, 0, 17);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB15:    xsi_set_current_line(98, ng0);

LAB34:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t3, 32, t7, 7);
    t9 = (t0 + 3368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t14, 32, t11, 7);
    t12 = (t0 + 3208);
    xsi_vlogvar_assign_value(t12, t15, 0, 0, 17);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB17:    xsi_set_current_line(103, ng0);

LAB35:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t3, 32, t7, 7);
    t9 = (t0 + 3368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t11, 7, t12, 32);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t14, 32, t15, 32);
    t13 = (t0 + 3208);
    xsi_vlogvar_assign_value(t13, t20, 0, 0, 17);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB19:    xsi_set_current_line(109, ng0);

LAB36:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t7, 7, t9, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t3, 32, t14, 32);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t12, 7, t13, 32);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t15, 32, t20, 32);
    t16 = (t0 + 3208);
    xsi_vlogvar_assign_value(t16, t21, 0, 0, 17);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB21:    xsi_set_current_line(114, ng0);

LAB37:    xsi_set_current_line(115, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t7, 7, t9, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t3, 32, t14, 32);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t15, 32, t12, 7);
    t13 = (t0 + 3208);
    xsi_vlogvar_assign_value(t13, t20, 0, 0, 17);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB23:    xsi_set_current_line(119, ng0);

LAB38:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 3528);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t7, 7, t9, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_multiply(t15, 32, t3, 32, t14, 32);
    t10 = (t0 + 3368);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng3)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t12, 7, t13, 32);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t15, 32, t20, 32);
    t16 = (t0 + 3208);
    xsi_vlogvar_assign_value(t16, t21, 0, 0, 17);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t7, 8, t5, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t4, 32, t14, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t15, 0, 0, 32);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB25:    xsi_set_current_line(124, ng0);

LAB39:    xsi_set_current_line(125, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1368U);
    t9 = *((char **)t7);
    t7 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_multiply(t14, 32, t9, 8, t7, 32);
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t5, 32, t14, 32);
    t10 = (t0 + 2568);
    xsi_vlogvar_assign_value(t10, t15, 0, 0, 32);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 5, t5, 32);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 5);
    goto LAB29;

LAB27:    xsi_set_current_line(129, ng0);

LAB40:    xsi_set_current_line(130, ng0);
    t3 = (t0 + 2568);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng15)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_divide(t14, 32, t5, 32, t7, 32);
    t9 = (t0 + 2568);
    xsi_vlogvar_assign_value(t9, t14, 0, 0, 32);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t14, 0, 8);
    t5 = (t14 + 4);
    t7 = (t4 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (t23 >> 0);
    *((unsigned int *)t14) = t24;
    t25 = *((unsigned int *)t7);
    t26 = (t25 >> 0);
    *((unsigned int *)t5) = t26;
    t27 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t27 & 255U);
    t28 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t28 & 255U);
    t9 = (t0 + 2728);
    xsi_vlogvar_assign_value(t9, t14, 0, 0, 8);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 5);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 7, t5, 32);
    t7 = (t0 + 3368);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 7);
    xsi_set_current_line(134, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3368);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t14, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB42;

LAB41:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB44;

LAB43:    *((unsigned int *)t14) = 1;

LAB44:    t11 = (t14 + 4);
    t23 = *((unsigned int *)t11);
    t24 = (~(t23));
    t25 = *((unsigned int *)t14);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB46;

LAB47:
LAB48:    goto LAB29;

LAB42:    t10 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(136, ng0);

LAB49:    xsi_set_current_line(137, ng0);
    t12 = ((char*)((ng5)));
    t13 = (t0 + 3048);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3528);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t4, 7, t5, 32);
    t7 = (t0 + 3528);
    xsi_vlogvar_assign_value(t7, t14, 0, 0, 7);
    xsi_set_current_line(139, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    goto LAB48;

}

static void impl1_execute(char *t0)
{
    char t6[8];
    char t17[8];
    char t36[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    char *t50;
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
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    int t68;
    int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;

LAB0:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 6448);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t3 = (t0 + 3688);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB5;

LAB6:    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB8:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB9;

LAB10:    memcpy(t44, t6, 8);

LAB11:    xsi_vlogimplicitvar_assign_value(t3, t44, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t6) = 1;
    goto LAB8;

LAB7:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB8;

LAB9:    t18 = (t0 + 1048U);
    t19 = *((char **)t18);
    memset(t17, 0, 8);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB15;

LAB13:    if (*((unsigned int *)t18) == 0)
        goto LAB12;

LAB14:    t25 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t25) = 1;

LAB15:    t26 = (t17 + 4);
    t27 = (t19 + 4);
    t28 = *((unsigned int *)t19);
    t29 = (~(t28));
    *((unsigned int *)t17) = t29;
    *((unsigned int *)t26) = 0;
    if (*((unsigned int *)t27) != 0)
        goto LAB17;

LAB16:    t34 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t34 & 1U);
    t35 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t35 & 1U);
    memset(t36, 0, 8);
    t37 = (t17 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t17);
    t41 = (t40 & t39);
    t42 = (t41 & 1U);
    if (t42 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t37) != 0)
        goto LAB20;

LAB21:    t45 = *((unsigned int *)t6);
    t46 = *((unsigned int *)t36);
    t47 = (t45 & t46);
    *((unsigned int *)t44) = t47;
    t48 = (t6 + 4);
    t49 = (t36 + 4);
    t50 = (t44 + 4);
    t51 = *((unsigned int *)t48);
    t52 = *((unsigned int *)t49);
    t53 = (t51 | t52);
    *((unsigned int *)t50) = t53;
    t54 = *((unsigned int *)t50);
    t55 = (t54 != 0);
    if (t55 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB11;

LAB12:    *((unsigned int *)t17) = 1;
    goto LAB15;

LAB17:    t30 = *((unsigned int *)t17);
    t31 = *((unsigned int *)t27);
    *((unsigned int *)t17) = (t30 | t31);
    t32 = *((unsigned int *)t26);
    t33 = *((unsigned int *)t27);
    *((unsigned int *)t26) = (t32 | t33);
    goto LAB16;

LAB18:    *((unsigned int *)t36) = 1;
    goto LAB21;

LAB20:    t43 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB21;

LAB22:    t56 = *((unsigned int *)t44);
    t57 = *((unsigned int *)t50);
    *((unsigned int *)t44) = (t56 | t57);
    t58 = (t6 + 4);
    t59 = (t36 + 4);
    t60 = *((unsigned int *)t6);
    t61 = (~(t60));
    t62 = *((unsigned int *)t58);
    t63 = (~(t62));
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t59);
    t67 = (~(t66));
    t68 = (t61 & t63);
    t69 = (t65 & t67);
    t70 = (~(t68));
    t71 = (~(t69));
    t72 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t72 & t70);
    t73 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t73 & t71);
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & t70);
    t75 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t75 & t71);
    goto LAB24;

}

static void implSig1_execute(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
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
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 6544);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 6464);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void implSig2_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 5848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 6608);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}

static void implSig3_execute(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 6096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng1)));
    t3 = (t0 + 6672);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7);

LAB1:    return;
}


extern void work_m_00000000000330025133_3116031813_init()
{
	static char *pe[] = {(void *)Initial_50_0,(void *)Always_65_1,(void *)Always_73_2,(void *)impl1_execute,(void *)implSig1_execute,(void *)implSig2_execute,(void *)implSig3_execute};
	xsi_register_didat("work_m_00000000000330025133_3116031813", "isim/tb_isim_beh.exe.sim/work/m_00000000000330025133_3116031813.didat");
	xsi_register_executes(pe);
}
