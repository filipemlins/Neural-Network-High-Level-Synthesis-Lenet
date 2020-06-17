// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module pool2 (
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
        out_V_din,
        out_V_full_n,
        out_V_write,
        in_V_dout,
        in_V_empty_n,
        in_V_read
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_state3 = 10'd4;
parameter    ap_ST_fsm_state4 = 10'd8;
parameter    ap_ST_fsm_state5 = 10'd16;
parameter    ap_ST_fsm_state6 = 10'd32;
parameter    ap_ST_fsm_state7 = 10'd64;
parameter    ap_ST_fsm_state8 = 10'd128;
parameter    ap_ST_fsm_state9 = 10'd256;
parameter    ap_ST_fsm_state10 = 10'd512;

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
output  [31:0] out_V_din;
input   out_V_full_n;
output   out_V_write;
input  [31:0] in_V_dout;
input   in_V_empty_n;
output   in_V_read;

reg ap_done;
reg ap_idle;
reg start_write;
reg out_V_write;
reg in_V_read;

reg    real_start;
reg    start_once_reg;
reg    ap_done_reg;
(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg    internal_ap_ready;
reg    out_V_blk_n;
wire    ap_CS_fsm_state10;
reg   [0:0] or_cond_reg_572;
reg    in_V_blk_n;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond9_fu_244_p2;
wire   [4:0] k_1_fu_238_p2;
reg   [4:0] k_1_reg_501;
wire    ap_CS_fsm_state2;
wire   [7:0] p_1_fu_250_p2;
reg    ap_block_state3;
wire   [3:0] i_1_fu_273_p2;
wire    ap_CS_fsm_state5;
wire   [0:0] tmp_6_fu_267_p2;
wire   [0:0] tmp_15_fu_283_p1;
reg   [0:0] tmp_15_reg_525;
wire    ap_CS_fsm_state6;
wire   [1:0] l_1_fu_293_p2;
reg   [1:0] l_1_reg_533;
wire   [7:0] tmp_s_fu_309_p2;
reg   [7:0] tmp_s_reg_538;
wire   [0:0] exitcond8_fu_287_p2;
wire   [0:0] tmp_2_fu_315_p2;
reg   [0:0] tmp_2_reg_543;
wire   [3:0] j_1_fu_321_p2;
wire   [1:0] m_1_fu_341_p2;
reg   [1:0] m_1_reg_556;
wire    ap_CS_fsm_state7;
wire   [0:0] tmp_5_fu_362_p2;
reg   [0:0] tmp_5_reg_561;
wire   [0:0] exitcond_fu_335_p2;
wire   [0:0] or_cond_fu_378_p2;
wire   [31:0] pool_buff_q0;
reg   [31:0] value_reg_576;
wire    ap_CS_fsm_state8;
wire    ap_CS_fsm_state9;
wire   [0:0] tmp_21_fu_223_p2;
reg   [0:0] tmp_21_reg_590;
reg   [7:0] pool_buff_address0;
reg    pool_buff_ce0;
reg    pool_buff_we0;
reg   [4:0] k_reg_155;
reg    ap_block_state1;
wire    ap_CS_fsm_state4;
wire   [0:0] tmp_4_fu_261_p2;
reg   [7:0] p_reg_166;
wire   [0:0] exitcond1_fu_232_p2;
reg   [3:0] i_reg_177;
reg   [3:0] j_reg_189;
reg   [1:0] l_reg_201;
reg   [1:0] m_reg_212;
reg    ap_block_state10;
wire   [63:0] tmp_fu_256_p1;
wire   [63:0] tmp_8_fu_367_p1;
wire   [31:0] value_3_fu_479_p3;
reg   [31:0] tmp_1_fu_114;
wire   [3:0] l_cast4_fu_279_p1;
wire   [3:0] tmp_9_fu_299_p2;
wire   [3:0] tmp_s_fu_309_p0;
wire   [3:0] m_cast2_cast_fu_327_p1;
wire   [3:0] tmp4_fu_347_p2;
wire   [7:0] tmp4_cast_fu_353_p1;
wire   [0:0] tmp_17_fu_331_p1;
wire   [7:0] array_access_fu_357_p2;
wire   [0:0] tmp_13_fu_372_p2;
wire   [31:0] p_0_4_to_int_fu_387_p1;
wire   [31:0] value_to_int_fu_404_p1;
wire   [7:0] tmp_12_fu_390_p4;
wire   [22:0] tmp_23_fu_400_p1;
wire   [0:0] notrhs_fu_427_p2;
wire   [0:0] notlhs_fu_421_p2;
wire   [7:0] tmp_16_fu_407_p4;
wire   [22:0] tmp_24_fu_417_p1;
wire   [0:0] notrhs6_fu_445_p2;
wire   [0:0] notlhs5_fu_439_p2;
wire   [0:0] tmp_18_fu_433_p2;
wire   [0:0] tmp_19_fu_451_p2;
wire   [0:0] tmp_20_fu_457_p2;
wire   [0:0] tmp_22_fu_463_p2;
wire   [0:0] sel_tmp_fu_468_p2;
wire   [31:0] value_1_fu_473_p3;
reg   [9:0] ap_NS_fsm;
wire   [7:0] tmp_s_fu_309_p00;

// power-on initialization
initial begin
#0 start_once_reg = 1'b0;
#0 ap_done_reg = 1'b0;
#0 ap_CS_fsm = 10'd1;
end

pool2_pool_buff #(
    .DataWidth( 32 ),
    .AddressRange( 169 ),
    .AddressWidth( 8 ))
