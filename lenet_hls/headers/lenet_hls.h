/*
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
*/

#ifndef LENET_HLS_H
#define LENET_HLS_H

#include <stdio.h>
using namespace std;

#include "defines.h"
#include "conv_layers.h"
#include "pool_layers.h"
#include "full_connected.h"


#include "weights_conv1layer.h"
#include "weights_conv2layer.h"

#include "weights_fc1.h"
#include "weights_fc2.h"
#include "weights_fc3.h"

void lenet_hls(hls::stream<float24_t> &image_in, hls::stream<float24_t> &fc3_out);
//void lenet_hls(hls::stream<float> &image_in, hls::stream<float> &fc3_out);

#endif
