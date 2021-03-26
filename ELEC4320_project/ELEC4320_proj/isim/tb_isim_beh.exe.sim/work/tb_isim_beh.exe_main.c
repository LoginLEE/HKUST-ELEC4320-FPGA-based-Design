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
    xilinxcorelib_ver_m_00000000001358910285_0765305150_init();
    xilinxcorelib_ver_m_00000000001358910285_0509760525_init();
    xilinxcorelib_ver_m_00000000001687936702_0971055866_init();
    xilinxcorelib_ver_m_00000000000277421008_2419860218_init();
    xilinxcorelib_ver_m_00000000001603977570_2709164781_init();
    work_m_00000000003869038185_4119941257_init();
    work_m_00000000000330025133_3116031813_init();
    work_m_00000000003308009386_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003308009386_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
