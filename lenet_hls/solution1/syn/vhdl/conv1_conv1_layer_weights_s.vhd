-- ==============================================================
-- File generated on Sat Jun 20 14:10:49 -03 2020
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity conv1_conv1_layer_weights_s_rom is 
    generic(
             DWIDTH     : integer := 12; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 128
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of conv1_conv1_layer_weights_s_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "110111101011", 1 => "111101111011", 2 => "000001111100", 
    3 => "001101011110", 4 => "001100000000", 5 => "110000000000", 
    6 => "000010010101", 7 => "000011001111", 8 => "110000111000", 
    9 => "001011000011", 10 => "000011100110", 11 => "000111111111", 
    12 => "110101001010", 13 => "110011100101", 14 => "111111101111", 
    15 => "111011001101", 16 => "110100000001", 17 => "101011001010", 
    18 => "110011011010", 19 => "111100011111", 20 => "000000100010", 
    21 => "000100101101", 22 => "001111110101", 23 => "101010100101", 
    24 => "000111000000", 25 => "100111010010", 26 => "000000011010", 
    27 => "110011000111", 28 => "110111100001", 29 => "111001000111", 
    30 => "011010010011", 31 => "000100011011", 32 => "111001111011", 
    33 => "110110100010", 34 => "101011111101", 35 => "001100010000", 
    36 => "101101001110", 37 => "001001100010", 38 => "000000011101", 
    39 => "000100011000", 40 => "000101111001", 41 => "110111110101", 
    42 => "111000100110", 43 => "000010110100", 44 => "010100111000", 
    45 => "000110111010", 46 => "001111110110", 47 => "000100110010", 
    48 => "000100100010", 49 => "001111000111", 50 => "000100100100", 
    51 => "110101111011", 52 => "111001011010", 53 => "111101001101", 
    54 => "001111111111", 55 => "000101101011", 56 => "000010011000", 
    57 => "111011001101", 58 => "111010001111", 59 => "001010011010", 
    60 => "110010000000", 61 => "111100010000", 62 => "001111000011", 
    63 => "000001011101", 64 => "101011001000", 65 => "001010111101", 
    66 => "010001000011", 67 => "011001000110", 68 => "000001000011", 
    69 => "000011010101", 70 => "111001010010", 71 => "110111011111", 
    72 => "111001011000", 73 => "101110110001", 74 => "000011110010", 
    75 => "001110001101", 76 => "111000001000", 77 => "111100011011", 
    78 => "101110001010", 79 => "110010000111", 80 => "111100110001", 
    81 => "111000011111", 82 => "111010101000", 83 => "000011000010", 
    84 => "110000000000", 85 => "111010100111", 86 => "111000001010", 
    87 => "110011010010", 88 => "110110111010", 89 => "001010001010", 
    90 => "000000010010", 91 => "110000000000", 92 => "000010011010", 
    93 => "001111111111", 94 => "000010000100", 95 => "000001111110", 
    96 => "001010010100", 97 => "110000000000", 98 => "000101111001", 
    99 => "001000110010", 100 => "110011100110", 101 => "110101101010", 
    102 => "000100101001", 103 => "111110000011", 104 => "111111011011", 
    105 => "000011000100", 106 => "001011000011", 107 => "111101111111", 
    108 => "111010011111", 109 => "111001101100", 110 => "111000110011", 
    111 => "001001001001", 112 => "000001110010", 113 => "111011111011", 
    114 => "111010100100", 115 => "110111010001", 116 => "111000010100", 
    117 => "000111010100", 118 => "001111111111", 119 => "001010101100", 
    120 => "110000000000", 121 => "111110100010", 122 => "111110111011", 
    123 => "000011101111", 124 => "110011111111", 125 => "111011001010", 
    126 => "000001111000", 127 => "001010100000" );


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

entity conv1_conv1_layer_weights_s is
    generic (
        DataWidth : INTEGER := 12;
        AddressRange : INTEGER := 128;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of conv1_conv1_layer_weights_s is
    component conv1_conv1_layer_weights_s_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    conv1_conv1_layer_weights_s_rom_U :  component conv1_conv1_layer_weights_s_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


