// ==============================================================
// File generated on Sat Jun 20 14:10:52 -03 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __fc2_fc2_layer_bias_V_H__
#define __fc2_fc2_layer_bias_V_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct fc2_fc2_layer_bias_V_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 8;
  static const unsigned AddressRange = 84;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(fc2_fc2_layer_bias_V_ram) {
        ram[0] = "0b11111110";
        ram[1] = "0b00100000";
        ram[2] = "0b00000110";
        ram[3] = "0b00110010";
        ram[4] = "0b00010100";
        ram[5] = "0b11110100";
        ram[6] = "0b00001010";
        ram[7] = "0b11111010";
        ram[8] = "0b00100000";
        ram[9] = "0b11111000";
        ram[10] = "0b01000010";
        ram[11] = "0b01000100";
        ram[12] = "0b00001000";
        ram[13] = "0b11110000";
        ram[14] = "0b00000100";
        ram[15] = "0b00100110";
        ram[16] = "0b00010000";
        ram[17] = "0b00001010";
        ram[18] = "0b00100010";
        ram[19] = "0b00001010";
        ram[20] = "0b00010000";
        ram[21] = "0b00000110";
        ram[22] = "0b00000110";
        ram[23] = "0b00110100";
        ram[24] = "0b11011000";
        ram[25] = "0b11011000";
        ram[26] = "0b00000110";
        ram[27] = "0b11110110";
        ram[28] = "0b11010110";
        ram[29] = "0b11111000";
        ram[30] = "0b11111010";
        ram[31] = "0b00010010";
        ram[32] = "0b00100010";
        ram[33] = "0b00101000";
        ram[34] = "0b00100010";
        ram[35] = "0b00100010";
        ram[36] = "0b00010000";
        ram[37] = "0b11110000";
        ram[38] = "0b00010100";
        ram[39] = "0b00111000";
        ram[40] = "0b01001010";
        ram[41] = "0b00110110";
        ram[42] = "0b00101100";
        ram[43] = "0b11110100";
        ram[44] = "0b11101110";
        ram[45] = "0b11110010";
        ram[46] = "0b00011100";
        ram[47] = "0b11101000";
        ram[48] = "0b00000000";
        ram[49] = "0b00011000";
        ram[50] = "0b11101100";
        ram[51] = "0b11101110";
        ram[52] = "0b00010110";
        ram[53] = "0b11111010";
        ram[54] = "0b00011100";
        ram[55] = "0b00111110";
        ram[56] = "0b00011110";
        ram[57] = "0b00001100";
        ram[58] = "0b00100110";
        ram[59] = "0b11111100";
        ram[60] = "0b11111010";
        ram[61] = "0b00010010";
        ram[62] = "0b11101010";
        ram[63] = "0b01000110";
        ram[64] = "0b00010010";
        ram[65] = "0b00101010";
        ram[66] = "0b00000110";
        ram[67] = "0b11101110";
        ram[68] = "0b11110000";
        ram[69] = "0b11100000";
        ram[70] = "0b00000100";
        ram[71] = "0b00001000";
        ram[72] = "0b11110110";
        ram[73] = "0b00011000";
        ram[74] = "0b11111010";
        ram[75] = "0b11110010";
        ram[76] = "0b00101100";
        ram[77] = "0b00011000";
        ram[78] = "0b01001100";
        ram[79] = "0b11110010";
        ram[80] = "0b00001100";
        ram[81] = "0b01001100";
        ram[82] = "0b00010100";
        ram[83] = "0b00001000";


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


SC_MODULE(fc2_fc2_layer_bias_V) {


static const unsigned DataWidth = 8;
static const unsigned AddressRange = 84;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


fc2_fc2_layer_bias_V_ram* meminst;


SC_CTOR(fc2_fc2_layer_bias_V) {
meminst = new fc2_fc2_layer_bias_V_ram("fc2_fc2_layer_bias_V_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~fc2_fc2_layer_bias_V() {
    delete meminst;
}


};//endmodule
#endif