pool_buff_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(pool_buff_address0),
    .ce0(pool_buff_ce0),
    .we0(pool_buff_we0),
    .d0(in_V_dout),
    .q0(pool_buff_q0)
);

lenet_hls_fcmp_32ns_32ns_1_1_1 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
lenet_hls_fcmp_32ns_32ns_1_1_1_U25(
    .din0(tmp_1_fu_114),
    .din1(value_reg_576),
    .opcode(5'd2),
    .dout(tmp_21_fu_223_p2)
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
        end else if (((exitcond1_fu_232_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if ((~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond9_fu_244_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_177 <= 4'd0;
    end else if (((tmp_6_fu_267_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        i_reg_177 <= i_1_fu_273_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond8_fu_287_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        j_reg_189 <= j_1_fu_321_p2;
    end else if (((tmp_4_fu_261_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_189 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_4_fu_261_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        k_reg_155 <= k_1_reg_501;
    end else if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
        k_reg_155 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_335_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
        l_reg_201 <= l_1_reg_533;
    end else if (((tmp_6_fu_267_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        l_reg_201 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((or_cond_reg_572 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10))) begin
        m_reg_212 <= m_1_reg_556;
    end else if (((exitcond8_fu_287_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        m_reg_212 <= 2'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond9_fu_244_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        p_reg_166 <= p_1_fu_250_p2;
    end else if (((exitcond1_fu_232_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        p_reg_166 <= 8'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((~((or_cond_reg_572 == 1'd1) & (out_V_full_n == 1'b0)) & (or_cond_reg_572 == 1'd0) & (1'b1 == ap_CS_fsm_state10))) begin
        tmp_1_fu_114 <= value_3_fu_479_p3;
    end else if (((~((or_cond_reg_572 == 1'd1) & (out_V_full_n == 1'b0)) & (or_cond_reg_572 == 1'd1) & (1'b1 == ap_CS_fsm_state10)) | (~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1)))) begin
        tmp_1_fu_114 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        k_1_reg_501 <= k_1_fu_238_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        l_1_reg_533 <= l_1_fu_293_p2;
        tmp_15_reg_525 <= tmp_15_fu_283_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        m_1_reg_556 <= m_1_fu_341_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_335_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state7))) begin
        or_cond_reg_572 <= or_cond_fu_378_p2;
        tmp_5_reg_561 <= tmp_5_fu_362_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_5_reg_561 == 1'd1) & (1'b1 == ap_CS_fsm_state9))) begin
        tmp_21_reg_590 <= tmp_21_fu_223_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond8_fu_287_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        tmp_2_reg_543 <= tmp_2_fu_315_p2;
        tmp_s_reg_538 <= tmp_s_fu_309_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        value_reg_576 <= pool_buff_q0;
    end
end

always @ (*) begin
    if (((exitcond1_fu_232_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((exitcond9_fu_244_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        in_V_blk_n = in_V_empty_n;
    end else begin
        in_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond9_fu_244_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        in_V_read = 1'b1;
    end else begin
        in_V_read = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond1_fu_232_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        internal_ap_ready = 1'b1;
    end else begin
        internal_ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((or_cond_reg_572 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
        out_V_blk_n = out_V_full_n;
    end else begin
        out_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((or_cond_reg_572 == 1'd1) & (out_V_full_n == 1'b0)) & (or_cond_reg_572 == 1'd1) & (1'b1 == ap_CS_fsm_state10))) begin
        out_V_write = 1'b1;
    end else begin
        out_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        pool_buff_address0 = tmp_8_fu_367_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        pool_buff_address0 = tmp_fu_256_p1;
    end else begin
        pool_buff_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state7) | (~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3)))) begin
        pool_buff_ce0 = 1'b1;
    end else begin
        pool_buff_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond9_fu_244_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        pool_buff_we0 = 1'b1;
    end else begin
        pool_buff_we0 = 1'b0;
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
            if ((~((real_start == 1'b0) | (ap_done_reg == 1'b1)) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond1_fu_232_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if ((~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond9_fu_244_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else if ((~((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond9_fu_244_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((tmp_4_fu_261_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((tmp_6_fu_267_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((exitcond8_fu_287_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            if (((exitcond_fu_335_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state7))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state8;
            end
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            if ((~((or_cond_reg_572 == 1'd1) & (out_V_full_n == 1'b0)) & (1'b1 == ap_CS_fsm_state10))) begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state1 = ((real_start == 1'b0) | (ap_done_reg == 1'b1));
end

always @ (*) begin
    ap_block_state10 = ((or_cond_reg_572 == 1'd1) & (out_V_full_n == 1'b0));
end

always @ (*) begin
    ap_block_state3 = ((exitcond9_fu_244_p2 == 1'd0) & (in_V_empty_n == 1'b0));
end

assign ap_ready = internal_ap_ready;

assign array_access_fu_357_p2 = (tmp4_cast_fu_353_p1 + tmp_s_reg_538);

assign exitcond1_fu_232_p2 = ((k_reg_155 == 5'd16) ? 1'b1 : 1'b0);

assign exitcond8_fu_287_p2 = ((l_reg_201 == 2'd2) ? 1'b1 : 1'b0);

assign exitcond9_fu_244_p2 = ((p_reg_166 == 8'd169) ? 1'b1 : 1'b0);

assign exitcond_fu_335_p2 = ((m_reg_212 == 2'd2) ? 1'b1 : 1'b0);

assign i_1_fu_273_p2 = (i_reg_177 + 4'd2);

assign j_1_fu_321_p2 = (j_reg_189 + 4'd2);

assign k_1_fu_238_p2 = (k_reg_155 + 5'd1);

assign l_1_fu_293_p2 = (2'd1 + l_reg_201);

assign l_cast4_fu_279_p1 = l_reg_201;

assign m_1_fu_341_p2 = (2'd1 + m_reg_212);

assign m_cast2_cast_fu_327_p1 = m_reg_212;

assign notlhs5_fu_439_p2 = ((tmp_16_fu_407_p4 != 8'd255) ? 1'b1 : 1'b0);

assign notlhs_fu_421_p2 = ((tmp_12_fu_390_p4 != 8'd255) ? 1'b1 : 1'b0);

assign notrhs6_fu_445_p2 = ((tmp_24_fu_417_p1 == 23'd0) ? 1'b1 : 1'b0);

assign notrhs_fu_427_p2 = ((tmp_23_fu_400_p1 == 23'd0) ? 1'b1 : 1'b0);

assign or_cond_fu_378_p2 = (tmp_2_reg_543 & tmp_13_fu_372_p2);

assign out_V_din = ((tmp_5_reg_561[0:0] === 1'b1) ? value_1_fu_473_p3 : value_reg_576);

assign p_0_4_to_int_fu_387_p1 = tmp_1_fu_114;

assign p_1_fu_250_p2 = (p_reg_166 + 8'd1);

assign sel_tmp_fu_468_p2 = (tmp_5_reg_561 & tmp_22_fu_463_p2);

assign start_out = real_start;

assign tmp4_cast_fu_353_p1 = tmp4_fu_347_p2;

assign tmp4_fu_347_p2 = (j_reg_189 + m_cast2_cast_fu_327_p1);

assign tmp_12_fu_390_p4 = {{p_0_4_to_int_fu_387_p1[30:23]}};

assign tmp_13_fu_372_p2 = ((m_reg_212 == 2'd1) ? 1'b1 : 1'b0);

assign tmp_15_fu_283_p1 = l_reg_201[0:0];

assign tmp_16_fu_407_p4 = {{value_to_int_fu_404_p1[30:23]}};

assign tmp_17_fu_331_p1 = m_reg_212[0:0];

assign tmp_18_fu_433_p2 = (notrhs_fu_427_p2 | notlhs_fu_421_p2);

assign tmp_19_fu_451_p2 = (notrhs6_fu_445_p2 | notlhs5_fu_439_p2);

assign tmp_20_fu_457_p2 = (tmp_19_fu_451_p2 & tmp_18_fu_433_p2);

assign tmp_22_fu_463_p2 = (tmp_21_reg_590 & tmp_20_fu_457_p2);

assign tmp_23_fu_400_p1 = p_0_4_to_int_fu_387_p1[22:0];

assign tmp_24_fu_417_p1 = value_to_int_fu_404_p1[22:0];

assign tmp_2_fu_315_p2 = ((l_reg_201 == 2'd1) ? 1'b1 : 1'b0);

assign tmp_4_fu_261_p2 = ((i_reg_177 < 4'd12) ? 1'b1 : 1'b0);

assign tmp_5_fu_362_p2 = (tmp_17_fu_331_p1 | tmp_15_reg_525);

assign tmp_6_fu_267_p2 = ((j_reg_189 < 4'd12) ? 1'b1 : 1'b0);

assign tmp_8_fu_367_p1 = array_access_fu_357_p2;

assign tmp_9_fu_299_p2 = (i_reg_177 + l_cast4_fu_279_p1);

assign tmp_fu_256_p1 = p_reg_166;

assign tmp_s_fu_309_p0 = tmp_s_fu_309_p00;

assign tmp_s_fu_309_p00 = tmp_9_fu_299_p2;

assign tmp_s_fu_309_p2 = (tmp_s_fu_309_p0 * $signed('hD));

assign value_1_fu_473_p3 = ((sel_tmp_fu_468_p2[0:0] === 1'b1) ? tmp_1_fu_114 : value_reg_576);

assign value_3_fu_479_p3 = ((tmp_5_reg_561[0:0] === 1'b1) ? value_1_fu_473_p3 : value_reg_576);

assign value_to_int_fu_404_p1 = value_reg_576;

endmodule //pool2
