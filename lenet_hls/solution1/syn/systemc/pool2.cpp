// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "pool2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic pool2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic pool2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<10> pool2::ap_ST_fsm_state1 = "1";
const sc_lv<10> pool2::ap_ST_fsm_state2 = "10";
const sc_lv<10> pool2::ap_ST_fsm_state3 = "100";
const sc_lv<10> pool2::ap_ST_fsm_state4 = "1000";
const sc_lv<10> pool2::ap_ST_fsm_state5 = "10000";
const sc_lv<10> pool2::ap_ST_fsm_state6 = "100000";
const sc_lv<10> pool2::ap_ST_fsm_state7 = "1000000";
const sc_lv<10> pool2::ap_ST_fsm_state8 = "10000000";
const sc_lv<10> pool2::ap_ST_fsm_state9 = "100000000";
const sc_lv<10> pool2::ap_ST_fsm_state10 = "1000000000";
const sc_lv<32> pool2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> pool2::ap_const_lv32_9 = "1001";
const sc_lv<1> pool2::ap_const_lv1_1 = "1";
const sc_lv<32> pool2::ap_const_lv32_2 = "10";
const sc_lv<1> pool2::ap_const_lv1_0 = "0";
const sc_lv<32> pool2::ap_const_lv32_1 = "1";
const sc_lv<32> pool2::ap_const_lv32_4 = "100";
const sc_lv<32> pool2::ap_const_lv32_5 = "101";
const sc_lv<32> pool2::ap_const_lv32_6 = "110";
const sc_lv<32> pool2::ap_const_lv32_7 = "111";
const sc_lv<32> pool2::ap_const_lv32_8 = "1000";
const sc_lv<5> pool2::ap_const_lv5_0 = "00000";
const sc_lv<32> pool2::ap_const_lv32_3 = "11";
const sc_lv<8> pool2::ap_const_lv8_0 = "00000000";
const sc_lv<4> pool2::ap_const_lv4_0 = "0000";
const sc_lv<2> pool2::ap_const_lv2_0 = "00";
const sc_lv<5> pool2::ap_const_lv5_10 = "10000";
const sc_lv<5> pool2::ap_const_lv5_1 = "1";
const sc_lv<8> pool2::ap_const_lv8_A9 = "10101001";
const sc_lv<8> pool2::ap_const_lv8_1 = "1";
const sc_lv<4> pool2::ap_const_lv4_C = "1100";
const sc_lv<4> pool2::ap_const_lv4_2 = "10";
const sc_lv<2> pool2::ap_const_lv2_2 = "10";
const sc_lv<2> pool2::ap_const_lv2_1 = "1";
const sc_lv<8> pool2::ap_const_lv8_D = "1101";
const sc_lv<5> pool2::ap_const_lv5_2 = "10";
const bool pool2::ap_const_boolean_1 = true;

