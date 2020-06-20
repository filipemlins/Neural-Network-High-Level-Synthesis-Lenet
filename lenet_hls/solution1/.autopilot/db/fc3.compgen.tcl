# This script segment is generated automatically by AutoPilot

set id 47
set name lenet_hls_fadd_32ns_32ns_32_5_full_dsp_1
set corename simcore_fadd
set op fadd
set stage_num 5
set max_latency -1
set registered_input 1
set impl_style full_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fadd] == "ap_gen_simcore_fadd"} {
eval "ap_gen_simcore_fadd { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fadd, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fadd
set corename FAddSub
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 48
set name lenet_hls_fdiv_32ns_32ns_32_16_1
set corename simcore_fdiv
set op fdiv
set stage_num 16
set max_latency -1
set registered_input 1
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fdiv] == "ap_gen_simcore_fdiv"} {
eval "ap_gen_simcore_fdiv { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fdiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fdiv
set corename FDiv
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 50
set name lenet_hls_fexp_32ns_32ns_32_9_full_dsp_1
set corename simcore_fexp
set op fexp
set stage_num 9
set max_latency -1
set registered_input 1
set impl_style full_dsp
set Futype4reduceCEFanout 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set ce_width 1
set ce_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fexp] == "ap_gen_simcore_fexp"} {
eval "ap_gen_simcore_fexp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fexp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fexp
set corename FExp
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en} || ${::AESL::PGuard_autocg_hpen})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    style ${impl_style} \
    Futype4reduceCEFanout ${Futype4reduceCEFanout} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 55
