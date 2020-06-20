#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Jun 20 12:34:31 2020

@author: filipe
"""
import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import os


def save_weight_lenet(all_weights):
    
    
    #get weights pular camadas que nao tem pesos treinaveis
    conv1_layer_weights = all_weights[0]
    conv1_layer_biases  = all_weights[1]
    
    conv2_layer_weights = all_weights[2]
    conv2_layer_biases  = all_weights[3]
    
    fc1_layer_weights = all_weights[4]
    fc1_layer_biases  = all_weights[5]
    
    fc2_layer_weights = all_weights[6]
    fc2_layer_biases  = all_weights[7]
    
    fc3_layer_weights = all_weights[8]
    fc3_layer_biases  = all_weights[9]

    
    var_type = "float24_t "
    
    filename2 = "tmp"
    #WEIGHTS DIR IN THE PROJECT
    dir_name='../lenet_hls/headers/'
    
    a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")
    lic_file = open("license.txt")
    for line in lic_file:
            a_file.write(line) 
    lic_file.close()
    
    a_file.write("#ifndef WEIGHTS_CONV1_H\n")
    a_file.write("#define WEIGHTS_CONV1_H\n")
    
    a_file.write("#include \"ap_fixed.h\" \n")
    a_file.write("#include \"defines.h\" \n")
    
    
    
    
    a_file.write(var_type + "conv1_layer_bias[8] = {")
    np.savetxt(a_file, conv1_layer_biases.reshape(1,8), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    a_file.write(var_type + "conv1_layer_weights[8][4][4][1] = {")
    np.savetxt(a_file, np.transpose(conv1_layer_weights, [3,0,1,2]).reshape(1,128), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    
    a_file.close()
    
    
    filename1 = "weights_conv1layer"
    
    with open(os.path.join(dir_name, filename2 + ".h"), "r")as infile, \
         open(os.path.join(dir_name, filename1 + ".h"), "w") as outfile:
        data = infile.read()
        data = data.replace(",\n}", "}")
        outfile.write(data)
        outfile.write("#endif\n\n")
        
    
    
    
    a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")
    
    lic_file = open("license.txt")
    for line in lic_file:
            a_file.write(line) 
    lic_file.close()
    
    a_file.write("#ifndef WEIGHTS_CONV2_H\n")
    a_file.write("#define WEIGHTS_CONV2_H\n")
    
    
    a_file.write("#include \"ap_fixed.h\" \n")
    a_file.write("#include \"defines.h\" \n")
    
    
    
    a_file.write(var_type + "conv2_layer_bias[16] = {")
    np.savetxt(a_file, conv2_layer_biases.reshape(1,16), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    a_file.write(var_type + "conv2_layer_weights[16][2][2][8] = {")
    
    np.savetxt(a_file, np.transpose(conv2_layer_weights, [3,0,1,2]).reshape(1, 2*2*8*16), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    filename1 = "weights_conv2layer"
    
    a_file.close()
    
    filename1 = "weights_conv2layer"
    
    with open(os.path.join(dir_name, filename2 + ".h"), "r")as infile, \
         open(os.path.join(dir_name, filename1 + ".h"), "w") as outfile:
        data = infile.read()
        data = data.replace(",\n}", "}")
        outfile.write(data)
        outfile.write("#endif\n\n")
        
    
    
    a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")
    
    lic_file = open("license.txt")
    for line in lic_file:
            a_file.write(line) 
    lic_file.close()
    
    a_file.write("#ifndef WEIGHTS_FC1_H\n")
    a_file.write("#define WEIGHTS_FC1_H\n")
    
    a_file.write("#include \"ap_fixed.h\" \n")
    a_file.write("#include \"defines.h\" \n")
    
    
    
    a_file.write(var_type + "fc1_layer_bias[120] = {")
    np.savetxt(a_file, fc1_layer_biases.reshape(1,120), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    a_file.write(var_type + "fc1_layer_weights[576][120] = {")
    
    np.savetxt(a_file, fc1_layer_weights.reshape(576, 120), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    a_file.close()
    
    
    filename1 = "weights_fc1"
    
    with open(os.path.join(dir_name, filename2 + ".h"), "r")as infile, \
         open(os.path.join(dir_name, filename1 + ".h"), "w") as outfile:
        data = infile.read()
        data = data.replace(",\n}", "}")
        outfile.write(data)
        outfile.write("#endif\n\n")    
        
    
    
    
    
    a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")
    
    lic_file = open("license.txt")
    for line in lic_file:
            a_file.write(line) 
    lic_file.close()
    
    a_file.write("#ifndef WEIGHTS_FC2_H\n")
    a_file.write("#define WEIGHTS_FC2_H\n")
    
    
    a_file.write("#include \"ap_fixed.h\" \n")
    a_file.write("#include \"defines.h\" \n")
    
    
    
    a_file.write(var_type + "fc2_layer_bias[84] = {")
    np.savetxt(a_file, fc2_layer_biases.reshape(1,84), '%1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    a_file.write(var_type + "fc2_layer_weights[120][84] = {")
    
    np.savetxt(a_file, fc2_layer_weights.reshape(120, 84), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    a_file.close()
    
    filename1 = "weights_fc2"
    
    with open(os.path.join(dir_name, filename2 + ".h"), "r")as infile, \
         open(os.path.join(dir_name, filename1 + ".h"), "w") as outfile:
        data = infile.read()
        data = data.replace(",\n}", "}")
        outfile.write(data)
        outfile.write("#endif\n\n")    
    
        
    
    
    a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")
    
    lic_file = open("license.txt")
    for line in lic_file:
            a_file.write(line) 
    lic_file.close()
    
    a_file.write("#ifndef WEIGHTS_FC3_H\n")
    a_file.write("#define WEIGHTS_FC3_H\n")
    
    a_file.write("#include \"ap_fixed.h\" \n")
    a_file.write("#include \"defines.h\" \n")
    
    
    
    
    a_file.write(var_type + "fc3_layer_bias[10] = {")
    np.savetxt(a_file, fc3_layer_biases.reshape(1, 10), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    a_file.write(var_type + "fc3_layer_weights[84][10] = {")
    
    np.savetxt(a_file, fc3_layer_weights.reshape(84, 10), ' %1.23f,', delimiter=' ')
    a_file.write("};\n")
    
    
    a_file.close()
    
    filename1 = "weights_fc3"
    
    with open(os.path.join(dir_name, filename2 + ".h"), "r")as infile, \
         open(os.path.join(dir_name, filename1 + ".h"), "w") as outfile:
        data = infile.read()
        data = data.replace(",\n}", "}")
        outfile.write(data)
        outfile.write("#endif\n\n") 
        
    os.remove(os.path.join(dir_name, filename2 + ".h"))
       