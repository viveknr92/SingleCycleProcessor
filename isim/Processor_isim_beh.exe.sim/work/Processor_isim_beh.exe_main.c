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
    work_m_13961540544222265222_1350173414_init();
    work_m_02182611259767065479_0967961054_init();
    work_m_12509985240223836149_3995010707_init();
    work_m_06082196623934042222_2147438539_init();
    work_m_13836754520465859489_2058220583_init();
    work_m_12976744331776986204_0345568499_init();
    work_m_13626768623041839633_0254784918_init();
    work_m_11214142110993382688_1058299074_init();
    work_m_07862619459352702581_0886308060_init();
    work_m_10303694751283490176_2461264495_init();
    work_m_00921476852386842293_2773264786_init();
    work_m_14019184572650552706_3785057798_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_14019184572650552706_3785057798");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
