// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "lenet_hls.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic lenet_hls::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<32> lenet_hls::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_logic lenet_hls::ap_const_logic_1 = sc_dt::Log_1;

lenet_hls::lenet_hls(sc_module_name name) : sc_module(name), mVcdFile(0) {
    conv1_U0 = new conv1("conv1_U0");
    conv1_U0->ap_clk(ap_clk);
    conv1_U0->ap_rst(ap_rst);
    conv1_U0->ap_start(conv1_U0_ap_start);
    conv1_U0->start_full_n(start_for_pool1_U0_full_n);
    conv1_U0->ap_done(conv1_U0_ap_done);
    conv1_U0->ap_continue(conv1_U0_ap_continue);
    conv1_U0->ap_idle(conv1_U0_ap_idle);
    conv1_U0->ap_ready(conv1_U0_ap_ready);
    conv1_U0->start_out(conv1_U0_start_out);
    conv1_U0->start_write(conv1_U0_start_write);
    conv1_U0->conv1_out_V_din(conv1_U0_conv1_out_V_din);
    conv1_U0->conv1_out_V_full_n(conv1_out_V_full_n);
    conv1_U0->conv1_out_V_write(conv1_U0_conv1_out_V_write);
    conv1_U0->in_V_dout(image_in_V_dout);
    conv1_U0->in_V_empty_n(image_in_V_empty_n);
    conv1_U0->in_V_read(conv1_U0_in_V_read);
    pool1_U0 = new pool1("pool1_U0");
    pool1_U0->ap_clk(ap_clk);
    pool1_U0->ap_rst(ap_rst);
    pool1_U0->ap_start(pool1_U0_ap_start);
    pool1_U0->start_full_n(start_for_conv2_U0_full_n);
    pool1_U0->ap_done(pool1_U0_ap_done);
    pool1_U0->ap_continue(pool1_U0_ap_continue);
    pool1_U0->ap_idle(pool1_U0_ap_idle);
    pool1_U0->ap_ready(pool1_U0_ap_ready);
    pool1_U0->start_out(pool1_U0_start_out);
    pool1_U0->start_write(pool1_U0_start_write);
    pool1_U0->out_V_din(pool1_U0_out_V_din);
    pool1_U0->out_V_full_n(pool1_out_V_full_n);
    pool1_U0->out_V_write(pool1_U0_out_V_write);
    pool1_U0->in_V_dout(conv1_out_V_dout);
    pool1_U0->in_V_empty_n(conv1_out_V_empty_n);
    pool1_U0->in_V_read(pool1_U0_in_V_read);
    conv2_U0 = new conv2("conv2_U0");
    conv2_U0->ap_clk(ap_clk);
    conv2_U0->ap_rst(ap_rst);
    conv2_U0->ap_start(conv2_U0_ap_start);
    conv2_U0->start_full_n(start_for_pool2_U0_full_n);
    conv2_U0->ap_done(conv2_U0_ap_done);
    conv2_U0->ap_continue(conv2_U0_ap_continue);
    conv2_U0->ap_idle(conv2_U0_ap_idle);
    conv2_U0->ap_ready(conv2_U0_ap_ready);
    conv2_U0->start_out(conv2_U0_start_out);
    conv2_U0->start_write(conv2_U0_start_write);
    conv2_U0->conv2_out_V_din(conv2_U0_conv2_out_V_din);
    conv2_U0->conv2_out_V_full_n(conv2_out_V_full_n);
    conv2_U0->conv2_out_V_write(conv2_U0_conv2_out_V_write);
    conv2_U0->in_V_dout(pool1_out_V_dout);
    conv2_U0->in_V_empty_n(pool1_out_V_empty_n);
    conv2_U0->in_V_read(conv2_U0_in_V_read);
    pool2_U0 = new pool2("pool2_U0");
    pool2_U0->ap_clk(ap_clk);
    pool2_U0->ap_rst(ap_rst);
    pool2_U0->ap_start(pool2_U0_ap_start);
    pool2_U0->start_full_n(start_for_fc1_U0_full_n);
    pool2_U0->ap_done(pool2_U0_ap_done);
    pool2_U0->ap_continue(pool2_U0_ap_continue);
    pool2_U0->ap_idle(pool2_U0_ap_idle);
    pool2_U0->ap_ready(pool2_U0_ap_ready);
    pool2_U0->start_out(pool2_U0_start_out);
    pool2_U0->start_write(pool2_U0_start_write);
    pool2_U0->out_V_din(pool2_U0_out_V_din);
    pool2_U0->out_V_full_n(pool2_out_V_full_n);
    pool2_U0->out_V_write(pool2_U0_out_V_write);
    pool2_U0->in_V_dout(conv2_out_V_dout);
    pool2_U0->in_V_empty_n(conv2_out_V_empty_n);
    pool2_U0->in_V_read(pool2_U0_in_V_read);
    fc1_U0 = new fc1("fc1_U0");
    fc1_U0->ap_clk(ap_clk);
    fc1_U0->ap_rst(ap_rst);
    fc1_U0->ap_start(fc1_U0_ap_start);
    fc1_U0->start_full_n(start_for_fc2_U0_full_n);
    fc1_U0->ap_done(fc1_U0_ap_done);
    fc1_U0->ap_continue(fc1_U0_ap_continue);
    fc1_U0->ap_idle(fc1_U0_ap_idle);
    fc1_U0->ap_ready(fc1_U0_ap_ready);
    fc1_U0->start_out(fc1_U0_start_out);
    fc1_U0->start_write(fc1_U0_start_write);
    fc1_U0->out_V_din(fc1_U0_out_V_din);
    fc1_U0->out_V_full_n(fc1_out_V_full_n);
    fc1_U0->out_V_write(fc1_U0_out_V_write);
    fc1_U0->in_V_dout(pool2_out_V_dout);
    fc1_U0->in_V_empty_n(pool2_out_V_empty_n);
    fc1_U0->in_V_read(fc1_U0_in_V_read);
    fc2_U0 = new fc2("fc2_U0");
    fc2_U0->ap_clk(ap_clk);
    fc2_U0->ap_rst(ap_rst);
    fc2_U0->ap_start(fc2_U0_ap_start);
    fc2_U0->start_full_n(start_for_fc3_U0_full_n);
    fc2_U0->ap_done(fc2_U0_ap_done);
    fc2_U0->ap_continue(fc2_U0_ap_continue);
    fc2_U0->ap_idle(fc2_U0_ap_idle);
    fc2_U0->ap_ready(fc2_U0_ap_ready);
    fc2_U0->start_out(fc2_U0_start_out);
    fc2_U0->start_write(fc2_U0_start_write);
    fc2_U0->out_V_din(fc2_U0_out_V_din);
    fc2_U0->out_V_full_n(fc2_out_V_full_n);
    fc2_U0->out_V_write(fc2_U0_out_V_write);
    fc2_U0->in_V_dout(fc1_out_V_dout);
    fc2_U0->in_V_empty_n(fc1_out_V_empty_n);
    fc2_U0->in_V_read(fc2_U0_in_V_read);
    fc3_U0 = new fc3("fc3_U0");
    fc3_U0->ap_clk(ap_clk);
    fc3_U0->ap_rst(ap_rst);
    fc3_U0->ap_start(fc3_U0_ap_start);
    fc3_U0->ap_done(fc3_U0_ap_done);
    fc3_U0->ap_continue(fc3_U0_ap_continue);
    fc3_U0->ap_idle(fc3_U0_ap_idle);
    fc3_U0->ap_ready(fc3_U0_ap_ready);
    fc3_U0->out_V_din(fc3_U0_out_V_din);
    fc3_U0->out_V_full_n(fc3_out_V_full_n);
    fc3_U0->out_V_write(fc3_U0_out_V_write);
    fc3_U0->in_V_dout(fc2_out_V_dout);
    fc3_U0->in_V_empty_n(fc2_out_V_empty_n);
    fc3_U0->in_V_read(fc3_U0_in_V_read);
    conv1_out_V_U = new fifo_w32_d2_A("conv1_out_V_U");
    conv1_out_V_U->clk(ap_clk);
    conv1_out_V_U->reset(ap_rst);
    conv1_out_V_U->if_read_ce(ap_var_for_const0);
    conv1_out_V_U->if_write_ce(ap_var_for_const0);
    conv1_out_V_U->if_din(conv1_U0_conv1_out_V_din);
    conv1_out_V_U->if_full_n(conv1_out_V_full_n);
    conv1_out_V_U->if_write(conv1_U0_conv1_out_V_write);
    conv1_out_V_U->if_dout(conv1_out_V_dout);
    conv1_out_V_U->if_empty_n(conv1_out_V_empty_n);
    conv1_out_V_U->if_read(pool1_U0_in_V_read);
    pool1_out_V_U = new fifo_w32_d2_A("pool1_out_V_U");
    pool1_out_V_U->clk(ap_clk);
    pool1_out_V_U->reset(ap_rst);
    pool1_out_V_U->if_read_ce(ap_var_for_const0);
    pool1_out_V_U->if_write_ce(ap_var_for_const0);
    pool1_out_V_U->if_din(pool1_U0_out_V_din);
    pool1_out_V_U->if_full_n(pool1_out_V_full_n);
    pool1_out_V_U->if_write(pool1_U0_out_V_write);
    pool1_out_V_U->if_dout(pool1_out_V_dout);
    pool1_out_V_U->if_empty_n(pool1_out_V_empty_n);
    pool1_out_V_U->if_read(conv2_U0_in_V_read);
    conv2_out_V_U = new fifo_w32_d2_A("conv2_out_V_U");
    conv2_out_V_U->clk(ap_clk);
    conv2_out_V_U->reset(ap_rst);
    conv2_out_V_U->if_read_ce(ap_var_for_const0);
    conv2_out_V_U->if_write_ce(ap_var_for_const0);
    conv2_out_V_U->if_din(conv2_U0_conv2_out_V_din);
    conv2_out_V_U->if_full_n(conv2_out_V_full_n);
    conv2_out_V_U->if_write(conv2_U0_conv2_out_V_write);
    conv2_out_V_U->if_dout(conv2_out_V_dout);
    conv2_out_V_U->if_empty_n(conv2_out_V_empty_n);
    conv2_out_V_U->if_read(pool2_U0_in_V_read);
    pool2_out_V_U = new fifo_w32_d2_A("pool2_out_V_U");
    pool2_out_V_U->clk(ap_clk);
    pool2_out_V_U->reset(ap_rst);
    pool2_out_V_U->if_read_ce(ap_var_for_const0);
    pool2_out_V_U->if_write_ce(ap_var_for_const0);
    pool2_out_V_U->if_din(pool2_U0_out_V_din);
    pool2_out_V_U->if_full_n(pool2_out_V_full_n);
    pool2_out_V_U->if_write(pool2_U0_out_V_write);
    pool2_out_V_U->if_dout(pool2_out_V_dout);
    pool2_out_V_U->if_empty_n(pool2_out_V_empty_n);
    pool2_out_V_U->if_read(fc1_U0_in_V_read);
    fc1_out_V_U = new fifo_w32_d2_A("fc1_out_V_U");
    fc1_out_V_U->clk(ap_clk);
    fc1_out_V_U->reset(ap_rst);
    fc1_out_V_U->if_read_ce(ap_var_for_const0);
    fc1_out_V_U->if_write_ce(ap_var_for_const0);
    fc1_out_V_U->if_din(fc1_U0_out_V_din);
    fc1_out_V_U->if_full_n(fc1_out_V_full_n);
    fc1_out_V_U->if_write(fc1_U0_out_V_write);
    fc1_out_V_U->if_dout(fc1_out_V_dout);
    fc1_out_V_U->if_empty_n(fc1_out_V_empty_n);
    fc1_out_V_U->if_read(fc2_U0_in_V_read);
    fc2_out_V_U = new fifo_w32_d2_A("fc2_out_V_U");
    fc2_out_V_U->clk(ap_clk);
    fc2_out_V_U->reset(ap_rst);
    fc2_out_V_U->if_read_ce(ap_var_for_const0);
    fc2_out_V_U->if_write_ce(ap_var_for_const0);
    fc2_out_V_U->if_din(fc2_U0_out_V_din);
    fc2_out_V_U->if_full_n(fc2_out_V_full_n);
    fc2_out_V_U->if_write(fc2_U0_out_V_write);
    fc2_out_V_U->if_dout(fc2_out_V_dout);
    fc2_out_V_U->if_empty_n(fc2_out_V_empty_n);
    fc2_out_V_U->if_read(fc3_U0_in_V_read);
    start_for_pool1_U0_U = new start_for_pool1_U0("start_for_pool1_U0_U");
    start_for_pool1_U0_U->clk(ap_clk);
    start_for_pool1_U0_U->reset(ap_rst);
    start_for_pool1_U0_U->if_read_ce(ap_var_for_const0);
    start_for_pool1_U0_U->if_write_ce(ap_var_for_const0);
    start_for_pool1_U0_U->if_din(start_for_pool1_U0_din);
    start_for_pool1_U0_U->if_full_n(start_for_pool1_U0_full_n);
    start_for_pool1_U0_U->if_write(conv1_U0_start_write);
    start_for_pool1_U0_U->if_dout(start_for_pool1_U0_dout);
    start_for_pool1_U0_U->if_empty_n(start_for_pool1_U0_empty_n);
    start_for_pool1_U0_U->if_read(pool1_U0_ap_ready);
    start_for_conv2_U0_U = new start_for_conv2_U0("start_for_conv2_U0_U");
    start_for_conv2_U0_U->clk(ap_clk);
    start_for_conv2_U0_U->reset(ap_rst);
    start_for_conv2_U0_U->if_read_ce(ap_var_for_const0);
    start_for_conv2_U0_U->if_write_ce(ap_var_for_const0);
    start_for_conv2_U0_U->if_din(start_for_conv2_U0_din);
    start_for_conv2_U0_U->if_full_n(start_for_conv2_U0_full_n);
    start_for_conv2_U0_U->if_write(pool1_U0_start_write);
    start_for_conv2_U0_U->if_dout(start_for_conv2_U0_dout);
    start_for_conv2_U0_U->if_empty_n(start_for_conv2_U0_empty_n);
    start_for_conv2_U0_U->if_read(conv2_U0_ap_ready);
    start_for_pool2_U0_U = new start_for_pool2_U0("start_for_pool2_U0_U");
    start_for_pool2_U0_U->clk(ap_clk);
    start_for_pool2_U0_U->reset(ap_rst);
    start_for_pool2_U0_U->if_read_ce(ap_var_for_const0);
    start_for_pool2_U0_U->if_write_ce(ap_var_for_const0);
    start_for_pool2_U0_U->if_din(start_for_pool2_U0_din);
    start_for_pool2_U0_U->if_full_n(start_for_pool2_U0_full_n);
    start_for_pool2_U0_U->if_write(conv2_U0_start_write);
    start_for_pool2_U0_U->if_dout(start_for_pool2_U0_dout);
    start_for_pool2_U0_U->if_empty_n(start_for_pool2_U0_empty_n);
    start_for_pool2_U0_U->if_read(pool2_U0_ap_ready);
    start_for_fc1_U0_U = new start_for_fc1_U0("start_for_fc1_U0_U");
    start_for_fc1_U0_U->clk(ap_clk);
    start_for_fc1_U0_U->reset(ap_rst);
    start_for_fc1_U0_U->if_read_ce(ap_var_for_const0);
    start_for_fc1_U0_U->if_write_ce(ap_var_for_const0);
    start_for_fc1_U0_U->if_din(start_for_fc1_U0_din);
    start_for_fc1_U0_U->if_full_n(start_for_fc1_U0_full_n);
    start_for_fc1_U0_U->if_write(pool2_U0_start_write);
    start_for_fc1_U0_U->if_dout(start_for_fc1_U0_dout);
    start_for_fc1_U0_U->if_empty_n(start_for_fc1_U0_empty_n);
    start_for_fc1_U0_U->if_read(fc1_U0_ap_ready);
    start_for_fc2_U0_U = new start_for_fc2_U0("start_for_fc2_U0_U");
    start_for_fc2_U0_U->clk(ap_clk);
    start_for_fc2_U0_U->reset(ap_rst);
    start_for_fc2_U0_U->if_read_ce(ap_var_for_const0);
    start_for_fc2_U0_U->if_write_ce(ap_var_for_const0);
    start_for_fc2_U0_U->if_din(start_for_fc2_U0_din);
    start_for_fc2_U0_U->if_full_n(start_for_fc2_U0_full_n);
    start_for_fc2_U0_U->if_write(fc1_U0_start_write);
    start_for_fc2_U0_U->if_dout(start_for_fc2_U0_dout);
    start_for_fc2_U0_U->if_empty_n(start_for_fc2_U0_empty_n);
    start_for_fc2_U0_U->if_read(fc2_U0_ap_ready);
    start_for_fc3_U0_U = new start_for_fc3_U0("start_for_fc3_U0_U");
    start_for_fc3_U0_U->clk(ap_clk);
    start_for_fc3_U0_U->reset(ap_rst);
    start_for_fc3_U0_U->if_read_ce(ap_var_for_const0);
    start_for_fc3_U0_U->if_write_ce(ap_var_for_const0);
    start_for_fc3_U0_U->if_din(start_for_fc3_U0_din);
    start_for_fc3_U0_U->if_full_n(start_for_fc3_U0_full_n);
    start_for_fc3_U0_U->if_write(fc2_U0_start_write);
    start_for_fc3_U0_U->if_dout(start_for_fc3_U0_dout);
    start_for_fc3_U0_U->if_empty_n(start_for_fc3_U0_empty_n);
    start_for_fc3_U0_U->if_read(fc3_U0_ap_ready);

    SC_METHOD(thread_ap_done);
    sensitive << ( fc3_U0_ap_done );

    SC_METHOD(thread_ap_idle);
    sensitive << ( conv1_U0_ap_idle );
    sensitive << ( pool1_U0_ap_idle );
    sensitive << ( conv2_U0_ap_idle );
    sensitive << ( pool2_U0_ap_idle );
    sensitive << ( fc1_U0_ap_idle );
    sensitive << ( fc2_U0_ap_idle );
    sensitive << ( fc3_U0_ap_idle );

    SC_METHOD(thread_ap_ready);
    sensitive << ( conv1_U0_ap_ready );

    SC_METHOD(thread_ap_sync_continue);

    SC_METHOD(thread_ap_sync_done);
    sensitive << ( fc3_U0_ap_done );

    SC_METHOD(thread_ap_sync_ready);
    sensitive << ( conv1_U0_ap_ready );

    SC_METHOD(thread_conv1_U0_ap_continue);

    SC_METHOD(thread_conv1_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_conv2_U0_ap_continue);

    SC_METHOD(thread_conv2_U0_ap_start);
    sensitive << ( start_for_conv2_U0_empty_n );

    SC_METHOD(thread_fc1_U0_ap_continue);

    SC_METHOD(thread_fc1_U0_ap_start);
    sensitive << ( start_for_fc1_U0_empty_n );

    SC_METHOD(thread_fc2_U0_ap_continue);

    SC_METHOD(thread_fc2_U0_ap_start);
    sensitive << ( start_for_fc2_U0_empty_n );

    SC_METHOD(thread_fc3_U0_ap_continue);

    SC_METHOD(thread_fc3_U0_ap_start);
    sensitive << ( start_for_fc3_U0_empty_n );

    SC_METHOD(thread_fc3_U0_start_full_n);

    SC_METHOD(thread_fc3_U0_start_write);

    SC_METHOD(thread_fc3_out_V_din);
    sensitive << ( fc3_U0_out_V_din );

    SC_METHOD(thread_fc3_out_V_write);
    sensitive << ( fc3_U0_out_V_write );

    SC_METHOD(thread_image_in_V_read);
    sensitive << ( conv1_U0_in_V_read );

    SC_METHOD(thread_pool1_U0_ap_continue);

    SC_METHOD(thread_pool1_U0_ap_start);
    sensitive << ( start_for_pool1_U0_empty_n );

    SC_METHOD(thread_pool2_U0_ap_continue);

    SC_METHOD(thread_pool2_U0_ap_start);
    sensitive << ( start_for_pool2_U0_empty_n );

    SC_METHOD(thread_start_for_conv2_U0_din);

    SC_METHOD(thread_start_for_fc1_U0_din);

    SC_METHOD(thread_start_for_fc2_U0_din);

    SC_METHOD(thread_start_for_fc3_U0_din);

    SC_METHOD(thread_start_for_pool1_U0_din);

    SC_METHOD(thread_start_for_pool2_U0_din);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    SC_THREAD(thread_ap_var_for_const0);

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "lenet_hls_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, image_in_V_dout, "(port)image_in_V_dout");
    sc_trace(mVcdFile, image_in_V_empty_n, "(port)image_in_V_empty_n");
    sc_trace(mVcdFile, image_in_V_read, "(port)image_in_V_read");
    sc_trace(mVcdFile, fc3_out_V_din, "(port)fc3_out_V_din");
    sc_trace(mVcdFile, fc3_out_V_full_n, "(port)fc3_out_V_full_n");
    sc_trace(mVcdFile, fc3_out_V_write, "(port)fc3_out_V_write");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, conv1_U0_ap_start, "conv1_U0_ap_start");
    sc_trace(mVcdFile, conv1_U0_ap_done, "conv1_U0_ap_done");
    sc_trace(mVcdFile, conv1_U0_ap_continue, "conv1_U0_ap_continue");
    sc_trace(mVcdFile, conv1_U0_ap_idle, "conv1_U0_ap_idle");
    sc_trace(mVcdFile, conv1_U0_ap_ready, "conv1_U0_ap_ready");
    sc_trace(mVcdFile, conv1_U0_start_out, "conv1_U0_start_out");
    sc_trace(mVcdFile, conv1_U0_start_write, "conv1_U0_start_write");
    sc_trace(mVcdFile, conv1_U0_conv1_out_V_din, "conv1_U0_conv1_out_V_din");
    sc_trace(mVcdFile, conv1_U0_conv1_out_V_write, "conv1_U0_conv1_out_V_write");
    sc_trace(mVcdFile, conv1_U0_in_V_read, "conv1_U0_in_V_read");
    sc_trace(mVcdFile, pool1_U0_ap_start, "pool1_U0_ap_start");
    sc_trace(mVcdFile, pool1_U0_ap_done, "pool1_U0_ap_done");
    sc_trace(mVcdFile, pool1_U0_ap_continue, "pool1_U0_ap_continue");
    sc_trace(mVcdFile, pool1_U0_ap_idle, "pool1_U0_ap_idle");
    sc_trace(mVcdFile, pool1_U0_ap_ready, "pool1_U0_ap_ready");
    sc_trace(mVcdFile, pool1_U0_start_out, "pool1_U0_start_out");
    sc_trace(mVcdFile, pool1_U0_start_write, "pool1_U0_start_write");
    sc_trace(mVcdFile, pool1_U0_out_V_din, "pool1_U0_out_V_din");
    sc_trace(mVcdFile, pool1_U0_out_V_write, "pool1_U0_out_V_write");
    sc_trace(mVcdFile, pool1_U0_in_V_read, "pool1_U0_in_V_read");
    sc_trace(mVcdFile, conv2_U0_ap_start, "conv2_U0_ap_start");
    sc_trace(mVcdFile, conv2_U0_ap_done, "conv2_U0_ap_done");
    sc_trace(mVcdFile, conv2_U0_ap_continue, "conv2_U0_ap_continue");
    sc_trace(mVcdFile, conv2_U0_ap_idle, "conv2_U0_ap_idle");
    sc_trace(mVcdFile, conv2_U0_ap_ready, "conv2_U0_ap_ready");
    sc_trace(mVcdFile, conv2_U0_start_out, "conv2_U0_start_out");
    sc_trace(mVcdFile, conv2_U0_start_write, "conv2_U0_start_write");
    sc_trace(mVcdFile, conv2_U0_conv2_out_V_din, "conv2_U0_conv2_out_V_din");
    sc_trace(mVcdFile, conv2_U0_conv2_out_V_write, "conv2_U0_conv2_out_V_write");
    sc_trace(mVcdFile, conv2_U0_in_V_read, "conv2_U0_in_V_read");
    sc_trace(mVcdFile, pool2_U0_ap_start, "pool2_U0_ap_start");
    sc_trace(mVcdFile, pool2_U0_ap_done, "pool2_U0_ap_done");
    sc_trace(mVcdFile, pool2_U0_ap_continue, "pool2_U0_ap_continue");
    sc_trace(mVcdFile, pool2_U0_ap_idle, "pool2_U0_ap_idle");
    sc_trace(mVcdFile, pool2_U0_ap_ready, "pool2_U0_ap_ready");
    sc_trace(mVcdFile, pool2_U0_start_out, "pool2_U0_start_out");
    sc_trace(mVcdFile, pool2_U0_start_write, "pool2_U0_start_write");
    sc_trace(mVcdFile, pool2_U0_out_V_din, "pool2_U0_out_V_din");
    sc_trace(mVcdFile, pool2_U0_out_V_write, "pool2_U0_out_V_write");
    sc_trace(mVcdFile, pool2_U0_in_V_read, "pool2_U0_in_V_read");
    sc_trace(mVcdFile, fc1_U0_ap_start, "fc1_U0_ap_start");
    sc_trace(mVcdFile, fc1_U0_ap_done, "fc1_U0_ap_done");
    sc_trace(mVcdFile, fc1_U0_ap_continue, "fc1_U0_ap_continue");
    sc_trace(mVcdFile, fc1_U0_ap_idle, "fc1_U0_ap_idle");
    sc_trace(mVcdFile, fc1_U0_ap_ready, "fc1_U0_ap_ready");
    sc_trace(mVcdFile, fc1_U0_start_out, "fc1_U0_start_out");
    sc_trace(mVcdFile, fc1_U0_start_write, "fc1_U0_start_write");
    sc_trace(mVcdFile, fc1_U0_out_V_din, "fc1_U0_out_V_din");
    sc_trace(mVcdFile, fc1_U0_out_V_write, "fc1_U0_out_V_write");
    sc_trace(mVcdFile, fc1_U0_in_V_read, "fc1_U0_in_V_read");
    sc_trace(mVcdFile, fc2_U0_ap_start, "fc2_U0_ap_start");
    sc_trace(mVcdFile, fc2_U0_ap_done, "fc2_U0_ap_done");
    sc_trace(mVcdFile, fc2_U0_ap_continue, "fc2_U0_ap_continue");
    sc_trace(mVcdFile, fc2_U0_ap_idle, "fc2_U0_ap_idle");
    sc_trace(mVcdFile, fc2_U0_ap_ready, "fc2_U0_ap_ready");
    sc_trace(mVcdFile, fc2_U0_start_out, "fc2_U0_start_out");
    sc_trace(mVcdFile, fc2_U0_start_write, "fc2_U0_start_write");
    sc_trace(mVcdFile, fc2_U0_out_V_din, "fc2_U0_out_V_din");
    sc_trace(mVcdFile, fc2_U0_out_V_write, "fc2_U0_out_V_write");
    sc_trace(mVcdFile, fc2_U0_in_V_read, "fc2_U0_in_V_read");
    sc_trace(mVcdFile, fc3_U0_ap_start, "fc3_U0_ap_start");
    sc_trace(mVcdFile, fc3_U0_ap_done, "fc3_U0_ap_done");
    sc_trace(mVcdFile, fc3_U0_ap_continue, "fc3_U0_ap_continue");
    sc_trace(mVcdFile, fc3_U0_ap_idle, "fc3_U0_ap_idle");
    sc_trace(mVcdFile, fc3_U0_ap_ready, "fc3_U0_ap_ready");
    sc_trace(mVcdFile, fc3_U0_out_V_din, "fc3_U0_out_V_din");
    sc_trace(mVcdFile, fc3_U0_out_V_write, "fc3_U0_out_V_write");
    sc_trace(mVcdFile, fc3_U0_in_V_read, "fc3_U0_in_V_read");
    sc_trace(mVcdFile, ap_sync_continue, "ap_sync_continue");
    sc_trace(mVcdFile, conv1_out_V_full_n, "conv1_out_V_full_n");
    sc_trace(mVcdFile, conv1_out_V_dout, "conv1_out_V_dout");
    sc_trace(mVcdFile, conv1_out_V_empty_n, "conv1_out_V_empty_n");
    sc_trace(mVcdFile, pool1_out_V_full_n, "pool1_out_V_full_n");
    sc_trace(mVcdFile, pool1_out_V_dout, "pool1_out_V_dout");
    sc_trace(mVcdFile, pool1_out_V_empty_n, "pool1_out_V_empty_n");
    sc_trace(mVcdFile, conv2_out_V_full_n, "conv2_out_V_full_n");
    sc_trace(mVcdFile, conv2_out_V_dout, "conv2_out_V_dout");
    sc_trace(mVcdFile, conv2_out_V_empty_n, "conv2_out_V_empty_n");
    sc_trace(mVcdFile, pool2_out_V_full_n, "pool2_out_V_full_n");
    sc_trace(mVcdFile, pool2_out_V_dout, "pool2_out_V_dout");
    sc_trace(mVcdFile, pool2_out_V_empty_n, "pool2_out_V_empty_n");
    sc_trace(mVcdFile, fc1_out_V_full_n, "fc1_out_V_full_n");
    sc_trace(mVcdFile, fc1_out_V_dout, "fc1_out_V_dout");
    sc_trace(mVcdFile, fc1_out_V_empty_n, "fc1_out_V_empty_n");
    sc_trace(mVcdFile, fc2_out_V_full_n, "fc2_out_V_full_n");
    sc_trace(mVcdFile, fc2_out_V_dout, "fc2_out_V_dout");
    sc_trace(mVcdFile, fc2_out_V_empty_n, "fc2_out_V_empty_n");
    sc_trace(mVcdFile, ap_sync_done, "ap_sync_done");
    sc_trace(mVcdFile, ap_sync_ready, "ap_sync_ready");
    sc_trace(mVcdFile, start_for_pool1_U0_din, "start_for_pool1_U0_din");
    sc_trace(mVcdFile, start_for_pool1_U0_full_n, "start_for_pool1_U0_full_n");
    sc_trace(mVcdFile, start_for_pool1_U0_dout, "start_for_pool1_U0_dout");
    sc_trace(mVcdFile, start_for_pool1_U0_empty_n, "start_for_pool1_U0_empty_n");
    sc_trace(mVcdFile, start_for_conv2_U0_din, "start_for_conv2_U0_din");
    sc_trace(mVcdFile, start_for_conv2_U0_full_n, "start_for_conv2_U0_full_n");
    sc_trace(mVcdFile, start_for_conv2_U0_dout, "start_for_conv2_U0_dout");
    sc_trace(mVcdFile, start_for_conv2_U0_empty_n, "start_for_conv2_U0_empty_n");
    sc_trace(mVcdFile, start_for_pool2_U0_din, "start_for_pool2_U0_din");
    sc_trace(mVcdFile, start_for_pool2_U0_full_n, "start_for_pool2_U0_full_n");
    sc_trace(mVcdFile, start_for_pool2_U0_dout, "start_for_pool2_U0_dout");
    sc_trace(mVcdFile, start_for_pool2_U0_empty_n, "start_for_pool2_U0_empty_n");
    sc_trace(mVcdFile, start_for_fc1_U0_din, "start_for_fc1_U0_din");
    sc_trace(mVcdFile, start_for_fc1_U0_full_n, "start_for_fc1_U0_full_n");
    sc_trace(mVcdFile, start_for_fc1_U0_dout, "start_for_fc1_U0_dout");
    sc_trace(mVcdFile, start_for_fc1_U0_empty_n, "start_for_fc1_U0_empty_n");
    sc_trace(mVcdFile, start_for_fc2_U0_din, "start_for_fc2_U0_din");
    sc_trace(mVcdFile, start_for_fc2_U0_full_n, "start_for_fc2_U0_full_n");
    sc_trace(mVcdFile, start_for_fc2_U0_dout, "start_for_fc2_U0_dout");
    sc_trace(mVcdFile, start_for_fc2_U0_empty_n, "start_for_fc2_U0_empty_n");
    sc_trace(mVcdFile, start_for_fc3_U0_din, "start_for_fc3_U0_din");
    sc_trace(mVcdFile, start_for_fc3_U0_full_n, "start_for_fc3_U0_full_n");
    sc_trace(mVcdFile, start_for_fc3_U0_dout, "start_for_fc3_U0_dout");
    sc_trace(mVcdFile, start_for_fc3_U0_empty_n, "start_for_fc3_U0_empty_n");
    sc_trace(mVcdFile, fc3_U0_start_full_n, "fc3_U0_start_full_n");
    sc_trace(mVcdFile, fc3_U0_start_write, "fc3_U0_start_write");