set hasByteEnable 0
set MemName fc3_fc3_layer_weights_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 11
set AddrRange 840
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "10110101010" "10011101101" "00111110000" "00111001010" "01001111001" "00000001111" "11010110111" "00010100110" "11101010100" "01000010100" "11001111100" "01001100110" "00001010001" "10111100011" "10111100000" "11110010000" "11010100011" "00011001000" "10111110000" "11001010000" "11111100011" "11010000001" "11110111101" "10111011011" "00100111111" "00001011011" "00010000010" "00011101110" "00110011010" "00010111001" "00010001010" "00010100001" "10100000000" "00101011100" "00101111110" "10110100001" "00110100010" "00011111100" "00011010001" "10101100111" "00010111011" "11010111111" "00100111100" "00011000010" "11001111001" "11011000011" "00001100010" "11110000110" "00111010100" "00001001101" "00100000110" "10011000110" "00100111011" "00010010111" "00110100101" "00000111100" "11000111100" "11000111100" "11100110001" "11011011111" "10011111100" "11111001110" "00001010100" "00110101000" "11111010010" "10111001000" "00110110001" "00011011111" "11011011011" "11101010001" "00000111100" "10110110110" "00011000001" "11001011010" "00101101110" "10011110001" "00101011001" "00100000110" "00010101100" "11100100010" "10010011111" "11111000111" "01011001000" "11111001101" "11000001000" "11100101000" "11110011001" "11100110010" "00110001010" "11010000001" "00101010000" "00001000011" "11110000010" "11011110010" "00101101111" "00011011011" "00011001011" "00100110010" "00111100001" "11101001100" "10011101110" "00010101010" "11100000100" "11101100001" "00001110110" "11011010001" "10110101101" "10111001110" "00100010111" "11100011001" "11001101101" "00101110100" "00100101110" "11000100100" "10111000000" "10110101011" "00011100110" "01000000100" "00011110100" "11110100110" "00100101001" "00010000010" "01000001001" "00100101101" "11101010010" "11001110100" "11101101000" "00110100001" "00110010100" "10110101111" "00111001001" "11001111000" "00010000011" "00100011100" "10011001110" "01000110101" "01000110110" "11101010100" "00101000110" "00001111000" "11000101101" "11010110101" "00010000000" "00000001010" "10100111111" "00100010101" "10110010000" "00001110110" "11110001100" "10110000111" "01001011011" "00101001001" "00000000100" "01000011011" "10111011010" "00110100011" "11110101001" "11001001110" "11111110111" "11001011011" "01011000000" "11100100110" "11100011011" "10101011110" "11010000100" "00000100000" "00011111010" "00001101011" "11010110111" "00100100001" "10111011100" "00001110111" "11011010100" "11000100100" "00110001010" "00001000101" "11110011100" "00110001100" "11000000010" "00010111001" "00100000100" "11001010101" "11101100111" "01001111011" "11010111100" "11010111111" "00111111011" "11111011001" "00101000010" "00111101110" "10100001101" "11110101111" "11000110101" "11111000000" "11101110001" "00100010011" "11000011000" "10111011110" "11101000011" "00010000001" "11010010101" "01000010110" "00001010110" "11000001011" "01001001001" "00110010101" "00101011101" "11111001010" "11101001110" "00011100011" "10111111001" "00110101110" "00011101011" "11011100011" "10011111111" "11001001001" "10111001100" "11001011110" "00110101010" "01100111100" "11100011101" "01000000100" "00000001000" "10111011011" "11011110110" "00001110110" "10111011001" "11111100011" "10101001110" "00111111101" "00101110111" "10101111001" "10011011010" "10110110001" "10101010010" "11011000001" "11111100100" "11011000111" "11010000001" "00100010000" "11111100111" "11011100000" "11101100100" "00011011010" "11111011000" "00000000110" "11001010101" "00000001001" "00011000100" "11111000000" "11100100010" "00000100100" "00000110100" "01000101100" "11001110111" "01000110010" "00010111011" "11100010111" "11100110011" "00001000100" "01010101011" "11101011001" "11011111001" "01000101111" "00110101100" "00000000001" "11100111001" "00101011000" "11100111110" "11101001111" "00011001001" "10110011011" "01001011110" "00110111011" "00011000101" "00010110110" "11111100111" "11110010100" "11101000000" "00101001100" "11111000000" "11110010000" "11100011011" "00000001011" "11110101111" "00101001001" "11110001101" "01001110101" "00111010101" "00101110110" "11111101111" "11101110100" "11011101011" "10111101001" "11111010111" "11001001010" "11000000111" "10110101000" "11111000010" "00111101101" "11001001001" "00111110111" "00101000000" "11011101111" "11101110001" "11100100100" "11110100000" "11011101011" "11001111111" "11010110010" "00011100110" "00001101011" "00001111011" "00010100110" "11001100001" "00011000001" "10110100011" "11010000000" "00011000101" "11011011101" "11101000010" "11000001100" "00011010011" "01010110101" "00100101110" "11111001100" "00011100100" "10101010101" "11011000100" "00011111011" "00010100101" "00101011110" "11100111100" "00111000011" "11010110100" "00000001100" "00101011000" "11101001100" "01010011101" "11101100101" "01001111000" "01001011011" "10111000111" "00010110000" "11110111111" "11111100110" "11010111010" "00011001010" "00101010100" "11110100010" "11010111010" "00100000110" "11111111100" "00011100000" "01000001010" "00010110000" "01001100001" "01010100000" "11110010101" "00101101110" "11011001001" "00100000010" "11000011100" "10110101100" "00111100001" "11001101111" "00111111110" "00010011111" "11100000001" "00101110010" "11101101011" "00100010101" "00100000000" "11001010001" "11001111101" "00000100101" "11100001000" "11010001001" "00000001101" "11000100111" "11011010110" "00110111000" "00100101111" "11100011001" "00011011101" "01011111101" "00011000111" "01001111101" "11010000110" "00001111111" "10011100111" "00001010000" "11011001010" "11011000000" "11110011010" "00111000101" "11100000111" "01001111011" "10001101111" "00011001011" "00000101010" "00111110000" "11011110011" "10111000011" "11000111000" "11101001100" "00000110010" "11011101101" "10111010100" "00100010111" "00101110111" "01010111100" "11101011001" "00110110101" "10011110011" "11000111001" "11100000010" "00100010010" "11000000010" "00011011011" "00101010011" "01001100001" "11110001100" "11110010011" "00101111010" "00010010101" "10111001110" "00111011001" "10110110010" "00001011110" "10110001010" "00001000001" "11001000010" "00101010110" "00010100001" "00111101000" "10011000101" "00011010101" "00111101010" "10100000000" "10101010001" "11111011011" "00100101000" "01010001010" "01001010011" "00001010010" "01010111011" "00100000100" "11011101000" "11000011000" "00100111100" "11010101101" "00011111111" "11010111010" "00010101100" "11111000111" "00111100001" "11011000011" "11011001100" "00010010111" "11100010001" "01000100100" "00011010110" "11100101100" "01000011101" "10100111000" "01001100100" "11110100011" "11011111110" "11110011111" "01011110101" "10011101001" "11101001100" "11101010011" "00011010011" "00101010011" "00011110001" "11100101110" "01001100100" "00100100100" "01001111110" "00011000100" "00010010110" "10110010101" "00011101110" "00101111010" "00001000010" "11001101101" "01010110111" "01010000010" "00010010111" "10111111100" "00100110100" "00100000010" "11000111101" "00110101011" "11001000001" "00101000111" "11010111001" "11011100110" "00000110010" "10111101110" "11111011110" "11101011001" "11101110111" "00110101111" "00101110001" "11001010111" "11111011011" "11010010001" "01001000001" "11010001001" "11110001101" "11010011111" "11001100011" "11011001010" "11101110100" "11100010011" "00011101010" "01000010010" "11101101000" "00001110101" "11111000000" "10111001011" "10111011111" "00001101011" "00101011000" "00000101100" "11110000100" "00110101000" "11001001000" "11111000010" "00000000000" "00110000101" "11101111110" "00100100000" "01011000110" "11000101110" "00010010010" "11111110111" "11101100001" "00011001011" "10111011101" "10111000100" "01000101010" "11000110001" "00100111000" "00011101001" "11101111011" "00001101000" "00010000101" "00111110100" "01100011100" "11101010010" "11100001001" "01000111111" "00011110110" "11000101010" "00001010011" "10110011011" "11000111000" "11011011110" "00010101001" "11111110110" "11010010011" "10100010111" "00000111000" "00110000000" "00100010101" "00110100100" "10100110011" "00101010010" "01001111111" "11111011011" "11110011010" "10110111011" "00001111000" "11101111111" "00111000011" "00110111001" "11011110111" "11000100110" "11111001011" "10100110110" "00110010010" "00011100101" "00100010100" "01001011001" "00001011011" "00011010100" "11000010111" "11010111000" "10101100111" "10110101100" "00010010100" "00110011010" "00100101011" "11000110111" "11101011100" "00011011101" "00011110101" "00000100000" "11011011001" "11011000111" "00010001111" "00010110010" "00010010111" "00001000111" "11100001000" "00001111000" "01000001001" "11100011011" "10100010100" "11011101111" "11011101101" "00000011000" "00100011100" "11100011010" "11001000101" "10111111110" "11000010011" "11110110100" "00101011010" "01010010101" "00100000110" "11011101011" "11110100000" "11010101011" "01000001000" "00000010100" "00011010000" "11011011000" "00001110010" "11111010011" "11110010010" "00001100110" "01011101000" "11101100111" "11010101000" "11011010101" "11100100010" "00011101100" "00111010011" "00110111010" "11110111100" "11101101000" "11100100011" "00100001101" "11100011100" "00100001110" "01100100110" "01000011100" "10110100110" "00111100100" "10111100101" "01000001111" "10101101110" "11001101000" "10110010011" "00011010100" "11000010101" "00010101110" "00011101011" "00100001110" "11110000011" "11000001101" "11010010101" "00110001011" "11101110011" "11011000011" "00110110001" "11111010000" "00101000110" "11100011001" "00000110001" "11101000101" "11111111110" "10100110010" "11111100001" "11011101000" "00001101111" "11011000001" "11110111011" "11010001100" "11100100001" "00001110100" "11001010110" "11110100110" "11011010001" "11111011001" "11111011101" "10101110110" "00001100101" "11010110111" "11100001101" "00010000111" "11100000000" "00000110100" "00100001010" "00101000110" "00110000011" "11011100110" "10111011000" "00011000101" "00110001111" "11110010011" "11000101100" "10110110000" "00011100100" "00011111010" "10101000110" "00100000101" "01010011010" "00100010100" "11101000010" "11011110011" "11010110000" "00110110001" "11010000000" "11100100001" "11100101010" "00001000110" "00101011111" "11100110100" "11111000101" "00110101000" "10101111010" "11101001010" "00010111110" "11010110011" "11111101110" "11100001011" "01011010000" "00001111000" "11001011001" "10110001011" "00100001000" "11101100010" "11011111111" "11000001010" "11100011001" "01001000111" "10101010010" "10111010000" "00001010111" "11001001100" "10011111101" "10100111001" "00111000110" "11011010100" "11010110011" "01010001110" "11111100010" "11111110100" "00001011111" "01011110101" "11010001101" "11110000111" "00011001100" "11011110101" "11100001110" "01001101111" "11111011010" "10110100011" "11011001111" "11000110011" "11100010001" "00001000000" "11101001000" "01000100100" "00000000000" "00011111001" "11010110010" "10110101011" "01000000011" "11010000011" "11010110110" "00110010010" "00001101000" "00110000011" "00000000101" "11111011110" "11100100010" "10101101101" "00011100101" "00100010001" "11110011101" "11011110111" "10011100101" "11110010111" "11010101101" "11001011111" "01010100101" "11100100011" "00000000001" "00000001111" "10011001100" "11100110101" "11000111101" "00011111110" "00011010010" "10110100011" "11010010110" "00100010101" "11110010011" "01011011100" "11111110100" "01100001111" "11110111110" "00000110011" "10110110000" "10010100011" "00011011011" "11000110101" "00111111001" "00000001000" "00011001110" "11100001100" "10111100100" "00011001010" "10111111111" "11110001110" "00010011111" "01011001000" "11101110010" "01100100000" "11100011000" "00111000010" "00100100100" "11100001100" "10100000110" "11010111110" "11111110001" "01010110110" "11100001011" "00001110000" "01000110011" "11010100110" "00101110001" "11001101101" }
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
set ID 56
set hasByteEnable 0
set MemName fc3_fc3_layer_bias_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 8
set AddrRange 10
set AddrWd 4
set TrueReset 0
set IsROM 1
set ROMData { "01001000" "11011110" "11011000" "00011000" "01001100" "11000110" "11010100" "11111010" "00001100" "00100110" }
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
set ID 57
set hasByteEnable 0
set MemName fc3_output_V
set CoreName ap_simcore_mem
set PortList { 2 3 }
set DataWd 16
set AddrRange 10
set AddrWd 4
set impl_style block
set TrueReset 0
set HasInitializer 0
set IsROM 0
set ROMData {}
set NumOfStage 2
set MaxLatency -1
set DelayBudget 2.322
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
    id 58 \
    name out_V_V \
    type fifo \
    dir O \
    reset_level 1 \
    sync_rst true \
    corename dc_out_V_V \
    op interface \
    ports { out_V_V_din { O 16 vector } out_V_V_full_n { I 1 bit } out_V_V_write { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 59 \
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
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
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


