// ==============================================================
// File generated on Wed Jun 17 16:36:36 -03 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv2_conv2_layer_bias_H__
#define __conv2_conv2_layer_bias_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv2_conv2_layer_bias_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv2_conv2_layer_bias_ram) {
        ram[0] = "0b00111101010101011000100011001100";
        ram[1] = "0b00111100001110111001010011110011";
        ram[2] = "0b10111101001001101010101001010100";
        ram[3] = "0b00111100000111010110110101010010";
        ram[4] = "0b10111101000111010010111011110000";
        ram[5] = "0b10111101011011010110011110100011";
        ram[6] = "0b00111100001010111101100100010110";
        ram[7] = "0b10111100000100111011100100010110";
        ram[8] = "0b00111100101110110010111101110100";
        ram[9] = "0b10111100001111000000111000000010";
        ram[10] = "0b00111100101111011101010100110010";
        ram[11] = "0b10111100011011111011011011000010";
        ram[12] = "0b10111010000101011010110001111011";
        ram[13] = "0b00111100110110101111011111111101";
        ram[14] = "0b00111101001000101011100111010000";
        ram[15] = "0b10111101001011010010000011010010";


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


SC_MODULE(conv2_conv2_layer_bias) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv2_conv2_layer_bias_ram* meminst;


SC_CTOR(conv2_conv2_layer_bias) {
meminst = new conv2_conv2_layer_bias_ram("conv2_conv2_layer_bias_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv2_conv2_layer_bias() {
    delete meminst;
}


};//endmodule
#endif