#endif

    }
    mHdltvinHandle.open("lenet_hls.hdltvin.dat");
    mHdltvoutHandle.open("lenet_hls.hdltvout.dat");
}

lenet_hls::~lenet_hls() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete conv1_U0;
    delete pool1_U0;
    delete conv2_U0;
    delete pool2_U0;
    delete fc1_U0;
    delete fc2_U0;
    delete fc3_U0;
    delete conv1_out_V_U;
    delete pool1_out_V_U;
    delete conv2_out_V_U;
    delete pool2_out_V_U;
    delete fc1_out_V_U;
    delete fc2_out_V_U;
    delete start_for_pool1_U0_U;
    delete start_for_conv2_U0_U;
    delete start_for_pool2_U0_U;
    delete start_for_fc1_U0_U;
    delete start_for_fc2_U0_U;
    delete start_for_fc3_U0_U;
}

void lenet_hls::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void lenet_hls::thread_ap_done() {
    ap_done = fc3_U0_ap_done.read();
}

void lenet_hls::thread_ap_idle() {
    ap_idle = (conv1_U0_ap_idle.read() & pool1_U0_ap_idle.read() & conv2_U0_ap_idle.read() & pool2_U0_ap_idle.read() & fc1_U0_ap_idle.read() & fc2_U0_ap_idle.read() & fc3_U0_ap_idle.read());
}

