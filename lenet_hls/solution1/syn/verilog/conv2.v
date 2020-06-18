// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module conv2 (
        ap_clk,
        ap_rst,
        ap_start,
        start_full_n,
        ap_done,
        ap_continue,
        ap_idle,
        ap_ready,
        start_out,
        start_write,
        conv2_out_V_din,
        conv2_out_V_full_n,
        conv2_out_V_write,
        in_V_dout,
        in_V_empty_n,
        in_V_read
);

parameter    ap_ST_fsm_state1 = 25'd1;
parameter    ap_ST_fsm_state2 = 25'd2;
parameter    ap_ST_fsm_state3 = 25'd4;
parameter    ap_ST_fsm_state4 = 25'd8;
parameter    ap_ST_fsm_state5 = 25'd16;
parameter    ap_ST_fsm_state6 = 25'd32;
parameter    ap_ST_fsm_state7 = 25'd64;
parameter    ap_ST_fsm_state8 = 25'd128;
parameter    ap_ST_fsm_state9 = 25'd256;
parameter    ap_ST_fsm_state10 = 25'd512;
parameter    ap_ST_fsm_state11 = 25'd1024;
parameter    ap_ST_fsm_state12 = 25'd2048;
parameter    ap_ST_fsm_state13 = 25'd4096;
parameter    ap_ST_fsm_state14 = 25'd8192;
parameter    ap_ST_fsm_state15 = 25'd16384;
parameter    ap_ST_fsm_state16 = 25'd32768;
parameter    ap_ST_fsm_state17 = 25'd65536;
parameter    ap_ST_fsm_state18 = 25'd131072;
parameter    ap_ST_fsm_state19 = 25'd262144;
parameter    ap_ST_fsm_state20 = 25'd524288;
parameter    ap_ST_fsm_state21 = 25'd1048576;
parameter    ap_ST_fsm_state22 = 25'd2097152;
parameter    ap_ST_fsm_state23 = 25'd4194304;
parameter    ap_ST_fsm_state24 = 25'd8388608;
parameter    ap_ST_fsm_state25 = 25'd16777216;

input   ap_clk;
input   ap_rst;
input   ap_start;
input   start_full_n;
output   ap_done;
input   ap_continue;
output   ap_idle;
output   ap_ready;
output   start_out;
output   start_write;
output  [31:0] conv2_out_V_din;
input   conv2_out_V_full_n;
output   conv2_out_V_write;
input  [31:0] in_V_dout;
input   in_V_empty_n;
output   in_V_read;

