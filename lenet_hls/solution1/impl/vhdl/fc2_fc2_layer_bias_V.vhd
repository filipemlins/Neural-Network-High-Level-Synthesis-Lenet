-- ==============================================================
-- File generated on Thu Jun 18 10:15:09 -03 2020
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fc2_fc2_layer_bias_V_rom is 
    generic(
             DWIDTH     : integer := 9; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 84
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fc2_fc2_layer_bias_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "000010100", 1 => "111111111", 2 => "000111111", 3 => "000100010", 
    4 => "000011101", 5 => "110110010", 6 => "111111100", 7 => "000111010", 
    8 => "111101100", 9 => "111110000", 10 => "111011010", 11 => "000000011", 
    12 => "111000111", 13 => "001001010", 14 => "000000010", 15 => "000000101", 
    16 => "001100001", 17 => "000000000", 18 => "111111100", 19 => "111000110", 
    20 => "111111101", 21 => "111111011", 22 => "000100100", 23 => "111011000", 
    24 => "111111110", 25 => "111110000", 26 => "111111010", 27 => "111110111", 
    28 => "111111100", 29 => "000000110", 30 => "000110010", 31 => "111100010", 
    32 => "101111111", 33 => "001110100", 34 => "111111011", 35 => "001000101", 
    36 => "000001100", 37 => "000010110", 38 => "110101110", 39 => "111111001", 
    40 => "000100110", 41 => "111000111", 42 => "111111111", 43 => "000110011", 
    44 => "111101011", 45 => "111110101", 46 => "111101000", 47 => "111101101", 
    48 => "111111011", 49 => "000000000", 50 => "111000010", 51 => "111111111", 
    52 => "000000001", 53 => "000000000", 54 => "000000100", 55 => "111101011", 
    56 => "111111011", 57 => "000011001", 58 => "111001111", 59 => "111000010", 
    60 => "000010101", 61 => "111111010", 62 => "111111111", 63 => "000010011", 
    64 => "111111110", 65 => "111010010", 66 => "111111001", 67 => "000011101", 
    68 => "110011110", 69 => "111111011", 70 => "111111000", 71 => "000001011", 
    72 => "111000000", 73 => "000101100", 74 => "001011000", 75 => "111110011", 
    76 => "111111000", 77 => "000000000", 78 => "000000110", 79 => "000000101", 
    80 => "111011011", 81 => "111111111", 82 => "111111010", 83 => "000110000" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity fc2_fc2_layer_bias_V is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 84;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of fc2_fc2_layer_bias_V is
    component fc2_fc2_layer_bias_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    fc2_fc2_layer_bias_V_rom_U :  component fc2_fc2_layer_bias_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