pool2::pool2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    pool_buff_U = new pool2_pool_buff("pool_buff_U");
    pool_buff_U->clk(ap_clk);
    pool_buff_U->reset(ap_rst);
    pool_buff_U->address0(pool_buff_address0);
    pool_buff_U->ce0(pool_buff_ce0);
    pool_buff_U->we0(pool_buff_we0);
    pool_buff_U->d0(in_V_dout);
    pool_buff_U->q0(pool_buff_q0);
    lenet_hls_fcmp_32ns_32ns_1_1_1_U25 = new lenet_hls_fcmp_32ns_32ns_1_1_1<1,1,32,32,1>("lenet_hls_fcmp_32ns_32ns_1_1_1_U25");
    lenet_hls_fcmp_32ns_32ns_1_1_1_U25->din0(tmp_1_fu_104);
    lenet_hls_fcmp_32ns_32ns_1_1_1_U25->din1(value_reg_484);
    lenet_hls_fcmp_32ns_32ns_1_1_1_U25->opcode(ap_var_for_const0);
    lenet_hls_fcmp_32ns_32ns_1_1_1_U25->dout(tmp_11_fu_213_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );

    SC_METHOD(thread_ap_block_state10);
    sensitive << ( out_V_full_n );
    sensitive << ( or_cond_reg_480 );

    SC_METHOD(thread_ap_block_state3);
    sensitive << ( in_V_empty_n );
    sensitive << ( exitcond9_fu_234_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_222_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( real_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( internal_ap_ready );

    SC_METHOD(thread_array_access_fu_347_p2);
    sensitive << ( tmp_s_reg_446 );
    sensitive << ( tmp4_cast_fu_343_p1 );

    SC_METHOD(thread_exitcond1_fu_222_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( k_reg_145 );

    SC_METHOD(thread_exitcond8_fu_277_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( l_reg_191 );

    SC_METHOD(thread_exitcond9_fu_234_p2);
    sensitive << ( in_V_empty_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond9_fu_234_p2 );
    sensitive << ( p_reg_156 );

    SC_METHOD(thread_exitcond_fu_325_p2);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( m_reg_202 );

    SC_METHOD(thread_i_1_fu_263_p2);
    sensitive << ( i_reg_167 );

    SC_METHOD(thread_in_V_blk_n);
    sensitive << ( in_V_empty_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond9_fu_234_p2 );

    SC_METHOD(thread_in_V_read);
    sensitive << ( in_V_empty_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond9_fu_234_p2 );

    SC_METHOD(thread_internal_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_222_p2 );

    SC_METHOD(thread_j_1_fu_311_p2);
    sensitive << ( j_reg_179 );

    SC_METHOD(thread_k_1_fu_228_p2);
    sensitive << ( k_reg_145 );

    SC_METHOD(thread_l_1_fu_283_p2);
    sensitive << ( l_reg_191 );

    SC_METHOD(thread_l_cast4_fu_269_p1);
    sensitive << ( l_reg_191 );

    SC_METHOD(thread_m_1_fu_331_p2);
    sensitive << ( m_reg_202 );

    SC_METHOD(thread_m_cast2_cast_fu_317_p1);
    sensitive << ( m_reg_202 );

    SC_METHOD(thread_or_cond_fu_368_p2);
    sensitive << ( tmp_2_reg_451 );
    sensitive << ( tmp_13_fu_362_p2 );

    SC_METHOD(thread_out_V_blk_n);
    sensitive << ( out_V_full_n );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( or_cond_reg_480 );

    SC_METHOD(thread_out_V_din);
    sensitive << ( out_V_full_n );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( or_cond_reg_480 );
    sensitive << ( value_3_reg_491 );

    SC_METHOD(thread_out_V_write);
    sensitive << ( out_V_full_n );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( or_cond_reg_480 );

    SC_METHOD(thread_p_1_fu_240_p2);
    sensitive << ( p_reg_156 );

    SC_METHOD(thread_pool_buff_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( tmp_fu_246_p1 );
    sensitive << ( tmp_8_fu_357_p1 );

    SC_METHOD(thread_pool_buff_ce0);
    sensitive << ( in_V_empty_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond9_fu_234_p2 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_pool_buff_we0);
    sensitive << ( in_V_empty_n );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond9_fu_234_p2 );

    SC_METHOD(thread_real_start);
    sensitive << ( ap_start );
    sensitive << ( start_full_n );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_sel_tmp_fu_377_p2);
    sensitive << ( tmp_5_reg_469 );
    sensitive << ( tmp_11_fu_213_p2 );

    SC_METHOD(thread_start_out);
    sensitive << ( real_start );

    SC_METHOD(thread_start_write);
    sensitive << ( real_start );
    sensitive << ( start_once_reg );

    SC_METHOD(thread_tmp4_cast_fu_343_p1);
    sensitive << ( tmp4_fu_337_p2 );

    SC_METHOD(thread_tmp4_fu_337_p2);
    sensitive << ( j_reg_179 );
    sensitive << ( m_cast2_cast_fu_317_p1 );

    SC_METHOD(thread_tmp_13_fu_362_p2);
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( exitcond_fu_325_p2 );
    sensitive << ( m_reg_202 );

    SC_METHOD(thread_tmp_15_fu_273_p1);
    sensitive << ( l_reg_191 );

    SC_METHOD(thread_tmp_16_fu_321_p1);
    sensitive << ( m_reg_202 );

    SC_METHOD(thread_tmp_2_fu_305_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond8_fu_277_p2 );
    sensitive << ( l_reg_191 );

    SC_METHOD(thread_tmp_4_fu_251_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_reg_167 );

    SC_METHOD(thread_tmp_5_fu_352_p2);
    sensitive << ( tmp_15_reg_433 );
    sensitive << ( tmp_16_fu_321_p1 );

    SC_METHOD(thread_tmp_6_fu_257_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j_reg_179 );

    SC_METHOD(thread_tmp_8_fu_357_p1);
    sensitive << ( array_access_fu_347_p2 );

    SC_METHOD(thread_tmp_9_fu_289_p2);
    sensitive << ( i_reg_167 );
    sensitive << ( l_cast4_fu_269_p1 );

    SC_METHOD(thread_tmp_fu_246_p1);
    sensitive << ( p_reg_156 );

    SC_METHOD(thread_tmp_s_fu_299_p0);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( tmp_s_fu_299_p00 );

    SC_METHOD(thread_tmp_s_fu_299_p00);
    sensitive << ( tmp_9_fu_289_p2 );

    SC_METHOD(thread_tmp_s_fu_299_p2);
    sensitive << ( tmp_s_fu_299_p0 );

    SC_METHOD(thread_value_1_fu_382_p3);
    sensitive << ( value_reg_484 );
    sensitive << ( tmp_1_fu_104 );
    sensitive << ( sel_tmp_fu_377_p2 );

    SC_METHOD(thread_value_3_fu_389_p3);
    sensitive << ( tmp_5_reg_469 );
    sensitive << ( value_reg_484 );
    sensitive << ( value_1_fu_382_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( real_start );
    sensitive << ( ap_done_reg );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( out_V_full_n );
    sensitive << ( in_V_empty_n );
    sensitive << ( ap_CS_fsm_state10 );
    sensitive << ( or_cond_reg_480 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond9_fu_234_p2 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_6_fu_257_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( exitcond8_fu_277_p2 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( exitcond_fu_325_p2 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_4_fu_251_p2 );
    sensitive << ( exitcond1_fu_222_p2 );

    SC_THREAD(thread_ap_var_for_const0);

    start_once_reg = SC_LOGIC_0;
    ap_done_reg = SC_LOGIC_0;
    ap_CS_fsm = "0000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "pool2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, start_full_n, "(port)start_full_n");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_continue, "(port)ap_continue");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, start_out, "(port)start_out");
    sc_trace(mVcdFile, start_write, "(port)start_write");
    sc_trace(mVcdFile, out_V_din, "(port)out_V_din");
    sc_trace(mVcdFile, out_V_full_n, "(port)out_V_full_n");
    sc_trace(mVcdFile, out_V_write, "(port)out_V_write");
    sc_trace(mVcdFile, in_V_dout, "(port)in_V_dout");
    sc_trace(mVcdFile, in_V_empty_n, "(port)in_V_empty_n");
    sc_trace(mVcdFile, in_V_read, "(port)in_V_read");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, real_start, "real_start");
    sc_trace(mVcdFile, start_once_reg, "start_once_reg");
    sc_trace(mVcdFile, ap_done_reg, "ap_done_reg");
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, internal_ap_ready, "internal_ap_ready");
    sc_trace(mVcdFile, out_V_blk_n, "out_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, or_cond_reg_480, "or_cond_reg_480");
    sc_trace(mVcdFile, in_V_blk_n, "in_V_blk_n");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, exitcond9_fu_234_p2, "exitcond9_fu_234_p2");
    sc_trace(mVcdFile, k_1_fu_228_p2, "k_1_fu_228_p2");
    sc_trace(mVcdFile, k_1_reg_409, "k_1_reg_409");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, p_1_fu_240_p2, "p_1_fu_240_p2");
    sc_trace(mVcdFile, ap_block_state3, "ap_block_state3");
    sc_trace(mVcdFile, i_1_fu_263_p2, "i_1_fu_263_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_6_fu_257_p2, "tmp_6_fu_257_p2");
    sc_trace(mVcdFile, tmp_15_fu_273_p1, "tmp_15_fu_273_p1");
    sc_trace(mVcdFile, tmp_15_reg_433, "tmp_15_reg_433");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, l_1_fu_283_p2, "l_1_fu_283_p2");
    sc_trace(mVcdFile, l_1_reg_441, "l_1_reg_441");
    sc_trace(mVcdFile, tmp_s_fu_299_p2, "tmp_s_fu_299_p2");
    sc_trace(mVcdFile, tmp_s_reg_446, "tmp_s_reg_446");
    sc_trace(mVcdFile, exitcond8_fu_277_p2, "exitcond8_fu_277_p2");
    sc_trace(mVcdFile, tmp_2_fu_305_p2, "tmp_2_fu_305_p2");
    sc_trace(mVcdFile, tmp_2_reg_451, "tmp_2_reg_451");
    sc_trace(mVcdFile, j_1_fu_311_p2, "j_1_fu_311_p2");
    sc_trace(mVcdFile, m_1_fu_331_p2, "m_1_fu_331_p2");
    sc_trace(mVcdFile, m_1_reg_464, "m_1_reg_464");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, tmp_5_fu_352_p2, "tmp_5_fu_352_p2");
    sc_trace(mVcdFile, tmp_5_reg_469, "tmp_5_reg_469");
    sc_trace(mVcdFile, exitcond_fu_325_p2, "exitcond_fu_325_p2");
    sc_trace(mVcdFile, or_cond_fu_368_p2, "or_cond_fu_368_p2");
    sc_trace(mVcdFile, pool_buff_q0, "pool_buff_q0");
    sc_trace(mVcdFile, value_reg_484, "value_reg_484");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, value_3_fu_389_p3, "value_3_fu_389_p3");
    sc_trace(mVcdFile, value_3_reg_491, "value_3_reg_491");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, pool_buff_address0, "pool_buff_address0");
    sc_trace(mVcdFile, pool_buff_ce0, "pool_buff_ce0");
    sc_trace(mVcdFile, pool_buff_we0, "pool_buff_we0");
    sc_trace(mVcdFile, k_reg_145, "k_reg_145");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_4_fu_251_p2, "tmp_4_fu_251_p2");
    sc_trace(mVcdFile, p_reg_156, "p_reg_156");
    sc_trace(mVcdFile, exitcond1_fu_222_p2, "exitcond1_fu_222_p2");
    sc_trace(mVcdFile, i_reg_167, "i_reg_167");
    sc_trace(mVcdFile, j_reg_179, "j_reg_179");
    sc_trace(mVcdFile, l_reg_191, "l_reg_191");
    sc_trace(mVcdFile, m_reg_202, "m_reg_202");
    sc_trace(mVcdFile, ap_block_state10, "ap_block_state10");
    sc_trace(mVcdFile, tmp_fu_246_p1, "tmp_fu_246_p1");
    sc_trace(mVcdFile, tmp_8_fu_357_p1, "tmp_8_fu_357_p1");
    sc_trace(mVcdFile, tmp_1_fu_104, "tmp_1_fu_104");
    sc_trace(mVcdFile, l_cast4_fu_269_p1, "l_cast4_fu_269_p1");
    sc_trace(mVcdFile, tmp_9_fu_289_p2, "tmp_9_fu_289_p2");
    sc_trace(mVcdFile, tmp_s_fu_299_p0, "tmp_s_fu_299_p0");
    sc_trace(mVcdFile, m_cast2_cast_fu_317_p1, "m_cast2_cast_fu_317_p1");
    sc_trace(mVcdFile, tmp4_fu_337_p2, "tmp4_fu_337_p2");
    sc_trace(mVcdFile, tmp4_cast_fu_343_p1, "tmp4_cast_fu_343_p1");
    sc_trace(mVcdFile, tmp_16_fu_321_p1, "tmp_16_fu_321_p1");
    sc_trace(mVcdFile, array_access_fu_347_p2, "array_access_fu_347_p2");
    sc_trace(mVcdFile, tmp_13_fu_362_p2, "tmp_13_fu_362_p2");
    sc_trace(mVcdFile, tmp_11_fu_213_p2, "tmp_11_fu_213_p2");
    sc_trace(mVcdFile, sel_tmp_fu_377_p2, "sel_tmp_fu_377_p2");
    sc_trace(mVcdFile, value_1_fu_382_p3, "value_1_fu_382_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, tmp_s_fu_299_p00, "tmp_s_fu_299_p00");
#endif

    }
}

