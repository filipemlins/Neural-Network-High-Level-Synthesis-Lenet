#coding=utf-8
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

from tensorflow.examples.tutorials.mnist import input_data
import numpy as np

def pre_data():
    mnist = input_data.read_data_sets("dataset/MNIST/MNIST_data/", reshape=False)
    X_train, y_train           = mnist.train.images, mnist.train.labels
    X_validation, y_validation = mnist.validation.images, mnist.validation.labels
    X_test, y_test             = mnist.test.images, mnist.test.labels
    
    assert(len(X_train) == len(y_train))
    assert(len(X_validation) == len(y_validation))
    assert(len(X_test) == len(y_test))
    
    print("Image Shape: {}".format(X_train[0].shape))
    print("Training Set:   {} samples".format(len(X_train)))
    print("Validation Set: {} samples".format(len(X_validation)))
    print("Test Set:       {} samples".format(len(X_test)))
    
    # Pad images with 0s
    X_train      = np.pad(X_train, ((0,0),(2,2),(2,2),(0,0)), 'constant')
    X_validation = np.pad(X_validation, ((0,0),(2,2),(2,2),(0,0)), 'constant')
    X_test       = np.pad(X_test, ((0,0),(2,2),(2,2),(0,0)), 'constant')
    
    return X_train,y_train,X_validation,y_validation,X_test,y_test