void lenet_hls::thread_ap_ready() {
    ap_ready = conv1_U0_ap_ready.read();
}

void lenet_hls::thread_ap_sync_continue() {
    ap_sync_continue = ap_const_logic_1;
}

void lenet_hls::thread_ap_sync_done() {
    ap_sync_done = fc3_U0_ap_done.read();
}

void lenet_hls::thread_ap_sync_ready() {
    ap_sync_ready = conv1_U0_ap_ready.read();
}

void lenet_hls::thread_conv1_U0_ap_continue() {
    conv1_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_conv1_U0_ap_start() {
    conv1_U0_ap_start = ap_start.read();
}

void lenet_hls::thread_conv2_U0_ap_continue() {
    conv2_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_conv2_U0_ap_start() {
    conv2_U0_ap_start = start_for_conv2_U0_empty_n.read();
}

void lenet_hls::thread_fc1_U0_ap_continue() {
    fc1_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_fc1_U0_ap_start() {
    fc1_U0_ap_start = start_for_fc1_U0_empty_n.read();
}

void lenet_hls::thread_fc2_U0_ap_continue() {
    fc2_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_fc2_U0_ap_start() {
    fc2_U0_ap_start = start_for_fc2_U0_empty_n.read();
}

void lenet_hls::thread_fc3_U0_ap_continue() {
    fc3_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_fc3_U0_ap_start() {
    fc3_U0_ap_start = start_for_fc3_U0_empty_n.read();
}

void lenet_hls::thread_fc3_U0_start_full_n() {
    fc3_U0_start_full_n = ap_const_logic_1;
}

void lenet_hls::thread_fc3_U0_start_write() {
    fc3_U0_start_write = ap_const_logic_0;
}

void lenet_hls::thread_fc3_out_V_din() {
    fc3_out_V_din = fc3_U0_out_V_din.read();
}

void lenet_hls::thread_fc3_out_V_write() {
    fc3_out_V_write = fc3_U0_out_V_write.read();
}

void lenet_hls::thread_image_in_V_read() {
    image_in_V_read = conv1_U0_in_V_read.read();
}

void lenet_hls::thread_pool1_U0_ap_continue() {
    pool1_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_pool1_U0_ap_start() {
    pool1_U0_ap_start = start_for_pool1_U0_empty_n.read();
}

void lenet_hls::thread_pool2_U0_ap_continue() {
    pool2_U0_ap_continue = ap_const_logic_1;
}

void lenet_hls::thread_pool2_U0_ap_start() {
    pool2_U0_ap_start = start_for_pool2_U0_empty_n.read();
}

void lenet_hls::thread_start_for_conv2_U0_din() {
    start_for_conv2_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void lenet_hls::thread_start_for_fc1_U0_din() {
    start_for_fc1_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void lenet_hls::thread_start_for_fc2_U0_din() {
    start_for_fc2_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void lenet_hls::thread_start_for_fc3_U0_din() {
    start_for_fc3_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void lenet_hls::thread_start_for_pool1_U0_din() {
    start_for_pool1_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void lenet_hls::thread_start_for_pool2_U0_din() {
    start_for_pool2_U0_din =  (sc_lv<1>) (ap_const_logic_1);
}

void lenet_hls::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"image_in_V_dout\" :  \"" << image_in_V_dout.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"image_in_V_empty_n\" :  \"" << image_in_V_empty_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"image_in_V_read\" :  \"" << image_in_V_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc3_out_V_din\" :  \"" << fc3_out_V_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"fc3_out_V_full_n\" :  \"" << fc3_out_V_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"fc3_out_V_write\" :  \"" << fc3_out_V_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

