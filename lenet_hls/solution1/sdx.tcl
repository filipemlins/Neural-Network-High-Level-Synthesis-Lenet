# ==============================================================
# File generated on Sat Jun 20 14:10:54 -03 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../headers/lenet_hls_test.h -cflags { -Wno-unknown-pragmas}
add_files -tb ../lenet_hls_test.cpp -cflags { -Wno-unknown-pragmas}
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
set_part xc7z007sclg225-1
create_clock -name default -period 10
set_clock_uncertainty 12.5% default
config_compile -no_signed_zeros=0
config_compile -unsafe_math_optimizations=0
config_sdx -optimization_level=none
config_sdx -target=none
config_bind -effort=medium
config_schedule -effort=medium
config_schedule -relax_ii_for_timing=0
