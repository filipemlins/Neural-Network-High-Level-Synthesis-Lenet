// ==============================================================
// File generated on Wed Jun 17 16:36:36 -03 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv1_conv1_layer_bias_H__
#define __conv1_conv1_layer_bias_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv1_conv1_layer_bias_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 8;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv1_conv1_layer_bias_ram) {
        ram[0] = "0b00111101010100011010111110101111";
        ram[1] = "0b00111100001101010101101110011001";
        ram[2] = "0b10111011110111101110011010101101";
        ram[3] = "0b00111100100111110110110111001110";
        ram[4] = "0b10111011100000110011000010011010";
        ram[5] = "0b10111100111100011011010100011101";
        ram[6] = "0b10111011010001110000100000100111";
        ram[7] = "0b00111100001111100101100110010101";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(conv1_conv1_layer_bias) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 8;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv1_conv1_layer_bias_ram* meminst;


SC_CTOR(conv1_conv1_layer_bias) {
meminst = new conv1_conv1_layer_bias_ram("conv1_conv1_layer_bias_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv1_conv1_layer_bias() {
    delete meminst;
}


};//endmodule
#endif
