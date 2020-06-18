-- ==============================================================
-- File generated on Thu Jun 18 10:15:08 -03 2020
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
-- SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
-- IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
-- Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity fc1_fc1_layer_bias_V_rom is 
    generic(
             DWIDTH     : integer := 8; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 120
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of fc1_fc1_layer_bias_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "11111101", 1 => "00100011", 2 => "00000100", 3 => "11111110", 
    4 => "00000001", 5 => "11101001", 6 => "11110100", 7 => "00010110", 
    8 => "00000011", 9 => "00011111", 10 => "11111110", 11 to 12=> "00000000", 
    13 => "11000001", 14 => "11100100", 15 => "11110001", 16 => "00000110", 
    17 => "00010010", 18 => "00100000", 19 => "00101011", 20 => "00011100", 
    21 => "11111111", 22 => "00001101", 23 => "11111000", 24 => "11100101", 
    25 => "00000001", 26 => "11110111", 27 => "00100010", 28 => "11110110", 
    29 => "00011111", 30 => "00110100", 31 => "11111100", 32 => "11100111", 
    33 => "00001000", 34 => "11111101", 35 => "11100110", 36 => "00001100", 
    37 => "11111100", 38 => "11111111", 39 => "11110110", 40 => "11101010", 
    41 => "00110101", 42 => "00100110", 43 => "11111010", 44 => "11110101", 
    45 => "11101010", 46 => "00000011", 47 => "00011010", 48 => "00010000", 
    49 => "11111010", 50 => "11101011", 51 => "11100110", 52 => "00001001", 
    53 => "00000100", 54 => "00000111", 55 => "00000010", 56 => "11111001", 
    57 => "00001110", 58 => "11000011", 59 => "00100111", 60 => "00000000", 
    61 => "11110010", 62 => "11101110", 63 => "00000011", 64 => "11101111", 
    65 => "00111000", 66 => "11111010", 67 => "11100111", 68 => "00011010", 
    69 => "00001101", 70 => "00100010", 71 => "11111011", 72 => "11111111", 
    73 => "11000100", 74 => "11101010", 75 => "11110011", 76 => "00000011", 
    77 => "11110011", 78 => "01000000", 79 => "00011110", 80 => "11100001", 
    81 => "00100000", 82 => "00000000", 83 => "11110001", 84 => "00000101", 
    85 => "00010011", 86 => "00000101", 87 => "00011001", 88 => "11111101", 
    89 => "00000000", 90 => "11111110", 91 => "11100000", 92 => "11111010", 
    93 => "00100110", 94 => "01010100", 95 => "00100000", 96 => "01001101", 
    97 => "00100010", 98 => "00000000", 99 => "00100010", 100 => "11101010", 
    101 => "00001011", 102 => "00001110", 103 => "00000011", 104 => "11110100", 
    105 => "11110110", 106 => "00100110", 107 => "11101010", 108 => "00010001", 
    109 => "00100110", 110 => "00000011", 111 => "11101101", 112 => "11010000", 
    113 => "00010101", 114 => "11110000", 115 => "11001101", 116 => "00000111", 
    117 => "11110100", 118 => "00001001", 119 => "11101001" );

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

entity fc1_fc1_layer_bias_V is
    generic (
        DataWidth : INTEGER := 8;
        AddressRange : INTEGER := 120;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of fc1_fc1_layer_bias_V is
    component fc1_fc1_layer_bias_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    fc1_fc1_layer_bias_V_rom_U :  component fc1_fc1_layer_bias_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


