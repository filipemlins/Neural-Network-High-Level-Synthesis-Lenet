-- ==============================================================
-- File generated on Thu Jun 18 10:15:05 -03 2020
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
    0 => "111101111100", 1 => "111110011111", 2 => "001011110100", 
    3 => "011001111000", 4 => "001100110000", 5 => "001111101100", 
    6 => "000010001011", 7 => "001101001010", 8 => "111100001110", 
    9 => "000100010110", 10 => "000010011111", 11 => "010000111101", 
    12 => "110011000101", 13 => "111011010011", 14 => "000110000000", 
    15 => "001000000100", 16 => "011001010100", 17 => "011010100101", 
    18 => "000010101011", 19 => "111000011001", 20 => "000101111000", 
    21 => "000101111010", 22 => "111111000101", 23 => "110001010100", 
    24 => "000010110100", 25 => "000111000011", 26 => "001110010111", 
    27 => "011000100010", 28 => "110101010011", 29 => "111111000100", 
    30 => "010001101101", 31 => "011111000100", 32 => "111111111110", 
    33 => "001000111110", 34 => "111101010110", 35 => "110001111111", 
    36 => "110110011000", 37 => "111100100100", 38 => "111110000110", 
    39 => "001101011111", 40 => "111011011000", 41 => "111111111011", 
    42 => "001001110001", 43 => "000100000001", 44 => "010001011010", 
    45 => "111100110111", 46 => "111111100111", 47 => "111110010110", 
    48 => "101111100011", 49 => "111001100011", 50 => "001001010101", 
    51 => "011001100010", 52 => "101100100101", 53 => "111001100110", 
    54 => "000000010111", 55 => "011111101110", 56 => "101011001001", 
    57 => "110101110011", 58 => "010011111110", 59 => "010010111010", 
    60 => "000000011000", 61 => "001000111101", 62 => "011000100010", 
    63 => "011010100010", 64 => "001101101100", 65 => "101011110110", 
    66 => "101100111110", 67 => "101000100110", 68 => "001111110100", 
    69 => "011000110100", 70 => "010001101011", 71 => "000100010010", 
    72 => "000110111010", 73 => "001001000011", 74 => "010111001000", 
    75 => "011000010001", 76 => "110010011110", 77 => "111011110101", 
    78 => "110110100101", 79 => "111110100011", 80 => "000110110110", 
    81 => "001111011101", 82 => "010001111101", 83 => "011010010110", 
    84 => "111101011101", 85 => "001011010101", 86 => "001000001000", 
    87 => "010011101111", 88 => "110100101100", 89 => "101111000011", 
    90 => "110101100001", 91 => "110100011100", 92 => "111001001101", 
    93 => "101010110111", 94 => "110010010010", 95 => "100111010110", 
    96 => "001001100011", 97 => "010010000101", 98 => "001010000110", 
    99 => "000100011011", 100 => "110001011001", 101 => "001011000010", 
    102 => "001100100100", 103 => "010010110100", 104 => "101110101001", 
    105 => "110100001011", 106 => "000010000010", 107 => "111110100101", 
    108 => "111001101100", 109 => "101011101100", 110 => "111100000101", 
    111 => "000100011000", 112 => "111011110010", 113 => "111110111010", 
    114 => "110100011011", 115 => "000001000001", 116 => "110011101010", 
    117 => "000011000110", 118 => "000011010011", 119 => "111110001100", 
    120 => "110111100001", 121 => "001000001000", 122 => "000110000101", 
    123 => "000100011010", 124 => "110000100000", 125 => "111011100001", 
    126 => "001101110000", 127 => "111010110101" );


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


