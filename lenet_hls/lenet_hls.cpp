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




#include "headers/lenet_hls.h"


void lenet_hls(hls::stream<float> &image_in, hls::stream<float> &fc3_out) {
#pragma HLS DATA_PACK variable=fc3_out

#pragma HLS DATAFLOW

	hls::stream<float> conv1_out("conv1_out");
	hls::stream<float> pool1_out("pool1_out");

	hls::stream<float> conv2_out("conv2_out");
	hls::stream<float> pool2_out("pool2_out");

	hls::stream<float> fc1_out("fc1_out");
	hls::stream<float> fc2_out("fc2_out");

	//32x32 filters 8 filter size  (4x4) channels 1
	// output_conv_layer 29x29x8 (IMG_SIZEXIMG_SIZEX#FILTERS) => [(W−K+2P)/S]+1 formula
	conv1(conv1_out, image_in, conv1_layer_weights, conv1_layer_bias);
	// output pool layer 14x14x8 kernel size is 2 P1 size is 14
	pool1(pool1_out, conv1_out);

	conv2(conv2_out, pool1_out, conv2_layer_weights, conv2_layer_bias);

	//16 filters 8 canais 2x2 filter size
	// output_conv_layer 13X13X16 (IMG_SIZEXIMG_SIZEX#FILTERS) =>  (14-2+0)/1 + 1 [(W−K+2P)/S]+1 formula
	pool2(pool2_out, conv2_out);
	//output pool layer 6x6x16  P2_size 6 #filters 16
	//576x120

	fc1(fc1_out, pool2_out, fc1_layer_weights, fc1_layer_bias);
	//120x84

	fc2(fc2_out, fc1_out, fc2_layer_weights, fc2_layer_bias);
	//84x10
	fc3(fc3_out, fc2_out, fc3_layer_weights, fc3_layer_bias);


}
