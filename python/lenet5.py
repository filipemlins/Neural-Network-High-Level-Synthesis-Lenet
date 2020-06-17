'''
<Lenet Neural Network High Level Synthesis Lenet>

MIT License

Copyright (c) 2020 Filipe Maciel Lins

Permission is hereby granted, free of charge, to any person obtaining a copy of this software
and associated documentation files (the "Software"), to deal in the Software without restriction,
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
subject to the following conditions: The above copyright notice and this permission notice shall be
included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,FITNESS FOR A PARTICULAR PURPOSE AND
NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
'''


import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
import os

from keras.models import Sequential
from keras.layers import Conv2D
from keras.layers import MaxPooling2D
from keras.layers import Flatten
from keras.layers import Dense
from keras.models import load_model
from keras.callbacks import CSVLogger

from keras.utils.np_utils import to_categorical



##pre processing
train = pd.read_csv('train.csv')
test = pd.read_csv('test.csv')

Y_train = train[['label']]
X_train = train.drop(train.columns[[0]], axis=1)
X_test = test


X_train = np.array(X_train)
X_test = np.array(X_test)

#Reshape the training and test set
X_train = X_train.reshape(X_train.shape[0], 28, 28, 1)/255
X_test = X_test.reshape(X_test.shape[0], 28, 28, 1)/255

#Padding the images by 2 pixels since in the paper input images were 32x32
X_train = np.pad(X_train, ((0,0),(2,2),(2,2),(0,0)), 'constant')
X_test = np.pad(X_test, ((0,0),(2,2),(2,2),(0,0)), 'constant')

#Standardization
mean_px = X_train.mean().astype(np.float32)
std_px = X_train.std().astype(np.float32)
X_train = (X_train - mean_px)/(std_px)

#One-hot encoding the labels
Y_train = to_categorical(Y_train)

if (os.path.exists('model2.h5')):
    model = load_model('model2.h5')    
    # summarize model.
    model.summary()
    log_data = pd.read_csv('training.log', sep=',', engine='python')
    # summarize history for accuracy
    plt.plot(log_data['accuracy'])
    plt.title('model accuracy')
    plt.ylabel('accuracy')
    plt.xlabel('epoch')
    plt.legend(['train', 'test'], loc='upper left')
    plt.show()
    # summarize history for loss
    plt.plot(log_data['loss'])
    plt.title('model loss')
    plt.ylabel('loss')
    plt.xlabel('epoch')
    plt.legend(['train', 'test'], loc='upper left')
    plt.show()
    
    
else:
    model = Sequential()
    #Layer 1
    #Conv Layer 1
    model.add(Conv2D(filters = 8, 
                     kernel_size = 4, 
                     strides = 1, 
                     activation = 'relu', 
                     input_shape = (32,32,1)))
    #Pooling layer 1
    model.add(MaxPooling2D(pool_size = 2, strides = 2))
    #Layer 2
    #Conv Layer 2
    model.add(Conv2D(filters = 16, 
                     kernel_size = 2,
                     strides = 1,
                     activation = 'relu',
                     input_shape = (14,14,8)))
    #Pooling Layer 2
    model.add(MaxPooling2D(pool_size = 2, strides = 2))
    #Flatten
    model.add(Flatten())

    #Layer 4
    #Fully connected layer 2
    model.add(Dense(units = 120, activation = 'relu'))
    #Layer 5
    #Fully connected layer 3
    model.add(Dense(units = 84, activation = 'relu'))
    #Layer 6
    #Output Layer
    model.add(Dense(units = 10, activation = 'softmax'))
    
    
    history = model.compile(optimizer = 'SGD',
                  loss = 'categorical_crossentropy',
                  metrics = ['accuracy'])
    model.summary()
    
    csv_logger = CSVLogger('training.log', separator=',', append=False)
    history = model.fit(X_train,
                        Y_train,
                        batch_size = 64,
                        epochs = 10,
                        callbacks=[csv_logger])
    
    model.save("model2.h5")
    print(history.history.keys())
    # summarize history for accuracy
    plt.plot(history.history['accuracy'])
    plt.title('model accuracy')
    plt.ylabel('accuracy')
    plt.xlabel('epoch')
    plt.legend(['train', 'test'], loc='upper left')
    plt.show()
    # summarize history for loss
    plt.plot(history.history['loss'])
    plt.title('model loss')
    plt.ylabel('loss')
    plt.xlabel('epoch')
    plt.legend(['train', 'test'], loc='upper left')
    plt.show()
    
    
    


y_pred = model.predict(X_test)

#Converting one hot vectors to labels
labels = np.argmax(y_pred, axis = 1)

