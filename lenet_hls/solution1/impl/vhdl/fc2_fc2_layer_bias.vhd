-- ==============================================================
-- File generated on Thu Jun 18 00:08:03 -03 2020
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fc2_fc2_layer_bias_rom is 
    generic(
             DWIDTH     : integer := 32; 
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


architecture rtl of fc2_fc2_layer_bias_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "00111011101000000010100000001110", 
    1 => "10110101100010111010101111011101", 
    2 => "00111100011111000001001111100010", 
    3 => "00111100000010000000100100010011", 
    4 => "00111011111010011110100101110100", 
    5 => "10111100100110111001101100011000", 
    6 => "10111010010010011111110000011111", 
    7 => "00111100011010110101011010110001", 
    8 => "10111011100111001000110100011010", 
    9 => "10111011011110010101000110110011", 
    10 => "10111100000101101100100100111000", 
    11 => "00111010010110110010101110011001", 
    12 => "10111100011000001000100010010111", 
    13 => "00111100100101000101100001001010", 
    14 => "00111010000000011110100111011110", 
    15 => "00111010101010010110101100111001", 
    16 => "00111100110000101001010000101010", 
    17 => "00110111011000011111010111010100", 
    18 => "10111010010000111100110000101011", 
    19 => "10111100011001111011110011011111", 
    20 => "10111010000101000100011100011110", 
    21 => "10111010100000000101010100110000", 
    22 => "00111100000100110110000100010100", 
    23 => "10111100000111101000101000000011", 
    24 => "10111001111011101100000101000101", 
    25 => "10111011011101111100001111100111", 
    26 => "10111010101111001000010011011101", 
    27 => "10111011000010000101000111000100", 
    28 => "10111010010000001100101000100011", 
    29 => "00111010110111010000111101000110", 
    30 => "00111100010010000010101010110100", 
    31 => "10111011111010011110101001100111", 
    32 => "10111101000000000110011110011111", 
    33 => "00111100111010010101000010110110", 
    34 => "10111010100111010000111100011001", 
    35 => "00111100100010101010010101101101", 
    36 => "00111011010011000010000000100101", 
    37 => "00111011101100110001111110000000", 
    38 => "10111100101000100101100111000001", 
    39 => "10111010110001100111000111100110", 
    40 => "00111100000110100111000001101001", 
    41 => "10111100011000001100101001111100", 
    42 => "10111000100100010011000111110000", 
    43 => "00111100010011011110110100001110", 
    44 => "10111011101000010011011001010010", 
    45 => "10111011001001011010100010001101", 
    46 => "10111011101111100100101000000100", 
    47 => "10111011100100110011100100100111", 
    48 => "10111010100100001000100000011000", 
    49 => "00000000000000000000000000000000", 
    50 => "10111100011101111011001001101111", 
    51 => "10111000110110100001110101011110", 
    52 => "00111001100101000011110110111111", 
    53 => "00111000111110111100110010010001", 
    54 => "00111010100001111110010110010010", 
    55 => "10111011101000110100000011111101", 
    56 => "10111010100001100111110001110011", 
    57 => "00111011110011100000010110100011", 
    58 => "10111100010000010011110011001000", 
    59 => "10111100011101110111101100100101", 
    60 => "00111011101010101011001000111111", 
    61 => "10111010101011111101000011001000", 
    62 => "10111000011000111010000001001001", 
    63 => "00111011100111001101110011111111", 
    64 => "10111001100110000101011111101101", 
    65 => "10111100001101011000010010111001", 
    66 => "10111010110100100100100010101001", 
    67 => "00111011111011001101000100100111", 
    68 => "10111100110000100111100000010110", 
    69 => "10111010100101101000011101000100", 
    70 => "10111010111001100100100001111010", 
    71 => "00111011001111000100000001010010", 
    72 => "10111100011111101111010001000111", 
    73 => "00111100001100001110110000110110", 
    74 => "00111100101100011101100010000001", 
    75 => "10111011010011101101100110010110", 
    76 => "10111010111110101110110110110101", 
    77 => "00110111110001111101011010111111", 
    78 => "00111010110011000110001010110100", 
    79 => "00111010101101011000110011101111", 
    80 => "10111100000100011000111010011001", 
    81 => "10111001000010111010000011011111", 
    82 => "10111010101101111011100010011101", 
    83 => "00111100010000001100000101011100" );


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

entity fc2_fc2_layer_bias is
    generic (
        DataWidth : INTEGER := 32;
        AddressRange : INTEGER := 84;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of fc2_fc2_layer_bias is
    component fc2_fc2_layer_bias_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    fc2_fc2_layer_bias_rom_U :  component fc2_fc2_layer_bias_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


