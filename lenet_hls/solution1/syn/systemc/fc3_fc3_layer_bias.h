// ==============================================================
// File generated on Wed Jun 17 16:36:42 -03 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __fc3_fc3_layer_bias_H__
#define __fc3_fc3_layer_bias_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct fc3_fc3_layer_bias_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 10;
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


   SC_CTOR(fc3_fc3_layer_bias_ram) {
        ram[0] = "0b10111011110111000101110101001100";
        ram[1] = "0b00111101011001110110101111111101";
        ram[2] = "0b10111011000110100001100010111101";
        ram[3] = "0b10111100001011100101001101010001";
        ram[4] = "0b00111100001010100001000001111101";
        ram[5] = "0b00111101000100110011101100011001";
        ram[6] = "0b10111100111111100001011000010101";
        ram[7] = "0b00111101000011110010011100000101";
        ram[8] = "0b10111101011111010011011010100101";
        ram[9] = "0b10111100110011101001110010111101";


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


SC_MODULE(fc3_fc3_layer_bias) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 10;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


fc3_fc3_layer_bias_ram* meminst;


SC_CTOR(fc3_fc3_layer_bias) {
meminst = new fc3_fc3_layer_bias_ram("fc3_fc3_layer_bias_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~fc3_fc3_layer_bias() {
    delete meminst;
}


};//endmodule
#endif