index = np.arange(1, 28001)

labels = labels.reshape([len(labels),1])
index = index.reshape([len(index), 1])

final = np.concatenate([index, labels], axis = 1)

#Prediction csv file
#np.savetxt("mnist_1.csv", final, delimiter = " ", fmt = '%s')


#get weights pular camadas que nao tem pesos treinaveis
conv1_layer_weights = model.layers[0].get_weights()[0]
conv1_layer_biases  = model.layers[0].get_weights()[1]

conv2_layer_weights = model.layers[2].get_weights()[0]
conv2_layer_biases  = model.layers[2].get_weights()[1]

fc1_layer_weights = model.layers[5].get_weights()[0]
fc1_layer_biases  = model.layers[5].get_weights()[1]

fc2_layer_weights = model.layers[6].get_weights()[0]
fc2_layer_biases  = model.layers[6].get_weights()[1]

fc3_layer_weights = model.layers[7].get_weights()[0]
fc3_layer_biases  = model.layers[7].get_weights()[1]


var_type = "float "

filename2 = "tmp"
#WEIGHTS DIR IN THE PROJECT
dir_name='../lenet_hls/headers/'

a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")

a_file.write("#ifndef EXP_WIDTH\n")
a_file.write("#include \"ap_fixed.h\" \n")
a_file.write("#include \"defines.h\" \n")
a_file.write("typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;\n")
a_file.write("#endif\n\n")



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
    
infile.close()
outfile.close()


a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")

a_file.write("#ifndef EXP_WIDTH\n")
a_file.write("#include \"ap_fixed.h\" \n")
a_file.write("#include \"defines.h\" \n")
a_file.write("typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;\n")
a_file.write("#endif\n\n")


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
    
infile.close()
outfile.close()
    


a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")

a_file.write("#ifndef EXP_WIDTH\n")
a_file.write("#include \"ap_fixed.h\" \n")
a_file.write("#include \"defines.h\" \n")
a_file.write("typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;\n")
a_file.write("#endif\n\n")


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
    
infile.close()
outfile.close()
    




a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")

a_file.write("#ifndef EXP_WIDTH\n")
a_file.write("#include \"ap_fixed.h\" \n")
a_file.write("#include \"defines.h\" \n")
a_file.write("typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;\n")
a_file.write("#endif\n\n")


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
    
infile.close()
outfile.close()
    


a_file = open(os.path.join(dir_name, filename2 + ".h"), "w")

a_file.write("#ifndef EXP_WIDTH\n")
a_file.write("#include \"ap_fixed.h\" \n")
a_file.write("#include \"defines.h\" \n")
a_file.write("typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;\n")
a_file.write("#endif\n\n")


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
    
infile.close()
outfile.close()

os.remove(os.path.join(dir_name, filename2 + ".h"))
   

filename2 = "X_test0"
#OUTPUT TEST INTERMEDIATE LAYERS
dir_name='../lenet_hls/ref/'

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in X_test[0].reshape(32,32):
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()





from keras import backend as K

input1 = model.input               # input placeholder

output1 = [layer.output for layer in model.layers]# all layer outputs

fun = K.function([input1, K.learning_phase()],output1)# evaluation function

# Testing
t = X_test[0].reshape(1,32,32,1)
layer_outputs = fun([t, 0])
#print(layer_outputs) # printing the outputs of layers


filename2 = "X_test0_conv1_output"

conv1_output = np.transpose(layer_outputs[0],[0,3,1,2]).reshape(8, 29*29)

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in conv1_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()

filename2 = "X_test0_pool1_output"



pool1_output = np.transpose(layer_outputs[1],[0,3,1,2]).reshape(8, 14*14)

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in pool1_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()

 
filename2 = "X_test0_conv2_output"



conv2_output = np.transpose(layer_outputs[2],[0,3,1,2]).reshape(16, 13*13)

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in conv2_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()


filename2 = "X_test0_pool2_output"


pool2_output = np.transpose(layer_outputs[3],[0,3,1,2]).reshape(16, 6*6)

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in pool2_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()

filename2 = "X_test0_flatten_output"


flatten_output = layer_outputs[4]

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in flatten_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()

filename2 = "X_test0_fc1_output"

fc1_output = layer_outputs[5]

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in fc1_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()


filename2 = "X_test0_fc2_output"

fc2_output = layer_outputs[6]

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in fc2_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()

filename2 = "X_test0_fc3_output"

fc3_output = layer_outputs[7] 

a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
for row in fc3_output:
    np.savetxt(a_file, row, '%1.23f', delimiter='\n')
a_file.close()
