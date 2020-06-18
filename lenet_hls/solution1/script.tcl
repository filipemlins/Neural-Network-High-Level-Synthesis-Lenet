############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project lenet_hls
set_top lenet_hls
add_files lenet_hls/headers/weights_fc3.h
add_files lenet_hls/headers/weights_fc2.h
add_files lenet_hls/headers/weights_fc1.h
add_files lenet_hls/headers/weights_conv2layer.h
add_files lenet_hls/headers/weights_conv1layer.h
add_files lenet_hls/headers/pool_layers.h
add_files lenet_hls/pool_layers.cpp
add_files lenet_hls/headers/lenet_hls.h
add_files lenet_hls/lenet_hls.cpp
add_files lenet_hls/headers/full_connected.h
add_files lenet_hls/full_connected.cpp
add_files lenet_hls/headers/defines.h
add_files lenet_hls/headers/conv_layers.h
add_files lenet_hls/conv_layers.cpp
add_files lenet_hls/headers/activations.h
add_files lenet_hls/activations.cpp
add_files -tb lenet_hls/headers/lenet_hls_test.h -cflags "-Wno-unknown-pragmas"
add_files -tb lenet_hls/lenet_hls_test.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z007sclg225-1}
create_clock -period 10 -name default
config_compile -no_signed_zeros=0 -unsafe_math_optimizations=0
config_sdx -optimization_level none -target none
config_bind -effort medium
config_schedule -effort medium -relax_ii_for_timing=0
set_clock_uncertainty 12.5%
#source "./lenet_hls/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -flow impl -rtl vhdl -format ip_catalog