reg ap_done;
reg ap_idle;
reg start_write;
reg conv2_out_V_write;
reg in_V_read;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [24:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
wire   [3:0] conv2_layer_bias_address0;
reg    conv2_layer_bias_ce0;
wire   [31:0] conv2_layer_bias_q0;
wire   [8:0] conv2_layer_weights_address0;
reg    conv2_layer_weights_ce0;
wire   [31:0] conv2_layer_weights_q0;
reg    conv2_out_V_blk_n;
wire    ap_CS_fsm_state25;
reg    in_V_blk_n;
wire    ap_CS_fsm_state2;
wire   [0:0] exitcond4_fu_329_p2;
wire   [10:0] k_3_fu_335_p2;
reg    ap_block_state2;
wire   [4:0] filter_1_fu_352_p2;
reg   [4:0] filter_1_reg_588;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond5_fu_346_p2;
wire   [6:0] tmp_65_cast1_fu_371_p1;
reg   [6:0] tmp_65_cast1_reg_598;
wire    ap_CS_fsm_state4;
reg   [31:0] conv2_layer_bias_loa_reg_603;
wire   [3:0] i_11_fu_381_p2;
reg   [3:0] i_11_reg_611;
wire    ap_CS_fsm_state5;
wire   [3:0] j_7_fu_393_p2;
reg   [3:0] j_7_reg_619;
wire    ap_CS_fsm_state6;
wire   [1:0] row_offset_1_fu_409_p2;
reg   [1:0] row_offset_1_reg_627;
wire    ap_CS_fsm_state7;
wire   [8:0] tmp_56_fu_445_p2;
reg   [8:0] tmp_56_reg_632;
wire   [0:0] exitcond9_fu_403_p2;
wire   [7:0] tmp_66_fu_460_p3;
reg   [7:0] tmp_66_reg_637;
wire   [1:0] col_offset_1_fu_478_p2;
reg   [1:0] col_offset_1_reg_645;
wire    ap_CS_fsm_state8;
wire   [10:0] tmp_72_cast_fu_493_p3;
reg   [10:0] tmp_72_cast_reg_650;
wire   [0:0] exitcond8_fu_472_p2;
wire  signed [11:0] tmp_65_cast_fu_516_p1;
reg  signed [11:0] tmp_65_cast_reg_655;
wire   [3:0] channel_offset_1_fu_530_p2;
reg   [3:0] channel_offset_1_reg_663;
wire    ap_CS_fsm_state9;
wire   [10:0] next_mul_fu_536_p2;
reg   [10:0] next_mul_reg_668;
wire   [0:0] exitcond_fu_524_p2;
reg   [31:0] conv2_layer_weights_1_reg_683;
wire    ap_CS_fsm_state10;
wire   [31:0] conv_buff_q0;
reg   [31:0] conv_buff_load_reg_688;
wire   [31:0] grp_fu_320_p2;
reg   [31:0] tmp_63_reg_693;
wire    ap_CS_fsm_state14;
wire   [31:0] grp_fu_314_p2;
wire    ap_CS_fsm_state19;
reg   [31:0] a_assign_reg_703;
wire    ap_CS_fsm_state23;
wire   [31:0] tmp_64_fu_570_p3;
reg   [31:0] tmp_64_reg_709;
wire    ap_CS_fsm_state24;
reg   [10:0] conv_buff_address0;
reg    conv_buff_ce0;
reg    conv_buff_we0;
reg   [10:0] k_reg_187;
reg    ap_block_state1;
reg   [4:0] filter_reg_198;
wire   [0:0] exitcond6_fu_375_p2;
reg   [3:0] i_reg_210;
wire   [0:0] exitcond7_fu_387_p2;
reg   [3:0] j_reg_222;
reg   [31:0] sum_3_reg_234;
reg   [1:0] row_offset_reg_246;
reg   [31:0] sum_4_reg_257;
reg   [1:0] col_offset_reg_269;
reg   [31:0] sum_5_reg_280;
reg   [3:0] channel_offset_reg_292;
reg   [10:0] phi_mul_reg_303;
wire   [63:0] tmp_fu_341_p1;
wire   [63:0] tmp_s_fu_358_p1;
wire   [63:0] tmp_73_cast_fu_560_p1;
wire   [63:0] tmp_62_fu_565_p1;
reg   [31:0] grp_fu_314_p0;
reg   [31:0] grp_fu_314_p1;
wire    ap_CS_fsm_state15;
wire    ap_CS_fsm_state11;
wire   [5:0] tmp_61_fu_363_p3;
wire   [3:0] row_offset_cast7_fu_399_p1;
wire   [3:0] tmp_55_fu_415_p2;
wire   [7:0] p_shl_fu_421_p3;
wire   [4:0] p_shl3_fu_433_p3;
wire   [8:0] p_shl_cast_fu_429_p1;
wire   [8:0] p_shl3_cast_fu_441_p1;
wire   [6:0] tmp_57_cast_fu_451_p1;
wire   [6:0] tmp_65_fu_455_p2;
wire   [7:0] tmp_58_fu_484_p1;
wire   [7:0] tmp_67_fu_488_p2;
wire   [3:0] col_offset_cast4_cas_fu_468_p1;
wire   [3:0] tmp1_fu_501_p2;
wire   [8:0] tmp1_cast_fu_507_p1;
wire   [8:0] tmp_59_fu_511_p2;
wire   [11:0] phi_mul_cast_fu_520_p1;
wire   [11:0] t1_fu_542_p2;
wire   [10:0] tmp_61_cast_fu_551_p1;
wire   [10:0] tmp_68_fu_555_p2;
wire  signed [31:0] t1_cast_fu_547_p1;
wire   [0:0] tmp_i_fu_324_p2;
reg   [24:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 25'd1;
end

conv2_conv2_layer_bias #(
    .DataWidth( 32 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
conv2_layer_bias_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(conv2_layer_bias_address0),
    .ce0(conv2_layer_bias_ce0),
    .q0(conv2_layer_bias_q0)
);

conv2_conv2_layer_weights #(
    .DataWidth( 32 ),
    .AddressRange( 512 ),
    .AddressWidth( 9 ))
conv2_layer_weights_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(conv2_layer_weights_address0),
    .ce0(conv2_layer_weights_ce0),
    .q0(conv2_layer_weights_q0)
);

