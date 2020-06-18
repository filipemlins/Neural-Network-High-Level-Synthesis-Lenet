// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _fc3_HH_
#define _fc3_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1.h"
#include "lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1.h"
#include "lenet_hls_fdiv_32ns_32ns_32_16_1.h"
#include "lenet_hls_fexp_32ns_32ns_32_9_full_dsp_1.h"
#include "fc3_fc3_layer_weights.h"
#include "fc3_fc3_layer_bias.h"
#include "fc3_output.h"

namespace ap_rtl {

struct fc3 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_in< sc_logic > ap_continue;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<32> > out_V_din;
    sc_in< sc_logic > out_V_full_n;
    sc_out< sc_logic > out_V_write;
    sc_in< sc_lv<32> > in_V_dout;
    sc_in< sc_logic > in_V_empty_n;
    sc_out< sc_logic > in_V_read;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;


    // Module declarations
    fc3(sc_module_name name);
    SC_HAS_PROCESS(fc3);

    ~fc3();

    sc_trace_file* mVcdFile;

    fc3_fc3_layer_weights* fc3_layer_weights_U;
    fc3_fc3_layer_bias* fc3_layer_bias_U;
    fc3_output* output_U;
    lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1<1,5,32,32,32>* lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1_U46;
    lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1<1,4,32,32,32>* lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1_U47;
    lenet_hls_fdiv_32ns_32ns_32_16_1<1,16,32,32,32>* lenet_hls_fdiv_32ns_32ns_32_16_1_U48;
    lenet_hls_fexp_32ns_32ns_32_9_full_dsp_1<1,9,32,32,32>* lenet_hls_fexp_32ns_32ns_32_9_full_dsp_1_U49;
    sc_signal< sc_logic > ap_done_reg;
    sc_signal< sc_lv<64> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > fc3_layer_weights_address0;
    sc_signal< sc_logic > fc3_layer_weights_ce0;
    sc_signal< sc_lv<32> > fc3_layer_weights_q0;
    sc_signal< sc_lv<4> > fc3_layer_bias_address0;
    sc_signal< sc_logic > fc3_layer_bias_ce0;
    sc_signal< sc_lv<32> > fc3_layer_bias_q0;
    sc_signal< sc_logic > out_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state64;
    sc_signal< sc_logic > in_V_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > exitcond9_fu_297_p2;
    sc_signal< sc_lv<32> > output_q0;
    sc_signal< sc_lv<32> > reg_262;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<32> > grp_fu_243_p2;
    sc_signal< sc_lv<32> > reg_268;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > grp_fu_257_p2;
    sc_signal< sc_lv<32> > reg_274;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_lv<4> > indvarinc_fu_280_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > j_3_fu_303_p2;
    sc_signal< sc_lv<7> > j_3_reg_416;
    sc_signal< bool > ap_block_state3;
    sc_signal< sc_lv<32> > tmp_40_reg_421;
    sc_signal< sc_lv<11> > tmp_28_fu_333_p2;
    sc_signal< sc_lv<11> > tmp_28_reg_426;
    sc_signal< sc_lv<4> > i_4_fu_345_p2;
    sc_signal< sc_lv<4> > i_4_reg_434;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > exitcond8_fu_339_p2;
    sc_signal< sc_lv<32> > fc3_layer_weights_lo_reg_444;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > output_addr_2_reg_449;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > grp_fu_248_p2;
    sc_signal< sc_lv<32> > tmp_32_reg_454;
    sc_signal< sc_lv<4> > i_3_fu_376_p2;
    sc_signal< sc_lv<4> > i_3_reg_462;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<1> > exitcond7_fu_370_p2;
    sc_signal< sc_lv<4> > output_addr_1_reg_472;
    sc_signal< sc_lv<32> > fc3_layer_bias_load_reg_477;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_lv<4> > i_5_fu_394_p2;
    sc_signal< sc_lv<4> > i_5_reg_490;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<1> > exitcond_fu_388_p2;
    sc_signal< sc_lv<32> > grp_fu_252_p2;
    sc_signal< sc_lv<32> > tmp_35_reg_500;
    sc_signal< sc_logic > ap_CS_fsm_state63;
    sc_signal< sc_lv<4> > output_address0;
    sc_signal< sc_logic > output_ce0;
    sc_signal< sc_logic > output_we0;
    sc_signal< sc_lv<32> > output_d0;
    sc_signal< sc_lv<4> > invdar_reg_175;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<1> > tmp_s_fu_291_p2;
    sc_signal< sc_lv<7> > j_reg_186;
    sc_signal< sc_lv<4> > i_reg_197;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<32> > soft_max_value_reg_209;
    sc_signal< sc_lv<4> > i1_reg_221;
    sc_signal< sc_lv<4> > i2_reg_232;
    sc_signal< sc_lv<64> > tmp_fu_286_p1;
    sc_signal< sc_lv<64> > tmp_38_cast_fu_360_p1;
    sc_signal< sc_lv<64> > tmp_30_fu_365_p1;
    sc_signal< sc_lv<64> > tmp_29_fu_382_p1;
    sc_signal< sc_lv<64> > tmp_34_fu_400_p1;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > grp_fu_243_p0;
    sc_signal< sc_lv<32> > grp_fu_243_p1;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_lv<32> > grp_fu_257_p1;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<10> > tmp_26_fu_309_p3;
    sc_signal< sc_lv<8> > tmp_27_fu_321_p3;
    sc_signal< sc_lv<11> > p_shl1_cast_fu_329_p1;
    sc_signal< sc_lv<11> > p_shl_cast_fu_317_p1;
    sc_signal< sc_lv<11> > tmp_31_cast_fu_351_p1;
    sc_signal< sc_lv<11> > tmp_31_fu_355_p2;
    sc_signal< sc_lv<64> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<64> ap_ST_fsm_state1;
    static const sc_lv<64> ap_ST_fsm_state2;
    static const sc_lv<64> ap_ST_fsm_state3;
    static const sc_lv<64> ap_ST_fsm_state4;
    static const sc_lv<64> ap_ST_fsm_state5;
    static const sc_lv<64> ap_ST_fsm_state6;
    static const sc_lv<64> ap_ST_fsm_state7;
    static const sc_lv<64> ap_ST_fsm_state8;
    static const sc_lv<64> ap_ST_fsm_state9;
    static const sc_lv<64> ap_ST_fsm_state10;
    static const sc_lv<64> ap_ST_fsm_state11;
    static const sc_lv<64> ap_ST_fsm_state12;
    static const sc_lv<64> ap_ST_fsm_state13;
    static const sc_lv<64> ap_ST_fsm_state14;
    static const sc_lv<64> ap_ST_fsm_state15;
    static const sc_lv<64> ap_ST_fsm_state16;
    static const sc_lv<64> ap_ST_fsm_state17;
    static const sc_lv<64> ap_ST_fsm_state18;
    static const sc_lv<64> ap_ST_fsm_state19;
    static const sc_lv<64> ap_ST_fsm_state20;
    static const sc_lv<64> ap_ST_fsm_state21;
    static const sc_lv<64> ap_ST_fsm_state22;
    static const sc_lv<64> ap_ST_fsm_state23;
    static const sc_lv<64> ap_ST_fsm_state24;
    static const sc_lv<64> ap_ST_fsm_state25;
    static const sc_lv<64> ap_ST_fsm_state26;
    static const sc_lv<64> ap_ST_fsm_state27;
    static const sc_lv<64> ap_ST_fsm_state28;
    static const sc_lv<64> ap_ST_fsm_state29;
    static const sc_lv<64> ap_ST_fsm_state30;
    static const sc_lv<64> ap_ST_fsm_state31;
    static const sc_lv<64> ap_ST_fsm_state32;
    static const sc_lv<64> ap_ST_fsm_state33;
    static const sc_lv<64> ap_ST_fsm_state34;
    static const sc_lv<64> ap_ST_fsm_state35;
    static const sc_lv<64> ap_ST_fsm_state36;
    static const sc_lv<64> ap_ST_fsm_state37;
    static const sc_lv<64> ap_ST_fsm_state38;
    static const sc_lv<64> ap_ST_fsm_state39;
    static const sc_lv<64> ap_ST_fsm_state40;
    static const sc_lv<64> ap_ST_fsm_state41;
    static const sc_lv<64> ap_ST_fsm_state42;
    static const sc_lv<64> ap_ST_fsm_state43;
    static const sc_lv<64> ap_ST_fsm_state44;
    static const sc_lv<64> ap_ST_fsm_state45;
    static const sc_lv<64> ap_ST_fsm_state46;
    static const sc_lv<64> ap_ST_fsm_state47;
    static const sc_lv<64> ap_ST_fsm_state48;
    static const sc_lv<64> ap_ST_fsm_state49;
    static const sc_lv<64> ap_ST_fsm_state50;
    static const sc_lv<64> ap_ST_fsm_state51;
    static const sc_lv<64> ap_ST_fsm_state52;
    static const sc_lv<64> ap_ST_fsm_state53;
    static const sc_lv<64> ap_ST_fsm_state54;
    static const sc_lv<64> ap_ST_fsm_state55;
    static const sc_lv<64> ap_ST_fsm_state56;
    static const sc_lv<64> ap_ST_fsm_state57;
    static const sc_lv<64> ap_ST_fsm_state58;
    static const sc_lv<64> ap_ST_fsm_state59;
    static const sc_lv<64> ap_ST_fsm_state60;
    static const sc_lv<64> ap_ST_fsm_state61;
    static const sc_lv<64> ap_ST_fsm_state62;
    static const sc_lv<64> ap_ST_fsm_state63;
    static const sc_lv<64> ap_ST_fsm_state64;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_9;
    static const sc_lv<7> ap_const_lv7_54;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_A;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state63();
    void thread_ap_CS_fsm_state64();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state1();
    void thread_ap_block_state3();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond7_fu_370_p2();
    void thread_exitcond8_fu_339_p2();
    void thread_exitcond9_fu_297_p2();
    void thread_exitcond_fu_388_p2();
    void thread_fc3_layer_bias_address0();
    void thread_fc3_layer_bias_ce0();
    void thread_fc3_layer_weights_address0();
    void thread_fc3_layer_weights_ce0();
    void thread_grp_fu_243_p0();
    void thread_grp_fu_243_p1();
    void thread_grp_fu_257_p1();
    void thread_i_3_fu_376_p2();
    void thread_i_4_fu_345_p2();
    void thread_i_5_fu_394_p2();
    void thread_in_V_blk_n();
    void thread_in_V_read();
    void thread_indvarinc_fu_280_p2();
    void thread_j_3_fu_303_p2();
    void thread_out_V_blk_n();
    void thread_out_V_din();
    void thread_out_V_write();
    void thread_output_address0();
    void thread_output_ce0();
    void thread_output_d0();
    void thread_output_we0();
    void thread_p_shl1_cast_fu_329_p1();
    void thread_p_shl_cast_fu_317_p1();
    void thread_tmp_26_fu_309_p3();
    void thread_tmp_27_fu_321_p3();
    void thread_tmp_28_fu_333_p2();
    void thread_tmp_29_fu_382_p1();
    void thread_tmp_30_fu_365_p1();
    void thread_tmp_31_cast_fu_351_p1();
    void thread_tmp_31_fu_355_p2();
    void thread_tmp_34_fu_400_p1();
    void thread_tmp_38_cast_fu_360_p1();
    void thread_tmp_fu_286_p1();
    void thread_tmp_s_fu_291_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
