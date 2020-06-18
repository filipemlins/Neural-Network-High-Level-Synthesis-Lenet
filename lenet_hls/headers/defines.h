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


#ifndef DEFINES_H
#define DEFINES_H

#include "ap_fixed.h"

#define EXP_WIDTH	16
#define INT_WIDTH	4

typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;


#define IMAGE_SIZE 			32
#define IMAGE_CHANNELS		1

#define CONV1_KERNEL_SIZE 	4
#define CONV1_CHANNELS 		1
#define CONV1_FILTERS 		8
#define CONV1_BIAS_SIZE 	8
#define CONV1_STRIDE 		1

#define A1_SIZE				29
#define A1_CHANNELS			8


#define P1_SIZE				14
#define P1_CHANNELS			8
#define P1_KERNEL_SIZE		2
#define P1_STRIDE			2


#define CONV2_KERNEL_SIZE 	2
#define CONV2_CHANNELS 		8
#define CONV2_FILTERS 		16
#define CONV2_BIAS_SIZE		16
#define CONV2_STRIDE 		1


#define A2_SIZE				13
#define A2_CHANNELS			16

#define P2_SIZE				6
#define P2_CHANNELS			16
#define P2_KERNEL_SIZE		2
#define P2_STRIDE			2

#define FLATTEN_SIZE		576

#define FC1_WEIGHTS_H		576
#define FC1_WEIGHTS_W		120
#define FC1_BIAS_SIZE		120
#define FC1_OUT_SIZE		120


#define FC2_WEIGHTS_H		120
#define FC2_WEIGHTS_W		84
#define FC2_BIAS_SIZE		84
#define FC2_OUT_SIZE		84


#define FC3_WEIGHTS_H		84
#define FC3_WEIGHTS_W		10
#define FC3_BIAS_SIZE		10

#define FC1_ACT_SIZE		120
#define FC2_ACT_SIZE		84
#define FC3_ACT_SIZE		10


#endif
