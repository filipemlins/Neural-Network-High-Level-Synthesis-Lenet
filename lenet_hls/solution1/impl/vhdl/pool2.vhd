-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity pool2 is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    start_full_n : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_continue : IN STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    start_out : OUT STD_LOGIC;
    start_write : OUT STD_LOGIC;
    out_V_V_din : OUT STD_LOGIC_VECTOR (15 downto 0);
    out_V_V_full_n : IN STD_LOGIC;
    out_V_V_write : OUT STD_LOGIC;
    in_V_V_dout : IN STD_LOGIC_VECTOR (15 downto 0);
    in_V_V_empty_n : IN STD_LOGIC;
    in_V_V_read : OUT STD_LOGIC );
end;


architecture behav of pool2 is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (8 downto 0) := "000000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (8 downto 0) := "000000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (8 downto 0) := "000001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (8 downto 0) := "000010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (8 downto 0) := "000100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (8 downto 0) := "001000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (8 downto 0) := "010000000";
    constant ap_ST_fsm_state9 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv4_0 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv16_0 : STD_LOGIC_VECTOR (15 downto 0) := "0000000000000000";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv8_A9 : STD_LOGIC_VECTOR (7 downto 0) := "10101001";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv4_C : STD_LOGIC_VECTOR (3 downto 0) := "1100";
    constant ap_const_lv4_2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv8_D : STD_LOGIC_VECTOR (7 downto 0) := "00001101";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal real_start : STD_LOGIC;
    signal start_once_reg : STD_LOGIC := '0';
    signal ap_done_reg : STD_LOGIC := '0';
    signal ap_CS_fsm : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal internal_ap_ready : STD_LOGIC;
    signal out_V_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state9 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state9 : signal is "none";
    signal or_cond_reg_478 : STD_LOGIC_VECTOR (0 downto 0);
    signal in_V_V_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal exitcond2_fu_230_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal k_1_fu_224_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal k_1_reg_408 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal p_1_fu_236_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_block_state3 : BOOLEAN;
    signal i_1_fu_259_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_7_fu_253_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_13_fu_269_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_13_reg_432 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal l_1_fu_279_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal l_1_reg_440 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp_1_fu_295_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_1_reg_445 : STD_LOGIC_VECTOR (7 downto 0);
    signal exitcond3_fu_273_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_3_fu_301_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_3_reg_450 : STD_LOGIC_VECTOR (0 downto 0);
    signal j_1_fu_307_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_14_fu_317_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_14_reg_460 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal m_1_fu_327_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal m_1_reg_468 : STD_LOGIC_VECTOR (1 downto 0);
    signal exitcond_fu_321_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal or_cond_fu_359_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal value_V_3_fu_385_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal value_V_3_reg_482 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal pool_buff_V_address0 : STD_LOGIC_VECTOR (7 downto 0);
    signal pool_buff_V_ce0 : STD_LOGIC;
    signal pool_buff_V_we0 : STD_LOGIC;
    signal pool_buff_V_q0 : STD_LOGIC_VECTOR (15 downto 0);
    signal k_reg_145 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_block_state1 : BOOLEAN;
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal tmp_5_fu_247_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_reg_156 : STD_LOGIC_VECTOR (7 downto 0);
    signal exitcond1_fu_218_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_reg_167 : STD_LOGIC_VECTOR (3 downto 0);
    signal j_reg_179 : STD_LOGIC_VECTOR (3 downto 0);
    signal l_reg_191 : STD_LOGIC_VECTOR (1 downto 0);
    signal m_reg_202 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_block_state9 : BOOLEAN;
    signal tmp_2_fu_242_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_9_fu_348_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_V_fu_104 : STD_LOGIC_VECTOR (15 downto 0);
    signal l_cast9_fu_265_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_s_fu_285_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_1_fu_295_p0 : STD_LOGIC_VECTOR (3 downto 0);
    signal m_cast7_cast_fu_313_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp1_fu_333_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp1_cast_fu_339_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal array_access_fu_343_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_12_fu_353_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_11_fu_371_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_6_fu_367_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal value_V_1_fu_377_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (8 downto 0);
    signal tmp_1_fu_295_p00 : STD_LOGIC_VECTOR (7 downto 0);

    component pool2_pool_buff_V IS
    generic (
        DataWidth : INTEGER;
        AddressRange : INTEGER;
        AddressWidth : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR (7 downto 0);
        ce0 : IN STD_LOGIC;
        we0 : IN STD_LOGIC;
        d0 : IN STD_LOGIC_VECTOR (15 downto 0);
        q0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    pool_buff_V_U : component pool2_pool_buff_V
    generic map (
        DataWidth => 16,
        AddressRange => 169,
        AddressWidth => 8)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        address0 => pool_buff_V_address0,
        ce0 => pool_buff_V_ce0,
        we0 => pool_buff_V_we0,
        d0 => in_V_V_dout,
        q0 => pool_buff_V_q0);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_done_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_done_reg <= ap_const_logic_0;
            else
                if ((ap_continue = ap_const_logic_1)) then 
                    ap_done_reg <= ap_const_logic_0;
                elsif (((exitcond1_fu_218_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    ap_done_reg <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    start_once_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                start_once_reg <= ap_const_logic_0;
            else
                if (((internal_ap_ready = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
                    start_once_reg <= ap_const_logic_1;
                elsif ((internal_ap_ready = ap_const_logic_1)) then 
                    start_once_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_reg_167_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (exitcond2_fu_230_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                i_reg_167 <= ap_const_lv4_0;
            elsif (((tmp_7_fu_253_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                i_reg_167 <= i_1_fu_259_p2;
            end if; 
        end if;
    end process;

    j_reg_179_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond3_fu_273_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                j_reg_179 <= j_1_fu_307_p2;
            elsif (((tmp_5_fu_247_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                j_reg_179 <= ap_const_lv4_0;
            end if; 
        end if;
    end process;

    k_reg_145_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((tmp_5_fu_247_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then 
                k_reg_145 <= k_1_reg_408;
            elsif ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                k_reg_145 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    l_reg_191_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_321_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then 
                l_reg_191 <= l_1_reg_440;
            elsif (((tmp_7_fu_253_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state5))) then 
                l_reg_191 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    m_reg_202_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((or_cond_reg_478 = ap_const_lv1_1) and (out_V_V_full_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
                m_reg_202 <= m_1_reg_468;
            elsif (((exitcond3_fu_273_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then 
                m_reg_202 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;

    p_reg_156_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (exitcond2_fu_230_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                p_reg_156 <= p_1_fu_236_p2;
            elsif (((exitcond1_fu_218_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                p_reg_156 <= ap_const_lv8_0;
            end if; 
        end if;
    end process;

    tmp_V_fu_104_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((or_cond_reg_478 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state8))) then 
                tmp_V_fu_104 <= value_V_3_fu_385_p3;
            elsif (((not(((or_cond_reg_478 = ap_const_lv1_1) and (out_V_V_full_n = ap_const_logic_0))) and (or_cond_reg_478 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9)) or (not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
                tmp_V_fu_104 <= ap_const_lv16_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                k_1_reg_408 <= k_1_fu_224_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state6)) then
                l_1_reg_440 <= l_1_fu_279_p2;
                tmp_13_reg_432 <= tmp_13_fu_269_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state7)) then
                m_1_reg_468 <= m_1_fu_327_p2;
                tmp_14_reg_460 <= tmp_14_fu_317_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_321_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                or_cond_reg_478 <= or_cond_fu_359_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond3_fu_273_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                tmp_1_reg_445 <= tmp_1_fu_295_p2;
                tmp_3_reg_450 <= tmp_3_fu_301_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state8)) then
                value_V_3_reg_482 <= value_V_3_fu_385_p3;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (real_start, ap_done_reg, ap_CS_fsm, ap_CS_fsm_state1, out_V_V_full_n, in_V_V_empty_n, ap_CS_fsm_state9, or_cond_reg_478, ap_CS_fsm_state3, exitcond2_fu_230_p2, ap_CS_fsm_state2, ap_CS_fsm_state5, tmp_7_fu_253_p2, ap_CS_fsm_state6, exitcond3_fu_273_p2, ap_CS_fsm_state7, exitcond_fu_321_p2, ap_CS_fsm_state4, tmp_5_fu_247_p2, exitcond1_fu_218_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if ((not(((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1))) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond1_fu_218_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if ((not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (exitcond2_fu_230_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                elsif ((not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (exitcond2_fu_230_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state4 => 
                if (((tmp_5_fu_247_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state5;
                end if;
            when ap_ST_fsm_state5 => 
                if (((tmp_7_fu_253_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state5))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state6;
                end if;
            when ap_ST_fsm_state6 => 
                if (((exitcond3_fu_273_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state6))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state7;
                end if;
            when ap_ST_fsm_state7 => 
                if (((exitcond_fu_321_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state7))) then
                    ap_NS_fsm <= ap_ST_fsm_state6;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when ap_ST_fsm_state8 => 
                ap_NS_fsm <= ap_ST_fsm_state9;
            when ap_ST_fsm_state9 => 
                if ((not(((or_cond_reg_478 = ap_const_lv1_1) and (out_V_V_full_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state9))) then
                    ap_NS_fsm <= ap_ST_fsm_state7;
                else
                    ap_NS_fsm <= ap_ST_fsm_state9;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);
    ap_CS_fsm_state9 <= ap_CS_fsm(8);

    ap_block_state1_assign_proc : process(real_start, ap_done_reg)
    begin
                ap_block_state1 <= ((real_start = ap_const_logic_0) or (ap_done_reg = ap_const_logic_1));
    end process;


    ap_block_state3_assign_proc : process(in_V_V_empty_n, exitcond2_fu_230_p2)
    begin
                ap_block_state3 <= ((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0));
    end process;


    ap_block_state9_assign_proc : process(out_V_V_full_n, or_cond_reg_478)
    begin
                ap_block_state9 <= ((or_cond_reg_478 = ap_const_lv1_1) and (out_V_V_full_n = ap_const_logic_0));
    end process;


    ap_done_assign_proc : process(ap_done_reg, ap_CS_fsm_state2, exitcond1_fu_218_p2)
    begin
        if (((exitcond1_fu_218_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_done_reg;
        end if; 
    end process;


    ap_idle_assign_proc : process(real_start, ap_CS_fsm_state1)
    begin
        if (((real_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;

    ap_ready <= internal_ap_ready;
    array_access_fu_343_p2 <= std_logic_vector(unsigned(tmp1_cast_fu_339_p1) + unsigned(tmp_1_reg_445));
    exitcond1_fu_218_p2 <= "1" when (k_reg_145 = ap_const_lv5_10) else "0";
    exitcond2_fu_230_p2 <= "1" when (p_reg_156 = ap_const_lv8_A9) else "0";
    exitcond3_fu_273_p2 <= "1" when (l_reg_191 = ap_const_lv2_2) else "0";
    exitcond_fu_321_p2 <= "1" when (m_reg_202 = ap_const_lv2_2) else "0";
    i_1_fu_259_p2 <= std_logic_vector(unsigned(i_reg_167) + unsigned(ap_const_lv4_2));

    in_V_V_blk_n_assign_proc : process(in_V_V_empty_n, ap_CS_fsm_state3, exitcond2_fu_230_p2)
    begin
        if (((exitcond2_fu_230_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            in_V_V_blk_n <= in_V_V_empty_n;
        else 
            in_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    in_V_V_read_assign_proc : process(in_V_V_empty_n, ap_CS_fsm_state3, exitcond2_fu_230_p2)
    begin
        if ((not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (exitcond2_fu_230_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            in_V_V_read <= ap_const_logic_1;
        else 
            in_V_V_read <= ap_const_logic_0;
        end if; 
    end process;


    internal_ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_218_p2)
    begin
        if (((exitcond1_fu_218_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            internal_ap_ready <= ap_const_logic_1;
        else 
            internal_ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    j_1_fu_307_p2 <= std_logic_vector(unsigned(j_reg_179) + unsigned(ap_const_lv4_2));
    k_1_fu_224_p2 <= std_logic_vector(unsigned(k_reg_145) + unsigned(ap_const_lv5_1));
    l_1_fu_279_p2 <= std_logic_vector(unsigned(ap_const_lv2_1) + unsigned(l_reg_191));
    l_cast9_fu_265_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(l_reg_191),4));
    m_1_fu_327_p2 <= std_logic_vector(unsigned(ap_const_lv2_1) + unsigned(m_reg_202));
    m_cast7_cast_fu_313_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(m_reg_202),4));
    or_cond_fu_359_p2 <= (tmp_3_reg_450 and tmp_12_fu_353_p2);

    out_V_V_blk_n_assign_proc : process(out_V_V_full_n, ap_CS_fsm_state9, or_cond_reg_478)
    begin
        if (((or_cond_reg_478 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            out_V_V_blk_n <= out_V_V_full_n;
        else 
            out_V_V_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    out_V_V_din <= value_V_3_reg_482;

    out_V_V_write_assign_proc : process(out_V_V_full_n, ap_CS_fsm_state9, or_cond_reg_478)
    begin
        if ((not(((or_cond_reg_478 = ap_const_lv1_1) and (out_V_V_full_n = ap_const_logic_0))) and (or_cond_reg_478 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state9))) then 
            out_V_V_write <= ap_const_logic_1;
        else 
            out_V_V_write <= ap_const_logic_0;
        end if; 
    end process;

    p_1_fu_236_p2 <= std_logic_vector(unsigned(p_reg_156) + unsigned(ap_const_lv8_1));

    pool_buff_V_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state7, tmp_2_fu_242_p1, tmp_9_fu_348_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state7)) then 
            pool_buff_V_address0 <= tmp_9_fu_348_p1(8 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            pool_buff_V_address0 <= tmp_2_fu_242_p1(8 - 1 downto 0);
        else 
            pool_buff_V_address0 <= "XXXXXXXX";
        end if; 
    end process;


    pool_buff_V_ce0_assign_proc : process(in_V_V_empty_n, ap_CS_fsm_state3, exitcond2_fu_230_p2, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or (not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (ap_const_logic_1 = ap_CS_fsm_state3)))) then 
            pool_buff_V_ce0 <= ap_const_logic_1;
        else 
            pool_buff_V_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    pool_buff_V_we0_assign_proc : process(in_V_V_empty_n, ap_CS_fsm_state3, exitcond2_fu_230_p2)
    begin
        if ((not(((exitcond2_fu_230_p2 = ap_const_lv1_0) and (in_V_V_empty_n = ap_const_logic_0))) and (exitcond2_fu_230_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            pool_buff_V_we0 <= ap_const_logic_1;
        else 
            pool_buff_V_we0 <= ap_const_logic_0;
        end if; 
    end process;


    real_start_assign_proc : process(ap_start, start_full_n, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (start_full_n = ap_const_logic_0))) then 
            real_start <= ap_const_logic_0;
        else 
            real_start <= ap_start;
        end if; 
    end process;

    start_out <= real_start;

    start_write_assign_proc : process(real_start, start_once_reg)
    begin
        if (((start_once_reg = ap_const_logic_0) and (real_start = ap_const_logic_1))) then 
            start_write <= ap_const_logic_1;
        else 
            start_write <= ap_const_logic_0;
        end if; 
    end process;

    tmp1_cast_fu_339_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp1_fu_333_p2),8));
    tmp1_fu_333_p2 <= std_logic_vector(unsigned(j_reg_179) + unsigned(m_cast7_cast_fu_313_p1));
    tmp_11_fu_371_p2 <= "1" when (signed(tmp_V_fu_104) > signed(pool_buff_V_q0)) else "0";
    tmp_12_fu_353_p2 <= "1" when (m_reg_202 = ap_const_lv2_1) else "0";
    tmp_13_fu_269_p1 <= l_reg_191(1 - 1 downto 0);
    tmp_14_fu_317_p1 <= m_reg_202(1 - 1 downto 0);
    tmp_1_fu_295_p0 <= tmp_1_fu_295_p00(4 - 1 downto 0);
    tmp_1_fu_295_p00 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_s_fu_285_p2),8));
    tmp_1_fu_295_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_1_fu_295_p0) * unsigned(ap_const_lv8_D), 8));
    tmp_2_fu_242_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(p_reg_156),64));
    tmp_3_fu_301_p2 <= "1" when (l_reg_191 = ap_const_lv2_1) else "0";
    tmp_5_fu_247_p2 <= "1" when (unsigned(i_reg_167) < unsigned(ap_const_lv4_C)) else "0";
    tmp_6_fu_367_p2 <= (tmp_14_reg_460 or tmp_13_reg_432);
    tmp_7_fu_253_p2 <= "1" when (unsigned(j_reg_179) < unsigned(ap_const_lv4_C)) else "0";
    tmp_9_fu_348_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(array_access_fu_343_p2),64));
    tmp_s_fu_285_p2 <= std_logic_vector(unsigned(i_reg_167) + unsigned(l_cast9_fu_265_p1));
    value_V_1_fu_377_p3 <= 
        tmp_V_fu_104 when (tmp_11_fu_371_p2(0) = '1') else 
        pool_buff_V_q0;
    value_V_3_fu_385_p3 <= 
        value_V_1_fu_377_p3 when (tmp_6_fu_367_p2(0) = '1') else 
        pool_buff_V_q0;
end behav;