pool2::~pool2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete pool_buff_U;
    delete lenet_hls_fcmp_32ns_32ns_1_1_1_U25;
}

void pool2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_lv5_2;
}

void pool2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_done_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_continue.read())) {
            ap_done_reg = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                    esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_222_p2.read()))) {
            ap_done_reg = ap_const_logic_1;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_234_p2.read()))) {
        i_reg_167 = ap_const_lv4_0;
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6_fu_257_p2.read()))) {
        i_reg_167 = i_1_fu_263_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond8_fu_277_p2.read()))) {
        j_reg_179 = j_1_fu_311_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_4_fu_251_p2.read()))) {
        j_reg_179 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_fu_251_p2.read()))) {
        k_reg_145 = k_1_reg_409.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
        k_reg_145 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_325_p2.read()))) {
        l_reg_191 = l_1_reg_441.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, tmp_6_fu_257_p2.read()))) {
        l_reg_191 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         !(esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_full_n.read())))) {
        m_reg_202 = m_1_reg_464.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_277_p2.read()))) {
        m_reg_202 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        p_reg_156 = p_1_fu_240_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_222_p2.read()))) {
        p_reg_156 = ap_const_lv8_0;
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        start_once_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_0, internal_ap_ready.read()))) {
            start_once_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, internal_ap_ready.read())) {
            start_once_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         !(esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_full_n.read())) && 
         esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_0))) {
        tmp_1_fu_104 = value_3_reg_491.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1))) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
                 esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && 
                 !(esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_full_n.read()))))) {
        tmp_1_fu_104 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        k_1_reg_409 = k_1_fu_228_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        l_1_reg_441 = l_1_fu_283_p2.read();
        tmp_15_reg_433 = tmp_15_fu_273_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        m_1_reg_464 = m_1_fu_331_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_325_p2.read()))) {
        or_cond_reg_480 = or_cond_fu_368_p2.read();
        tmp_5_reg_469 = tmp_5_fu_352_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_fu_277_p2.read()))) {
        tmp_2_reg_451 = tmp_2_fu_305_p2.read();
        tmp_s_reg_446 = tmp_s_fu_299_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        value_3_reg_491 = value_3_fu_389_p3.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        value_reg_484 = pool_buff_q0.read();
    }
}

