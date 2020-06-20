-- ==============================================================
-- File generated on Sat Jun 20 14:10:52 -03 2020
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
    0 => "11101100", 1 => "11101110", 2 => "00011000", 3 => "11010000", 
    4 => "00000110", 5 => "00100100", 6 => "00000000", 7 => "00101110", 
    8 => "00000010", 9 => "11111000", 10 => "11110010", 11 => "00110000", 
    12 => "00001100", 13 => "11101110", 14 => "11111110", 15 => "00000110", 
    16 => "11011100", 17 => "00010110", 18 => "00110110", 19 => "00000000", 
    20 => "00111010", 21 => "11111010", 22 => "00001110", 23 => "11110000", 
    24 => "00101110", 25 => "00000110", 26 => "00100100", 27 => "00011110", 
    28 => "00000000", 29 => "11111100", 30 => "00000000", 31 => "00010110", 
    32 => "00100100", 33 => "11101110", 34 => "00000010", 35 => "00001110", 
    36 => "00011000", 37 => "00101110", 38 => "00001010", 39 => "00100110", 
    40 => "00011000", 41 => "00100000", 42 => "11111100", 43 => "11111110", 
    44 => "00011110", 45 => "00101100", 46 => "00010100", 47 => "11110110", 
    48 => "00010100", 49 => "11110010", 50 => "11111110", 51 => "11101000", 
    52 => "00011000", 53 => "00000100", 54 => "00001110", 55 => "00010100", 
    56 => "00100000", 57 => "00000100", 58 => "00010010", 59 => "11100000", 
    60 => "00000010", 61 => "11110000", 62 => "00010100", 63 => "11101110", 
    64 => "00000110", 65 => "00101010", 66 => "11110110", 67 => "00101000", 
    68 => "01000110", 69 => "11111100", 70 => "11100110", 71 => "11111110", 
    72 => "00010110", 73 => "00100000", 74 => "11111000", 75 => "00000110", 
    76 => "00100000", 77 => "00000010", 78 => "00011100", 79 => "00100100", 
    80 => "11111110", 81 => "00001100", 82 => "11110000", 83 => "11111100", 
    84 => "00100110", 85 => "11110100", 86 => "11111110", 87 => "00010000", 
    88 => "00000100", 89 => "11111110", 90 => "00010000", 91 => "11110110", 
    92 => "00011000", 93 => "11111000", 94 => "11111110", 95 => "00000100", 
    96 => "00000010", 97 => "11111010", 98 => "00001100", 99 => "11111110", 
    100 => "00101000", 101 => "00010110", 102 => "11101110", 103 => "11110000", 
    104 => "00001110", 105 => "00011100", 106 => "11110110", 107 => "00100010", 
    108 => "00000010", 109 => "11111110", 110 => "00010010", 111 => "00100010", 
    112 => "00000110", 113 => "00100100", 114 => "11110110", 115 => "11110100", 
    116 => "00101010", 117 => "11011010", 118 => "11011000", 119 => "00101010" );

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


