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


void lenet_hls(hls::stream<float24_t> &image_in, hls::stream<float24_t> &fc3_out) {
#pragma HLS DATA_PACK variable=fc3_out

#pragma HLS DATAFLOW

	hls::stream<float24_t> conv1_out("conv1_out");
	hls::stream<float24_t> pool1_out("pool1_out");

	hls::stream<float24_t> conv2_out("conv2_out");
	hls::stream<float24_t> pool2_out("pool2_out");

	hls::stream<float24_t> fc1_out("fc1_out");
	hls::stream<float24_t> fc2_out("fc2_out");


	conv1(conv1_out, image_in, conv1_layer_weights, conv1_layer_bias);
	pool1(pool1_out, conv1_out);
	conv2(conv2_out, pool1_out, conv2_layer_weights, conv2_layer_bias);
	pool2(pool2_out, conv2_out);
	fc1(fc1_out, pool2_out, fc1_layer_weights, fc1_layer_bias);
	fc2(fc2_out, fc1_out, fc2_layer_weights, fc2_layer_bias);
	fc3(fc3_out, fc2_out, fc3_layer_weights, fc3_layer_bias);


}

/*
void lenet_hls(hls::stream<float> &image_in, hls::stream<float> &fc3_out) {
#pragma HLS DATA_PACK variable=fc3_out

#pragma HLS DATAFLOW


	hls::stream<float> conv1_out("conv1_out");
	hls::stream<float> pool1_out("pool1_out");

	hls::stream<float> conv2_out("conv2_out");
	hls::stream<float> pool2_out("pool2_out");

	hls::stream<float> fc1_out("fc1_out");
	hls::stream<float> fc2_out("fc2_out");



	conv1(conv1_out, image_in, conv1_layer_weights, conv1_layer_bias);
	pool1(pool1_out, conv1_out);
	conv2(conv2_out, pool1_out, conv2_layer_weights, conv2_layer_bias);
	pool2(pool2_out, conv2_out);
	fc1(fc1_out, pool2_out, fc1_layer_weights, fc1_layer_bias);
	fc2(fc2_out, fc1_out, fc2_layer_weights, fc2_layer_bias);
	fc3(fc3_out, fc2_out, fc3_layer_weights, fc3_layer_bias);


}
*/
