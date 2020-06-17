# Neural Network High Level Synthesis Lenet

### Directory structure: ###
  This package contains the following directories:
   
   *   lenet_hls/   - directory containing the C++ source and testbench
   *   python/        - directory containing the python code used to train the neural network, generate weights, 
			and test data to be used in test bench in HLS. 

### Generate Vivado HLS project: ###

Each directory contains gen_proj.tcl that can be used to setup te Vivado HLS environment. 

To generate the project for the main implemention follow the steps bellow:
1) Clone the repo: git clone https://github.com/filipemlins/Neural-Network-High-Level-Synthesis-Lenet/
2) Go to nnet_stream directory: CNN-using-HLS/nnet_stream/
3) Create the project add the headers file in the lenet_hls/header folder, and lenet_hls.cpp. In the testbench add lenet_hls_test.cpp

### Software used: ###

OS: Ubuntu 16.04.03 LTS

Vivado HLS 2018.3 - Simulation results and Synthesis

Python libraries
   *   numpy
   *   keras 
   *   os
   *   pandas 
   *   matplotlib


	

