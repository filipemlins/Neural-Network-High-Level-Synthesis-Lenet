# -*- coding: utf-8 -*-
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


import pre_data


import os
import numpy as np


X_train,y_train,X_validation,y_validation,X_test,y_test = pre_data.pre_data()


num_images = 10000


filename = "test_img"
dir_name='../lenet_hls/ref/testdata/'
if not os.path.exists(dir_name):
    os.makedirs(dir_name)


for i in range(0, num_images):
    filename2 = filename + str(i)
    a_file = open(os.path.join(dir_name, filename2 + ".out"), "w")
    for row in X_test[i]:
        np.savetxt(a_file, row, '%1.23f')
    a_file.close()
   


dir_name='../lenet_hls/ref/'
a_file = open(os.path.join(dir_name, "filenames" + ".out"), "w")


dir_name2='../../../ref/testdata/'
for i in range(0, num_images):
    filename2 = filename + str(i)

    a_file.write( os.path.join(dir_name2, filename2 + ".out"))
    a_file.write("\n")
        
a_file.close()


filename = "test_result"
dir_name_results='../lenet_hls/ref/testresult/'
if not os.path.exists(dir_name_results):
    os.makedirs(dir_name_results)
   
a_file = open(os.path.join(dir_name_results, filename + ".out"), "w")

np.savetxt(a_file, y_test[0:num_images], '%d')
a_file.close()
 
 