void pool2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void pool2::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void pool2::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void pool2::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void pool2::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void pool2::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void pool2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void pool2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void pool2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void pool2::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void pool2::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1));
}

void pool2::thread_ap_block_state10() {
    ap_block_state10 = (esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_full_n.read()));
}

void pool2::thread_ap_block_state3() {
    ap_block_state3 = (esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read()));
}

void pool2::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_222_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_done_reg.read();
    }
}

void pool2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void pool2::thread_ap_ready() {
    ap_ready = internal_ap_ready.read();
}

void pool2::thread_array_access_fu_347_p2() {
    array_access_fu_347_p2 = (!tmp4_cast_fu_343_p1.read().is_01() || !tmp_s_reg_446.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp4_cast_fu_343_p1.read()) + sc_biguint<8>(tmp_s_reg_446.read()));
}

void pool2::thread_exitcond1_fu_222_p2() {
    exitcond1_fu_222_p2 = (!k_reg_145.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(k_reg_145.read() == ap_const_lv5_10);
}

void pool2::thread_exitcond8_fu_277_p2() {
    exitcond8_fu_277_p2 = (!l_reg_191.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(l_reg_191.read() == ap_const_lv2_2);
}

void pool2::thread_exitcond9_fu_234_p2() {
    exitcond9_fu_234_p2 = (!p_reg_156.read().is_01() || !ap_const_lv8_A9.is_01())? sc_lv<1>(): sc_lv<1>(p_reg_156.read() == ap_const_lv8_A9);
}

void pool2::thread_exitcond_fu_325_p2() {
    exitcond_fu_325_p2 = (!m_reg_202.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(m_reg_202.read() == ap_const_lv2_2);
}

void pool2::thread_i_1_fu_263_p2() {
    i_1_fu_263_p2 = (!i_reg_167.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<4>(): (sc_biguint<4>(i_reg_167.read()) + sc_biguint<4>(ap_const_lv4_2));
}

void pool2::thread_in_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0))) {
        in_V_blk_n = in_V_empty_n.read();
    } else {
        in_V_blk_n = ap_const_logic_1;
    }
}

