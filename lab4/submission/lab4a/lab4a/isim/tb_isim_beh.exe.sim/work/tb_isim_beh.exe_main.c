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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_1699109208_init();
    xilinxcorelib_ver_m_00000000001358910285_1455008875_init();
    xilinxcorelib_ver_m_00000000001687936702_0045554083_init();
    xilinxcorelib_ver_m_00000000000277421008_3798946647_init();
    xilinxcorelib_ver_m_00000000001603977570_2027658658_init();
    work_m_00000000003869038185_2502363947_init();
    xilinxcorelib_ver_m_00000000000277421008_3050263869_init();
    xilinxcorelib_ver_m_00000000001603977570_1209324784_init();
    work_m_00000000003869038185_0204364433_init();
    xilinxcorelib_ver_m_00000000001358910285_2042259016_init();
    xilinxcorelib_ver_m_00000000001687936702_3218604958_init();
    xilinxcorelib_ver_m_00000000000277421008_0523918352_init();
    xilinxcorelib_ver_m_00000000001603977570_0874204358_init();
    work_m_00000000000403262735_1278310657_init();
    work_m_00000000004288007198_0611699149_init();
    work_m_00000000003308587812_3743922952_init();
    work_m_00000000002193492160_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002193492160_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
