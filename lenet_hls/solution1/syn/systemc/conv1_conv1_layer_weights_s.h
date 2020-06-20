// ==============================================================
// File generated on Sat Jun 20 14:10:49 -03 2020
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
// SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
// IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __conv1_conv1_layer_weights_s_H__
#define __conv1_conv1_layer_weights_s_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv1_conv1_layer_weights_s_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 12;
  static const unsigned AddressRange = 128;
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


   SC_CTOR(conv1_conv1_layer_weights_s_ram) {
        ram[0] = "0b110111101011";
        ram[1] = "0b111101111011";
        ram[2] = "0b000001111100";
        ram[3] = "0b001101011110";
        ram[4] = "0b001100000000";
        ram[5] = "0b110000000000";
        ram[6] = "0b000010010101";
        ram[7] = "0b000011001111";
        ram[8] = "0b110000111000";
        ram[9] = "0b001011000011";
        ram[10] = "0b000011100110";
        ram[11] = "0b000111111111";
        ram[12] = "0b110101001010";
        ram[13] = "0b110011100101";
        ram[14] = "0b111111101111";
        ram[15] = "0b111011001101";
        ram[16] = "0b110100000001";
        ram[17] = "0b101011001010";
        ram[18] = "0b110011011010";
        ram[19] = "0b111100011111";
        ram[20] = "0b000000100010";
        ram[21] = "0b000100101101";
        ram[22] = "0b001111110101";
        ram[23] = "0b101010100101";
        ram[24] = "0b000111000000";
        ram[25] = "0b100111010010";
        ram[26] = "0b000000011010";
        ram[27] = "0b110011000111";
        ram[28] = "0b110111100001";
        ram[29] = "0b111001000111";
        ram[30] = "0b011010010011";
        ram[31] = "0b000100011011";
        ram[32] = "0b111001111011";
        ram[33] = "0b110110100010";
        ram[34] = "0b101011111101";
        ram[35] = "0b001100010000";
        ram[36] = "0b101101001110";
        ram[37] = "0b001001100010";
        ram[38] = "0b000000011101";
        ram[39] = "0b000100011000";
        ram[40] = "0b000101111001";
        ram[41] = "0b110111110101";
        ram[42] = "0b111000100110";
        ram[43] = "0b000010110100";
        ram[44] = "0b010100111000";
        ram[45] = "0b000110111010";
        ram[46] = "0b001111110110";
        ram[47] = "0b000100110010";
        ram[48] = "0b000100100010";
        ram[49] = "0b001111000111";
        ram[50] = "0b000100100100";
        ram[51] = "0b110101111011";
        ram[52] = "0b111001011010";
        ram[53] = "0b111101001101";
        ram[54] = "0b001111111111";
        ram[55] = "0b000101101011";
        ram[56] = "0b000010011000";
        ram[57] = "0b111011001101";
        ram[58] = "0b111010001111";
        ram[59] = "0b001010011010";
        ram[60] = "0b110010000000";
        ram[61] = "0b111100010000";
        ram[62] = "0b001111000011";
        ram[63] = "0b000001011101";
        ram[64] = "0b101011001000";
        ram[65] = "0b001010111101";
        ram[66] = "0b010001000011";
        ram[67] = "0b011001000110";
        ram[68] = "0b000001000011";
        ram[69] = "0b000011010101";
        ram[70] = "0b111001010010";
        ram[71] = "0b110111011111";
        ram[72] = "0b111001011000";
        ram[73] = "0b101110110001";
        ram[74] = "0b000011110010";
        ram[75] = "0b001110001101";
        ram[76] = "0b111000001000";
        ram[77] = "0b111100011011";
        ram[78] = "0b101110001010";
        ram[79] = "0b110010000111";
        ram[80] = "0b111100110001";
        ram[81] = "0b111000011111";
        ram[82] = "0b111010101000";
        ram[83] = "0b000011000010";
        ram[84] = "0b110000000000";
        ram[85] = "0b111010100111";
        ram[86] = "0b111000001010";
        ram[87] = "0b110011010010";
        ram[88] = "0b110110111010";
        ram[89] = "0b001010001010";
        ram[90] = "0b000000010010";
        ram[91] = "0b110000000000";
        ram[92] = "0b000010011010";
        ram[93] = "0b001111111111";
        ram[94] = "0b000010000100";
        ram[95] = "0b000001111110";
        ram[96] = "0b001010010100";
        ram[97] = "0b110000000000";
        ram[98] = "0b000101111001";
        ram[99] = "0b001000110010";
        ram[100] = "0b110011100110";
        ram[101] = "0b110101101010";
        ram[102] = "0b000100101001";
        ram[103] = "0b111110000011";
        ram[104] = "0b111111011011";
        ram[105] = "0b000011000100";
        ram[106] = "0b001011000011";
        ram[107] = "0b111101111111";
        ram[108] = "0b111010011111";
        ram[109] = "0b111001101100";
        ram[110] = "0b111000110011";
        ram[111] = "0b001001001001";
        ram[112] = "0b000001110010";
        ram[113] = "0b111011111011";
        ram[114] = "0b111010100100";
        ram[115] = "0b110111010001";
        ram[116] = "0b111000010100";
        ram[117] = "0b000111010100";
        ram[118] = "0b001111111111";
        ram[119] = "0b001010101100";
        ram[120] = "0b110000000000";
        ram[121] = "0b111110100010";
        ram[122] = "0b111110111011";
        ram[123] = "0b000011101111";
        ram[124] = "0b110011111111";
        ram[125] = "0b111011001010";
        ram[126] = "0b000001111000";
        ram[127] = "0b001010100000";


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


SC_MODULE(conv1_conv1_layer_weights_s) {


static const unsigned DataWidth = 12;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv1_conv1_layer_weights_s_ram* meminst;


SC_CTOR(conv1_conv1_layer_weights_s) {
meminst = new conv1_conv1_layer_weights_s_ram("conv1_conv1_layer_weights_s_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv1_conv1_layer_weights_s() {
    delete meminst;
}


};//endmodule
#endif
