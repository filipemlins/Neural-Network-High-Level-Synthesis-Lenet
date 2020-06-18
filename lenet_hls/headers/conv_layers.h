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

#ifndef CONV_LAYERS_H
#define CONV_LAYERS_H


#include "defines.h"
#include "activations.h"

#include <hls_video.h>
#include "ap_fixed.h"
#include <stdio.h>
using namespace std;



#define CONV1_BUFFER_SIZE (IMAGE_SIZE*IMAGE_SIZE*CONV1_CHANNELS)

#define CONV2_BUFFER_SIZE (P1_SIZE*P1_SIZE*CONV2_CHANNELS)

/*
void conv1(hls::stream<float> &conv1_out, hls::stream<float> &in,
		float weight[CONV1_FILTERS][CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS],
		float bias[CONV1_BIAS_SIZE]);

void conv2(hls::stream<float> &conv2_out, hls::stream<float> &in,
		float weight[CONV2_FILTERS][CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS],
		float bias[CONV2_BIAS_SIZE]);

*/

void conv1(hls::stream<float24_t> &conv1_out, hls::stream<float24_t> &in,
		float24_t weight[CONV1_FILTERS][CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS],
		float24_t bias[CONV1_BIAS_SIZE]);

void conv2(hls::stream<float24_t> &conv2_out, hls::stream<float24_t> &in,
		float24_t weight[CONV2_FILTERS][CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS],
		float24_t bias[CONV2_BIAS_SIZE]);



#endif