void pool2::thread_in_V_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        in_V_read = ap_const_logic_1;
    } else {
        in_V_read = ap_const_logic_0;
    }
}

void pool2::thread_internal_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_222_p2.read()))) {
        internal_ap_ready = ap_const_logic_1;
    } else {
        internal_ap_ready = ap_const_logic_0;
    }
}

void pool2::thread_j_1_fu_311_p2() {
    j_1_fu_311_p2 = (!j_reg_179.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<4>(): (sc_biguint<4>(j_reg_179.read()) + sc_biguint<4>(ap_const_lv4_2));
}

void pool2::thread_k_1_fu_228_p2() {
    k_1_fu_228_p2 = (!k_reg_145.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(k_reg_145.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void pool2::thread_l_1_fu_283_p2() {
    l_1_fu_283_p2 = (!ap_const_lv2_1.is_01() || !l_reg_191.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(l_reg_191.read()));
}

void pool2::thread_l_cast4_fu_269_p1() {
    l_cast4_fu_269_p1 = esl_zext<4,2>(l_reg_191.read());
}

void pool2::thread_m_1_fu_331_p2() {
    m_1_fu_331_p2 = (!ap_const_lv2_1.is_01() || !m_reg_202.read().is_01())? sc_lv<2>(): (sc_biguint<2>(ap_const_lv2_1) + sc_biguint<2>(m_reg_202.read()));
}

void pool2::thread_m_cast2_cast_fu_317_p1() {
    m_cast2_cast_fu_317_p1 = esl_zext<4,2>(m_reg_202.read());
}

void pool2::thread_or_cond_fu_368_p2() {
    or_cond_fu_368_p2 = (tmp_2_reg_451.read() & tmp_13_fu_362_p2.read());
}

void pool2::thread_out_V_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1))) {
        out_V_blk_n = out_V_full_n.read();
    } else {
        out_V_blk_n = ap_const_logic_1;
    }
}

