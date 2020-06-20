# This script segment is generated automatically by AutoPilot

set id 18
set name lenet_hls_mac_muladd_11s_16s_27ns_27_1_1
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 11
set in0_signed 1
set in1_width 16
set in1_signed 1
set in2_width 27
set in2_signed 0
set out_width 27
set exp i0*i1+i2
set arg_lists {i0 {11 1 +} i1 {16 1 +} m {27 1 +} i2 {27 0 +} p {27 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 20
set hasByteEnable 0
set MemName conv2_conv2_layer_bias_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 16
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "01100110" "00101100" "00111100" "11110100" "11101100" "00100100" "00001100" "00100110" "01011100" "11010110" "01000010" "00011000" "01110010" "00100100" "11011100" "11111010" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 21
set hasByteEnable 0
set MemName conv2_conv2_layer_weights_s
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 11
set AddrRange 512
set AddrWd 9
set TrueReset 0
set IsROM 1
set ROMData { "01110100010" "11111010101" "11111010101" "00011110101" "10011110101" "11101111010" "00110010100" "11100001011" "01111111111" "00011010110" "11011010101" "01010011101" "11111000111" "01111111111" "01010111111" "00101111001" "01001010110" "00010101010" "11011111011" "10000111000" "10010110001" "00101000011" "11010001111" "01001001110" "01111111111" "11001100100" "11110110100" "11111111110" "10111001100" "10000000000" "11100011110" "10111110000" "11011010101" "00111000101" "01100001000" "01111111111" "10001011110" "10110101011" "00100101101" "10110010001" "00001011100" "00010010100" "00011010011" "01010101001" "00100001110" "10100011001" "11111010100" "00001101001" "11110100100" "00111001110" "00100000100" "10101000110" "10111100110" "10011101010" "11101011110" "10111111100" "11110110110" "01010000010" "11010000011" "00000000110" "00011101110" "10110011111" "00010011000" "00011101110" "11011110010" "11111001010" "11010100110" "00001010111" "11101100100" "10111100011" "00000111000" "11011001011" "10100100100" "10101000100" "01110011000" "10000101100" "00000011111" "11001011011" "10101001001" "00110100100" "00001111111" "00111000101" "11110010000" "00010110100" "01100011000" "00100110001" "11010010001" "00010111001" "10110101011" "10000000000" "01110000010" "00000000111" "00000011111" "01001010111" "00001001101" "11001110100" "11111000010" "11111010111" "11111111100" "01100101110" "11111110010" "11010110110" "00011111000" "00010001111" "11100110101" "00000101111" "00110001000" "11110111000" "11110010011" "01110101111" "11110101101" "11010001100" "11100101100" "11100111101" "10000001001" "10110011010" "00001100010" "00111101111" "00101100101" "00000111111" "01111010101" "00111010011" "01110000111" "00100010110" "00011001111" "10111100110" "10010001010" "00111111000" "00010011010" "11010011000" "00011111111" "10001110001" "01011101010" "10111010111" "10111000110" "00101101000" "10011000010" "00010011010" "11100110100" "00010110001" "11010101000" "01111101010" "00010000001" "11111111100" "01000010000" "10110100100" "00111101010" "00000011111" "01111111111" "01000110111" "00001000011" "10000110111" "00101000111" "11001010000" "00100001001" "01100000010" "00001010111" "00011110011" "11111001011" "11011111111" "11010111000" "11011000111" "01000011101" "01001100101" "10111111011" "00010111000" "11001111100" "11111010111" "11101101010" "01110011011" "11010110001" "11100100101" "01100100001" "10000001101" "11000000100" "00000100101" "00011000011" "10110000110" "10011001100" "01101001011" "00101100001" "00010000011" "00011110100" "00111101100" "01001111101" "10111111000" "10111010111" "00010010111" "11100000000" "00111110001" "10000000000" "10110100100" "01011010110" "00101010101" "00011101110" "10100011000" "11010101110" "01110000000" "11111010011" "11100010100" "00000100010" "00010000110" "01101001001" "01011001000" "01100100111" "00001011100" "11110100100" "01000010101" "00000100010" "10101010100" "00101010111" "00101010100" "00001110100" "11110100100" "11101001101" "10000000000" "01011001000" "01110000011" "11101111000" "11111000111" "11000011101" "01000011001" "10001111001" "00011101101" "11010111111" "01111100011" "01100001010" "10000000000" "11100111001" "00011001100" "00100001100" "10111111101" "10111111100" "01111111111" "11110011010" "10011111000" "00100001001" "01001110010" "11001110101" "10100101001" "01111101100" "01000101101" "00010010111" "11010100000" "11010101110" "11011100111" "00001001101" "11110011000" "10100101101" "00001010111" "00010110011" "00111100000" "11110010010" "00101000100" "01010100111" "01101011001" "01001010111" "01001010011" "11000101100" "00010100101" "00010110011" "11101010101" "10111010110" "01000110001" "00111011101" "11100100000" "10011101010" "01100101111" "00100101011" "01101110010" "11100111000" "11010001000" "00111111010" "11100111000" "10000001111" "10100100111" "01100000111" "11010001101" "11100111010" "11110100111" "01101010000" "11010000001" "11010111001" "10101010111" "00110010001" "01000010011" "10101010011" "01001001111" "11101110010" "10110100001" "01111111111" "11010011010" "00100010100" "01110111110" "01011111010" "10011110000" "00001100001" "11001010011" "11000101111" "01111100101" "00010001010" "01101010110" "00101101101" "11100001000" "00000011011" "01010101010" "11011000100" "00101101100" "11111010100" "11010001001" "11101011000" "00010000111" "10110110000" "11101101111" "00001010110" "11011111000" "01001100111" "10100000001" "00001011001" "01111010010" "11100010100" "00010100001" "10010101000" "11111101011" "11100010000" "00101101101" "01001000001" "00110001110" "00011011100" "01001100010" "11100111010" "10100001110" "10110100100" "01000110110" "00011010011" "11101111100" "10110101101" "00101100100" "01011011001" "00011110100" "00001110010" "01101001110" "00011111110" "10101101001" "00101010100" "11001110100" "00100110100" "11111111110" "00001000010" "01010010101" "11100000100" "00001010000" "00111110101" "00101000110" "10101011011" "00100101010" "11011101110" "11111101001" "10010110101" "10111011101" "11001100110" "00000100111" "00011110100" "10010010111" "11111110111" "00100011010" "10000000000" "11101111000" "00111110011" "10100011001" "11011111000" "00010000110" "00110000010" "00111000000" "01101111111" "01111000000" "11110000001" "00010111000" "01001110001" "11100110111" "11100010001" "01101101101" "10111010010" "01000011111" "11110001011" "00000111111" "00010101100" "00011001111" "00010101101" "11101111011" "10100110101" "11010010100" "00011000110" "00100111100" "11011101110" "00011000010" "00011101010" "11011100010" "11000000001" "01100111100" "10110101011" "11001110000" "11110110111" "01111010111" "11110011110" "11101010101" "00101110111" "01010001001" "10100010111" "10111101101" "11001010011" "10100000101" "11001001000" "10110111000" "10011000101" "00010111010" "11111001101" "00011101111" "11111001011" "11111100100" "00101101000" "11010001010" "00000100011" "10111110010" "00000000000" "11001010101" "01000101010" "00111000000" "00111010011" "11000001011" "11010111110" "00110011100" "00101100111" "11111000001" "11001111100" "00101010011" "11100001011" "11001011110" "00001110010" "11101110100" "10101110011" "11100011010" "00011001100" "00111011101" "00011000010" "11100100011" "11000010011" "01111011111" "11001100110" "01110000001" "00001111010" "11011011111" "11010100001" "00101010000" "00000100100" "11101111101" "01111010010" "00010101100" "11011100110" "01011010010" "00011101111" "11110011101" "01000010100" "10010101000" "01000110100" "00101010110" "01111111111" "01001100110" "11000101011" "10110001000" "01111111111" "11011011111" "11100101011" "00101010111" "00010111110" "00101100101" "10111010000" "11000000000" "01000011011" "11101111101" "01001010011" "01011001011" "11111000001" "11111001011" "00000000011" "01011100011" "11101101111" "00001111110" "01010010100" "10000000000" "00100000011" "01000100010" "00011011000" "00100011100" "11011100001" "01101001010" "00001111111" "10110100000" "11101000100" "10000011110" "11000111101" "00011011010" "10111000011" "01000111110" "00011010010" "00000010010" "00100011110" "00001110001" "11011001100" "10000000000" "00010001111" "00000101011" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 22
set hasByteEnable 0
set MemName conv2_conv_buff_V
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 16
set AddrRange 1568
set AddrWd 11
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.254
set ClkPeriod 10
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName RAM
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_RAM] == "::AESL_LIB_VIRTEX::xil_gen_RAM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_RAM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 2 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    style ${impl_style} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_RAM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 23 \
    name conv2_out_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_conv2_out_V_V \
    op interface \
    ports { conv2_out_V_V_din { O 16 vector } conv2_out_V_V_full_n { I 1 bit } conv2_out_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 24 \
    name in_V_V \
    type fifo \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_in_V_V \
    op interface \
    ports { in_V_V_dout { I 16 vector } in_V_V_empty_n { I 1 bit } in_V_V_read { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


