# ==============================================================
# File generated on Wed Jun 17 16:36:43 -03 2020
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:36:41 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../lenet_hls_test.cpp -cflags { -Wno-unknown-pragmas}
add_files lenet_hls/headers/weights_fc3.h
add_files lenet_hls/headers/weights_fc2.h
add_files lenet_hls/headers/weights_fc1.h
add_files lenet_hls/headers/weights_conv2layer.h
add_files lenet_hls/headers/weights_conv1layer.h
add_files lenet_hls/lenet_hls.cpp
add_files lenet_hls/headers/defines.h
add_files lenet_hls/headers/activations.h
set_part xa7a12tcsg325-1q
create_clock -name default -period 10