conv2_conv_buff #(
    .DataWidth( 32 ),
    .AddressRange( 1568 ),
    .AddressWidth( 11 ))
conv_buff_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(conv_buff_address0),
    .ce0(conv_buff_ce0),
    .we0(conv_buff_we0),
    .d0(in_V_dout),
    .q0(conv_buff_q0)
);

lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1_U17(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_314_p0),
    .din1(grp_fu_314_p1),
    .ce(1'b1),
    .dout(grp_fu_314_p2)
);

lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1 #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
lenet_hls_fmul_32ns_32ns_32_4_max_dsp_1_U18(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(conv_buff_load_reg_688),
    .din1(conv2_layer_weights_1_reg_683),
    .ce(1'b1),
    .dout(grp_fu_320_p2)
);

lenet_hls_fcmp_32ns_32ns_1_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
lenet_hls_fcmp_32ns_32ns_1_1_1_U19(
    .din0(a_assign_reg_703),
    .din1(32'd0),
    .opcode(5'd2),
    .dout(tmp_i_fu_324_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_done_reg <= 1'b0;
    end else begin
        if ((ap_continue == 1'b1)) begin
            ap_done_reg <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state3) & (exitcond5_fu_346_p2 == 1'd1))) begin
            ap_done_reg <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        start_once_reg <= 1'b0;
    end else begin
        if (((internal_ap_ready == 1'b0) & (real_start == 1'b1))) begin
            start_once_reg <= 1'b1;
        end else if ((internal_ap_ready == 1'b1)) begin
            start_once_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        channel_offset_reg_292 <= channel_offset_1_reg_663;
    end else if (((exitcond8_fu_472_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        channel_offset_reg_292 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (exitcond_fu_524_p2 == 1'd1))) begin
        col_offset_reg_269 <= col_offset_1_reg_645;
    end else if (((exitcond9_fu_403_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        col_offset_reg_269 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond4_fu_329_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        filter_reg_198 <= 5'd0;
    end else if (((exitcond6_fu_375_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        filter_reg_198 <= filter_1_reg_588;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_210 <= 4'd0;
    end else if (((exitcond7_fu_387_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        i_reg_210 <= i_11_reg_611;
    end
end

always @ (posedge ap_clk) begin
    if (((conv2_out_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state25))) begin
        j_reg_222 <= j_7_reg_619;
    end else if (((exitcond6_fu_375_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        j_reg_222 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond4_fu_329_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        k_reg_187 <= k_3_fu_335_p2;
    end else if ((~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
        k_reg_187 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        phi_mul_reg_303 <= next_mul_reg_668;
    end else if (((exitcond8_fu_472_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        phi_mul_reg_303 <= 11'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (exitcond8_fu_472_p2 == 1'd1))) begin
        row_offset_reg_246 <= row_offset_1_reg_627;
    end else if (((exitcond7_fu_387_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        row_offset_reg_246 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state8) & (exitcond8_fu_472_p2 == 1'd1))) begin
        sum_3_reg_234 <= sum_4_reg_257;
    end else if (((exitcond7_fu_387_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        sum_3_reg_234 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state9) & (exitcond_fu_524_p2 == 1'd1))) begin
        sum_4_reg_257 <= sum_5_reg_280;
    end else if (((exitcond9_fu_403_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        sum_4_reg_257 <= sum_3_reg_234;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        sum_5_reg_280 <= grp_fu_314_p2;
    end else if (((exitcond8_fu_472_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        sum_5_reg_280 <= sum_4_reg_257;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        a_assign_reg_703 <= grp_fu_314_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        channel_offset_1_reg_663 <= channel_offset_1_fu_530_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        col_offset_1_reg_645 <= col_offset_1_fu_478_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        conv2_layer_bias_loa_reg_603 <= conv2_layer_bias_q0;
        tmp_65_cast1_reg_598[5 : 1] <= tmp_65_cast1_fu_371_p1[5 : 1];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        conv2_layer_weights_1_reg_683 <= conv2_layer_weights_q0;
        conv_buff_load_reg_688 <= conv_buff_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        filter_1_reg_588 <= filter_1_fu_352_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        i_11_reg_611 <= i_11_fu_381_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        j_7_reg_619 <= j_7_fu_393_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_524_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state9))) begin
        next_mul_reg_668 <= next_mul_fu_536_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        row_offset_1_reg_627 <= row_offset_1_fu_409_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond9_fu_403_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        tmp_56_reg_632[8 : 1] <= tmp_56_fu_445_p2[8 : 1];
        tmp_66_reg_637[7 : 1] <= tmp_66_fu_460_p3[7 : 1];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        tmp_63_reg_693 <= grp_fu_320_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        tmp_64_reg_709 <= tmp_64_fu_570_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond8_fu_472_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state8))) begin
        tmp_65_cast_reg_655 <= tmp_65_cast_fu_516_p1;
        tmp_72_cast_reg_650[10 : 3] <= tmp_72_cast_fu_493_p3[10 : 3];
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond5_fu_346_p2 == 1'd1))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = ap_done_reg;
    end
end

always @ (*) begin
    if (((real_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        conv2_layer_bias_ce0 = 1'b1;
    end else begin
        conv2_layer_bias_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        conv2_layer_weights_ce0 = 1'b1;
    end else begin
        conv2_layer_weights_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state25)) begin
        conv2_out_V_blk_n = conv2_out_V_full_n;
    end else begin
        conv2_out_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((conv2_out_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state25))) begin
        conv2_out_V_write = 1'b1;
    end else begin
        conv2_out_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        conv_buff_address0 = tmp_62_fu_565_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        conv_buff_address0 = tmp_fu_341_p1;
    end else begin
        conv_buff_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | (~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state2)))) begin
        conv_buff_ce0 = 1'b1;
    end else begin
        conv_buff_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond4_fu_329_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        conv_buff_we0 = 1'b1;
    end else begin
        conv_buff_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        grp_fu_314_p0 = tmp_63_reg_693;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_314_p0 = conv2_layer_bias_loa_reg_603;
    end else begin
        grp_fu_314_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        grp_fu_314_p1 = sum_5_reg_280;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        grp_fu_314_p1 = sum_3_reg_234;
    end else begin
        grp_fu_314_p1 = 'bx;
    end
end

always @ (*) begin
    if (((exitcond4_fu_329_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        in_V_blk_n = in_V_empty_n;
    end else begin
        in_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond4_fu_329_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        in_V_read = 1'b1;
    end else begin
        in_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond5_fu_346_p2 == 1'd1))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (start_full_n == 1'b0))) begin
        real_start = 1'b0;
    end else begin
        real_start = ap_start;
    end
end

always @ (*) begin
    if (((start_once_reg == 1'b0) & (real_start == 1'b1))) begin
        start_write = 1'b1;
    end else begin
        start_write = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if ((~((ap_done_reg == 1'b1) | (real_start == 1'b0)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if ((~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond4_fu_329_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else if ((~((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond4_fu_329_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond5_fu_346_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((exitcond6_fu_375_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((exitcond7_fu_387_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((exitcond9_fu_403_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state20;
            end
        end
        ap_ST_fsm_state8 : begin
            if (((1'b1 == ap_CS_fsm_state8) & (exitcond8_fu_472_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state9;
            end
        end
        ap_ST_fsm_state9 : begin
            if (((1'b1 == ap_CS_fsm_state9) & (exitcond_fu_524_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state16;
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state25;
        end
        ap_ST_fsm_state25 : begin
            if (((conv2_out_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state25))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state25;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state25 = ap_CS_fsm[32'd24];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state1 = ((ap_done_reg == 1'b1) | (real_start == 1'b0));
end

always @ (*) begin
    ap_block_state2 = ((exitcond4_fu_329_p2 == 1'd0) & (in_V_empty_n == 1'b0));
end

assign ap_ready = internal_ap_ready;

assign channel_offset_1_fu_530_p2 = (channel_offset_reg_292 + 4'd1);

assign col_offset_1_fu_478_p2 = (col_offset_reg_269 + 2'd1);

assign col_offset_cast4_cas_fu_468_p1 = col_offset_reg_269;

assign conv2_layer_bias_address0 = tmp_s_fu_358_p1;

assign conv2_layer_weights_address0 = tmp_73_cast_fu_560_p1;

assign conv2_out_V_din = tmp_64_reg_709;

assign exitcond4_fu_329_p2 = ((k_reg_187 == 11'd1568) ? 1'b1 : 1'b0);

assign exitcond5_fu_346_p2 = ((filter_reg_198 == 5'd16) ? 1'b1 : 1'b0);

assign exitcond6_fu_375_p2 = ((i_reg_210 == 4'd13) ? 1'b1 : 1'b0);

assign exitcond7_fu_387_p2 = ((j_reg_222 == 4'd13) ? 1'b1 : 1'b0);

assign exitcond8_fu_472_p2 = ((col_offset_reg_269 == 2'd2) ? 1'b1 : 1'b0);

assign exitcond9_fu_403_p2 = ((row_offset_reg_246 == 2'd2) ? 1'b1 : 1'b0);

assign exitcond_fu_524_p2 = ((channel_offset_reg_292 == 4'd8) ? 1'b1 : 1'b0);

assign filter_1_fu_352_p2 = (filter_reg_198 + 5'd1);

assign i_11_fu_381_p2 = (i_reg_210 + 4'd1);

assign j_7_fu_393_p2 = (j_reg_222 + 4'd1);

assign k_3_fu_335_p2 = (k_reg_187 + 11'd1);

assign next_mul_fu_536_p2 = (phi_mul_reg_303 + 11'd196);

assign p_shl3_cast_fu_441_p1 = p_shl3_fu_433_p3;

assign p_shl3_fu_433_p3 = {{tmp_55_fu_415_p2}, {1'd0}};

assign p_shl_cast_fu_429_p1 = p_shl_fu_421_p3;

assign p_shl_fu_421_p3 = {{tmp_55_fu_415_p2}, {4'd0}};

assign phi_mul_cast_fu_520_p1 = phi_mul_reg_303;

assign row_offset_1_fu_409_p2 = (row_offset_reg_246 + 2'd1);

assign row_offset_cast7_fu_399_p1 = row_offset_reg_246;

assign start_out = real_start;

assign t1_cast_fu_547_p1 = $signed(t1_fu_542_p2);

assign t1_fu_542_p2 = ($signed(tmp_65_cast_reg_655) + $signed(phi_mul_cast_fu_520_p1));

assign tmp1_cast_fu_507_p1 = tmp1_fu_501_p2;

assign tmp1_fu_501_p2 = (col_offset_cast4_cas_fu_468_p1 + j_reg_222);

assign tmp_55_fu_415_p2 = (i_reg_210 + row_offset_cast7_fu_399_p1);

assign tmp_56_fu_445_p2 = (p_shl_cast_fu_429_p1 - p_shl3_cast_fu_441_p1);

assign tmp_57_cast_fu_451_p1 = row_offset_reg_246;

assign tmp_58_fu_484_p1 = col_offset_reg_269;

assign tmp_59_fu_511_p2 = (tmp_56_reg_632 + tmp1_cast_fu_507_p1);

assign tmp_61_cast_fu_551_p1 = channel_offset_reg_292;

assign tmp_61_fu_363_p3 = {{filter_reg_198}, {1'd0}};

assign tmp_62_fu_565_p1 = $unsigned(t1_cast_fu_547_p1);

assign tmp_64_fu_570_p3 = ((tmp_i_fu_324_p2[0:0] === 1'b1) ? a_assign_reg_703 : 32'd0);

assign tmp_65_cast1_fu_371_p1 = tmp_61_fu_363_p3;

assign tmp_65_cast_fu_516_p1 = $signed(tmp_59_fu_511_p2);

assign tmp_65_fu_455_p2 = (tmp_57_cast_fu_451_p1 + tmp_65_cast1_reg_598);

assign tmp_66_fu_460_p3 = {{tmp_65_fu_455_p2}, {1'd0}};

assign tmp_67_fu_488_p2 = (tmp_66_reg_637 + tmp_58_fu_484_p1);

assign tmp_68_fu_555_p2 = (tmp_72_cast_reg_650 + tmp_61_cast_fu_551_p1);

assign tmp_72_cast_fu_493_p3 = {{tmp_67_fu_488_p2}, {3'd0}};

assign tmp_73_cast_fu_560_p1 = tmp_68_fu_555_p2;

assign tmp_fu_341_p1 = k_reg_187;

assign tmp_s_fu_358_p1 = filter_reg_198;

always @ (posedge ap_clk) begin
    tmp_65_cast1_reg_598[0] <= 1'b0;
    tmp_65_cast1_reg_598[6] <= 1'b0;
    tmp_56_reg_632[0] <= 1'b0;
    tmp_66_reg_637[0] <= 1'b0;
    tmp_72_cast_reg_650[2:0] <= 3'b000;
end

endmodule //conv2