void pool2::thread_out_V_din() {
    out_V_din = value_3_reg_491.read();
}

void pool2::thread_out_V_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && 
         esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && 
         !(esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_full_n.read())))) {
        out_V_write = ap_const_logic_1;
    } else {
        out_V_write = ap_const_logic_0;
    }
}

void pool2::thread_p_1_fu_240_p2() {
    p_1_fu_240_p2 = (!p_reg_156.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(p_reg_156.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void pool2::thread_pool_buff_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        pool_buff_address0 =  (sc_lv<8>) (tmp_8_fu_357_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        pool_buff_address0 =  (sc_lv<8>) (tmp_fu_246_p1.read());
    } else {
        pool_buff_address0 = "XXXXXXXX";
    }
}

void pool2::thread_pool_buff_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read()))) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        pool_buff_ce0 = ap_const_logic_1;
    } else {
        pool_buff_ce0 = ap_const_logic_0;
    }
}

void pool2::thread_pool_buff_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
        pool_buff_we0 = ap_const_logic_1;
    } else {
        pool_buff_we0 = ap_const_logic_0;
    }
}

void pool2::thread_real_start() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_full_n.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()))) {
        real_start = ap_const_logic_0;
    } else {
        real_start = ap_start.read();
    }
}

void pool2::thread_sel_tmp_fu_377_p2() {
    sel_tmp_fu_377_p2 = (tmp_5_reg_469.read() & tmp_11_fu_213_p2.read());
}

void pool2::thread_start_out() {
    start_out = real_start.read();
}

void pool2::thread_start_write() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, start_once_reg.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, real_start.read()))) {
        start_write = ap_const_logic_1;
    } else {
        start_write = ap_const_logic_0;
    }
}

void pool2::thread_tmp4_cast_fu_343_p1() {
    tmp4_cast_fu_343_p1 = esl_zext<8,4>(tmp4_fu_337_p2.read());
}

