// ==============================================================
// File generated on Sat Jun 20 14:10:49 -03 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __lenet_hls_fpext_32ns_64_1_1__HH__
#define __lenet_hls_fpext_32ns_64_1_1__HH__
#include "ACMP_fpext_comb.h"
#include <systemc>

template<
    int ID,
    int NUM_STAGE,
    int din0_WIDTH,
    int dout_WIDTH>
SC_MODULE(lenet_hls_fpext_32ns_64_1_1) {
    sc_core::sc_in< sc_dt::sc_lv<din0_WIDTH> >   din0;
    sc_core::sc_out< sc_dt::sc_lv<dout_WIDTH> >   dout;



    ACMP_fpext_comb<ID, 1, din0_WIDTH, dout_WIDTH> ACMP_fpext_comb_U;

    SC_CTOR(lenet_hls_fpext_32ns_64_1_1):  ACMP_fpext_comb_U ("ACMP_fpext_comb_U") {
        ACMP_fpext_comb_U.din0(din0);
        ACMP_fpext_comb_U.dout(dout);

    }

};

#endif //
