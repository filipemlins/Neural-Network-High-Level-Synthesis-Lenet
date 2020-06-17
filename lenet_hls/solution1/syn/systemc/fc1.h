// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fc1_HH_
#define _fc1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1.h"
#include "lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1.h"
#include "lenet_hls_fcmp_32ns_32ns_1_1_1.h"
#include "fc1_fc1_layer_weights.h"
#include "fc1_fc1_layer_bias.h"
#include "fc1_output.h"
#include "fc1_fc1_buff.h"

namespace ap_rtl {

struct fc1 : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_in< sc_logic > start_full_n;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > start_out;
    sc_out< sc_logic > start_write;
    sc_out< sc_lv<32> > out_V_din;
    sc_in< sc_logic > out_V_full_n;
    sc_out< sc_logic > out_V_write;
    sc_in< sc_lv<32> > in_V_dout;
    sc_in< sc_logic > in_V_empty_n;
    sc_out< sc_logic > in_V_read;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<5> > ap_var_for_const2;


    // Module declarations
    fc1(sc_module_name name);
    SC_HAS_PROCESS(fc1);

    ~fc1();

    sc_trace_file* mVcdFile;

    fc1_fc1_layer_weights* fc1_layer_weights_U;
    fc1_fc1_layer_bias* fc1_layer_bias_U;
    fc1_output* output_U;
    fc1_fc1_buff* fc1_buff_U;
    lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1<1,5,32,32,32>* lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1_U29;
    lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1_U30;
    lenet_hls_fcmp_32ns_32ns_1_1_1<1,1,32,32,1>* lenet_hls_fcmp_32ns_32ns_1_1_1_U31;
    sc_signal< sc_logic > real_start;
    sc_signal< sc_logic > start_once_reg;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<28> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > internal_ap_ready;
    sc_signal< sc_lv<17> > fc1_layer_weights_address0;
    sc_signal< sc_logic > fc1_layer_weights_ce0;
    sc_signal< sc_lv<32> > fc1_layer_weights_q0;
    sc_signal< sc_lv<7> > fc1_layer_bias_address0;
    sc_signal< sc_logic > fc1_layer_bias_ce0;
    sc_signal< sc_lv<32> > fc1_layer_bias_q0;
    sc_signal< sc_logic > out_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > in_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond9_fu_381_p2;
    sc_signal< sc_lv<32> > output_q0;
    sc_signal< sc_lv<32> > reg_320;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_lv<32> > grp_fu_307_p2;
    sc_signal< sc_lv<32> > reg_325;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<7> > indvarinc_fu_331_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<17> > indvarinc1_fu_348_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<10> > i_cast5_fu_365_p1;
    sc_signal< sc_lv<10> > i_cast5_reg_573;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<5> > i_8_fu_375_p2;
    sc_signal< sc_lv<5> > i_8_reg_581;
    sc_signal< sc_lv<6> > j_5_fu_387_p2;
    sc_signal< bool > ap_block_state5;
    sc_signal< sc_lv<10> > j_6_fu_417_p2;
    sc_signal< sc_lv<10> > j_6_reg_597;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond8_fu_411_p2;
    sc_signal< sc_lv<18> > tmp_62_fu_452_p2;
    sc_signal< sc_lv<18> > tmp_62_reg_607;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > fc1_buff_q0;
    sc_signal< sc_lv<32> > fc1_buff_load_reg_612;
    sc_signal< sc_lv<7> > i_10_fu_464_p2;
    sc_signal< sc_lv<7> > i_10_reg_620;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > exitcond7_fu_458_p2;
    sc_signal< sc_lv<32> > fc1_layer_weights_lo_reg_630;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<7> > output_addr_7_reg_635;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<32> > grp_fu_311_p2;
    sc_signal< sc_lv<32> > tmp_55_reg_640;
    sc_signal< sc_lv<7> > i_9_fu_495_p2;
    sc_signal< sc_lv<7> > i_9_reg_648;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<1> > exitcond_fu_489_p2;
    sc_signal< sc_lv<32> > fc1_layer_bias_load_reg_663;
    sc_signal< sc_lv<32> > tmp_64_fu_549_p3;
    sc_signal< sc_lv<32> > tmp_64_reg_668;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_lv<7> > output_address0;
    sc_signal< sc_logic > output_ce0;
    sc_signal< sc_logic > output_we0;
    sc_signal< sc_lv<32> > output_d0;
    sc_signal< sc_lv<17> > fc1_buff_address0;
    sc_signal< sc_logic > fc1_buff_ce0;
    sc_signal< sc_logic > fc1_buff_we0;
    sc_signal< sc_lv<32> > fc1_buff_d0;
    sc_signal< sc_lv<7> > invdar_reg_228;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > tmp_s_fu_342_p2;
    sc_signal< sc_lv<17> > invdar1_reg_239;
    sc_signal< sc_lv<1> > tmp_47_fu_359_p2;
    sc_signal< sc_lv<5> > i_reg_250;
    sc_signal< sc_lv<6> > j_reg_261;
    sc_signal< sc_lv<1> > exitcond3_fu_369_p2;
    sc_signal< sc_lv<10> > j1_reg_272;
    sc_signal< sc_lv<7> > i2_reg_284;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<7> > i3_reg_296;
    sc_signal< sc_lv<64> > tmp_fu_337_p1;
    sc_signal< sc_lv<64> > tmp_46_fu_354_p1;
    sc_signal< sc_lv<64> > tmp_51_fu_406_p1;
    sc_signal< sc_lv<64> > tmp_48_fu_423_p1;
    sc_signal< sc_lv<64> > tmp_65_cast_fu_479_p1;
    sc_signal< sc_lv<64> > tmp_54_fu_484_p1;
    sc_signal< sc_lv<64> > tmp_52_fu_501_p1;
    sc_signal< sc_lv<32> > grp_fu_307_p1;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<10> > tmp_49_fu_393_p3;
    sc_signal< sc_lv<10> > tmp_50_fu_401_p2;
    sc_signal< sc_lv<17> > tmp_57_fu_428_p3;
    sc_signal< sc_lv<13> > tmp_61_fu_440_p3;
    sc_signal< sc_lv<18> > p_shl_cast_fu_436_p1;
    sc_signal< sc_lv<18> > p_shl1_cast_fu_448_p1;
    sc_signal< sc_lv<18> > tmp_54_cast_fu_470_p1;
    sc_signal< sc_lv<18> > tmp_65_fu_474_p2;
    sc_signal< sc_lv<32> > a_assign_to_int_fu_507_p1;
    sc_signal< sc_lv<8> > tmp_53_fu_511_p4;
    sc_signal< sc_lv<23> > tmp_66_fu_521_p1;
    sc_signal< sc_lv<1> > notrhs_fu_531_p2;
    sc_signal< sc_lv<1> > notlhs_fu_525_p2;
    sc_signal< sc_lv<1> > tmp_58_fu_537_p2;
    sc_signal< sc_lv<1> > tmp_59_fu_315_p2;
    sc_signal< sc_lv<1> > tmp_60_fu_543_p2;
    sc_signal< sc_lv<28> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<28> ap_ST_fsm_state1;
    static const sc_lv<28> ap_ST_fsm_state2;
    static const sc_lv<28> ap_ST_fsm_state3;
    static const sc_lv<28> ap_ST_fsm_state4;
    static const sc_lv<28> ap_ST_fsm_state5;
    static const sc_lv<28> ap_ST_fsm_state6;
    static const sc_lv<28> ap_ST_fsm_state7;
    static const sc_lv<28> ap_ST_fsm_state8;
    static const sc_lv<28> ap_ST_fsm_state9;
    static const sc_lv<28> ap_ST_fsm_state10;
    static const sc_lv<28> ap_ST_fsm_state11;
    static const sc_lv<28> ap_ST_fsm_state12;
    static const sc_lv<28> ap_ST_fsm_state13;
    static const sc_lv<28> ap_ST_fsm_state14;
    static const sc_lv<28> ap_ST_fsm_state15;
    static const sc_lv<28> ap_ST_fsm_state16;
    static const sc_lv<28> ap_ST_fsm_state17;
    static const sc_lv<28> ap_ST_fsm_state18;
    static const sc_lv<28> ap_ST_fsm_state19;
    static const sc_lv<28> ap_ST_fsm_state20;
    static const sc_lv<28> ap_ST_fsm_state21;
    static const sc_lv<28> ap_ST_fsm_state22;
    static const sc_lv<28> ap_ST_fsm_state23;
    static const sc_lv<28> ap_ST_fsm_state24;
    static const sc_lv<28> ap_ST_fsm_state25;
    static const sc_lv<28> ap_ST_fsm_state26;
    static const sc_lv<28> ap_ST_fsm_state27;
    static const sc_lv<28> ap_ST_fsm_state28;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<17> ap_const_lv17_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<7> ap_const_lv7_77;
    static const sc_lv<17> ap_const_lv17_1;
    static const sc_lv<17> ap_const_lv17_10DFF;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<6> ap_const_lv6_24;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<10> ap_const_lv10_240;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<7> ap_const_lv7_78;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_clk_no_reset_();
    void thread_a_assign_to_int_fu_507_p1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond3_fu_369_p2();
    void thread_exitcond7_fu_458_p2();
    void thread_exitcond8_fu_411_p2();
    void thread_exitcond9_fu_381_p2();
    void thread_exitcond_fu_489_p2();
    void thread_fc1_buff_address0();
    void thread_fc1_buff_ce0();
    void thread_fc1_buff_d0();
    void thread_fc1_buff_we0();
    void thread_fc1_layer_bias_address0();
    void thread_fc1_layer_bias_ce0();
    void thread_fc1_layer_weights_address0();
    void thread_fc1_layer_weights_ce0();
    void thread_grp_fu_307_p1();
    void thread_i_10_fu_464_p2();
    void thread_i_8_fu_375_p2();
    void thread_i_9_fu_495_p2();
    void thread_i_cast5_fu_365_p1();
    void thread_in_V_blk_n();
    void thread_in_V_read();
    void thread_indvarinc1_fu_348_p2();
    void thread_indvarinc_fu_331_p2();
    void thread_internal_ap_ready();
    void thread_j_5_fu_387_p2();
    void thread_j_6_fu_417_p2();
    void thread_notlhs_fu_525_p2();
    void thread_notrhs_fu_531_p2();
    void thread_out_V_blk_n();
    void thread_out_V_din();
    void thread_out_V_write();
    void thread_output_address0();
    void thread_output_ce0();
    void thread_output_d0();
    void thread_output_we0();
    void thread_p_shl1_cast_fu_448_p1();
    void thread_p_shl_cast_fu_436_p1();
    void thread_real_start();
    void thread_start_out();
    void thread_start_write();
    void thread_tmp_46_fu_354_p1();
    void thread_tmp_47_fu_359_p2();
    void thread_tmp_48_fu_423_p1();
    void thread_tmp_49_fu_393_p3();
    void thread_tmp_50_fu_401_p2();
    void thread_tmp_51_fu_406_p1();
    void thread_tmp_52_fu_501_p1();
    void thread_tmp_53_fu_511_p4();
    void thread_tmp_54_cast_fu_470_p1();
    void thread_tmp_54_fu_484_p1();
    void thread_tmp_57_fu_428_p3();
    void thread_tmp_58_fu_537_p2();
    void thread_tmp_60_fu_543_p2();
    void thread_tmp_61_fu_440_p3();
    void thread_tmp_62_fu_452_p2();
    void thread_tmp_64_fu_549_p3();
    void thread_tmp_65_cast_fu_479_p1();
    void thread_tmp_65_fu_474_p2();
    void thread_tmp_66_fu_521_p1();
    void thread_tmp_fu_337_p1();
    void thread_tmp_s_fu_342_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
