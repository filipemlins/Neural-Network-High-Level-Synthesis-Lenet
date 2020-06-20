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

entity fc2_fc2_layer_bias_V_rom is 
    generic(
             DWIDTH     : integer := 8; 
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
    0 => "11111110", 1 => "00100000", 2 => "00000110", 3 => "00110010", 
    4 => "00010100", 5 => "11110100", 6 => "00001010", 7 => "11111010", 
    8 => "00100000", 9 => "11111000", 10 => "01000010", 11 => "01000100", 
    12 => "00001000", 13 => "11110000", 14 => "00000100", 15 => "00100110", 
    16 => "00010000", 17 => "00001010", 18 => "00100010", 19 => "00001010", 
    20 => "00010000", 21 to 22=> "00000110", 23 => "00110100", 24 to 25=> "11011000", 
    26 => "00000110", 27 => "11110110", 28 => "11010110", 29 => "11111000", 
    30 => "11111010", 31 => "00010010", 32 => "00100010", 33 => "00101000", 
    34 to 35=> "00100010", 36 => "00010000", 37 => "11110000", 38 => "00010100", 
    39 => "00111000", 40 => "01001010", 41 => "00110110", 42 => "00101100", 
    43 => "11110100", 44 => "11101110", 45 => "11110010", 46 => "00011100", 
    47 => "11101000", 48 => "00000000", 49 => "00011000", 50 => "11101100", 
    51 => "11101110", 52 => "00010110", 53 => "11111010", 54 => "00011100", 
    55 => "00111110", 56 => "00011110", 57 => "00001100", 58 => "00100110", 
    59 => "11111100", 60 => "11111010", 61 => "00010010", 62 => "11101010", 
    63 => "01000110", 64 => "00010010", 65 => "00101010", 66 => "00000110", 
    67 => "11101110", 68 => "11110000", 69 => "11100000", 70 => "00000100", 
    71 => "00001000", 72 => "11110110", 73 => "00011000", 74 => "11111010", 
    75 => "11110010", 76 => "00101100", 77 => "00011000", 78 => "01001100", 
    79 => "11110010", 80 => "00001100", 81 => "01001100", 82 => "00010100", 
    83 => "00001000" );

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
        DataWidth : INTEGER := 8;
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