void pool2::thread_tmp4_fu_337_p2() {
    tmp4_fu_337_p2 = (!j_reg_179.read().is_01() || !m_cast2_cast_fu_317_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_reg_179.read()) + sc_biguint<4>(m_cast2_cast_fu_317_p1.read()));
}

void pool2::thread_tmp_13_fu_362_p2() {
    tmp_13_fu_362_p2 = (!m_reg_202.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(m_reg_202.read() == ap_const_lv2_1);
}

void pool2::thread_tmp_15_fu_273_p1() {
    tmp_15_fu_273_p1 = l_reg_191.read().range(1-1, 0);
}

void pool2::thread_tmp_16_fu_321_p1() {
    tmp_16_fu_321_p1 = m_reg_202.read().range(1-1, 0);
}

void pool2::thread_tmp_2_fu_305_p2() {
    tmp_2_fu_305_p2 = (!l_reg_191.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(l_reg_191.read() == ap_const_lv2_1);
}

void pool2::thread_tmp_4_fu_251_p2() {
    tmp_4_fu_251_p2 = (!i_reg_167.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): (sc_biguint<4>(i_reg_167.read()) < sc_biguint<4>(ap_const_lv4_C));
}

void pool2::thread_tmp_5_fu_352_p2() {
    tmp_5_fu_352_p2 = (tmp_16_fu_321_p1.read() | tmp_15_reg_433.read());
}

void pool2::thread_tmp_6_fu_257_p2() {
    tmp_6_fu_257_p2 = (!j_reg_179.read().is_01() || !ap_const_lv4_C.is_01())? sc_lv<1>(): (sc_biguint<4>(j_reg_179.read()) < sc_biguint<4>(ap_const_lv4_C));
}

void pool2::thread_tmp_8_fu_357_p1() {
    tmp_8_fu_357_p1 = esl_zext<64,8>(array_access_fu_347_p2.read());
}

void pool2::thread_tmp_9_fu_289_p2() {
    tmp_9_fu_289_p2 = (!i_reg_167.read().is_01() || !l_cast4_fu_269_p1.read().is_01())? sc_lv<4>(): (sc_biguint<4>(i_reg_167.read()) + sc_biguint<4>(l_cast4_fu_269_p1.read()));
}

void pool2::thread_tmp_fu_246_p1() {
    tmp_fu_246_p1 = esl_zext<64,8>(p_reg_156.read());
}

void pool2::thread_tmp_s_fu_299_p0() {
    tmp_s_fu_299_p0 =  (sc_lv<4>) (tmp_s_fu_299_p00.read());
}

void pool2::thread_tmp_s_fu_299_p00() {
    tmp_s_fu_299_p00 = esl_zext<8,4>(tmp_9_fu_289_p2.read());
}

void pool2::thread_tmp_s_fu_299_p2() {
    tmp_s_fu_299_p2 = (!tmp_s_fu_299_p0.read().is_01() || !ap_const_lv8_D.is_01())? sc_lv<8>(): sc_biguint<4>(tmp_s_fu_299_p0.read()) * sc_biguint<8>(ap_const_lv8_D);
}

void pool2::thread_value_1_fu_382_p3() {
    value_1_fu_382_p3 = (!sel_tmp_fu_377_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_fu_377_p2.read()[0].to_bool())? tmp_1_fu_104.read(): value_reg_484.read());
}

void pool2::thread_value_3_fu_389_p3() {
    value_3_fu_389_p3 = (!tmp_5_reg_469.read()[0].is_01())? sc_lv<32>(): ((tmp_5_reg_469.read()[0].to_bool())? value_1_fu_382_p3.read(): value_reg_484.read());
}

void pool2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, real_start.read()) || esl_seteq<1,1,1>(ap_done_reg.read(), ap_const_logic_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_222_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond9_fu_234_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && !(esl_seteq<1,1,1>(exitcond9_fu_234_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_0, in_V_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_4_fu_251_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, tmp_6_fu_257_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond8_fu_277_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_325_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read()) && !(esl_seteq<1,1,1>(or_cond_reg_480.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_0, out_V_full_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state7;
            } else {
                ap_NS_fsm = ap_ST_fsm_state10;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<10>) ("XXXXXXXXXX");
            break;
    }
}

}

