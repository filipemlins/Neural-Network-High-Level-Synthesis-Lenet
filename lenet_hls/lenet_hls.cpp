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


#include "headers/weights_conv1layer.h"
#include "headers/weights_conv2layer.h"
#include "headers/weights_fc1.h"
#include "headers/weights_fc2.h"
#include "headers/weights_fc3.h"



#include "headers/defines.h"
#include "headers/activations.h"

#include <hls_video.h>

//#include <math.h>

#include "ap_fixed.h"



#include <stdio.h>
using namespace std;

//typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;

#define CONV1_BUFFER_SIZE (IMAGE_SIZE*IMAGE_SIZE*CONV1_CHANNELS)


void conv1(hls::stream<float> &conv1_out, hls::stream<float> &in,
		float weight[CONV1_FILTERS][CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS],
		float bias[CONV1_BIAS_SIZE]) {

	int i, j, k, filter;
	float sum = 0, placeholder;
	int row_offset, col_offset, channel_offset;
	hls::LineBuffer<CONV1_BUFFER_SIZE, 1, float> conv_buff;

	/*
	 * Read the initial buffer
	 * */

	conv_layer1_label181: for (k = 0; k < CONV1_BUFFER_SIZE; k++){
		in >> conv_buff.val[k][0];
		//	cout << conv_buff.val[k][0] << endl;
	}
	//cout << "CONV1 " << endl;

	for (filter = 0; filter < CONV1_FILTERS; filter++){
		conv_layer1_label9:
		for (i = 0; i < (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1); i += CONV1_STRIDE){
			conv_layer1_label2:
			for (j = 0; j < (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1); j += CONV1_STRIDE){
				conv_layer1_label6:
				for (row_offset = 0; row_offset < CONV1_KERNEL_SIZE; row_offset++){
					conv_layer1_label7:
					for (col_offset = 0; col_offset < CONV1_KERNEL_SIZE; col_offset++){
						conv_layer1_label8:
						for (channel_offset = 0; channel_offset < CONV1_CHANNELS; channel_offset++){
							int t1, t2;
							static float val1, val2;
							t1 = (i+row_offset)*IMAGE_SIZE + col_offset+j + channel_offset*P1_SIZE*P1_SIZE;
							val1 = conv_buff.getval(t1, 0);
							val2 = weight[filter][row_offset][col_offset][channel_offset];
							sum += val1*val2;
							//cout << t1 << endl;
							//cout << "sum: "<< val1 << " "<< val2 << " " << sum << endl;
						}
					}
				}

				conv1_out << relu(sum+ bias[filter]);
				//cout << relu(sum+ bias[filter]) << endl;
				sum = 0;
			}

			if ((j + CONV1_STRIDE < (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1))) {
				conv_layer1_label1:
				for (int p = 0; p < IMAGE_CHANNELS; p++){
					if (in.empty() == 0) {
						in >> placeholder;
						conv_buff.shift_up(0);
						conv_buff.insert_top(placeholder, 0);
					}
				}
			} else if ((i + CONV1_STRIDE < (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1))
					&& (j + CONV1_STRIDE >= (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1))){
				conv_layer1_label0:
				for (int p = 0; p < CONV1_KERNEL_SIZE * IMAGE_CHANNELS; p++){
					if (in.empty() == 0) {
						in >> placeholder;
						conv_buff.shift_up(0);
						conv_buff.insert_top(placeholder, 0);
					}
				}
			}
		}
	}


}


#define CONV2_BUFFER_SIZE (P1_SIZE * P1_SIZE * CONV2_CHANNELS)

void conv2(hls::stream<float> &conv2_out, hls::stream<float> &in,
		float weight[CONV2_FILTERS][CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS],
		float bias[CONV2_BIAS_SIZE]) {

	int i, j, k, filter;
	float sum = 0, placeholder;
	int row_offset, col_offset, channel_offset;
	float conv_buff[CONV2_BUFFER_SIZE];

	/*
	 * Read the initial buffer
	 * */
	conv_layer1_label181: for (k = 0; k < CONV2_BUFFER_SIZE; k++){
		in >> conv_buff[k];
		//	cout << conv_buff.val[k][0] << endl;
	}

	//cout << "CONV2 " << endl;

	for (filter = 0; filter < CONV2_FILTERS; filter++){
		conv_layer2_label8:

		for (i = 0; i < (P1_SIZE - CONV2_KERNEL_SIZE + 1); i += CONV2_STRIDE){
			conv_layer2_label2:
			for (j = 0; j < (P1_SIZE - CONV2_KERNEL_SIZE + 1); j += CONV2_STRIDE){
				conv_layer2_label9:
				for (row_offset = 0; row_offset < CONV2_KERNEL_SIZE; row_offset++){
					conv_layer2_label7:
					for (col_offset = 0; col_offset < CONV2_KERNEL_SIZE; col_offset++){
						conv_layer2_label6:
						for (channel_offset = 0; channel_offset < CONV2_CHANNELS; channel_offset++){
							int t1, t2;
							static float val1, val2;
							t1 = (i+row_offset)*P1_SIZE + (col_offset+j) + channel_offset*P1_SIZE*P1_SIZE;
							//val1 = conv_buff[t1];
							val2 = weight[filter][row_offset][col_offset][channel_offset];
							sum += conv_buff[t1]*val2;
							//	cout <<"row "<<i << "of " << row_offset << "col " << j << "of " << col_offset << "chan "<< channel_offset << endl;
							//cout << t1 << endl;
							//	cout << "sum: "<< val1 << " "<< val2 << " " << sum << endl;
						}
					}
				}
				conv2_out << relu(sum+bias[filter]);
				//cout << relu(sum+ bias[filter]) << endl;
				//cout << endl << endl;
				sum = 0;

			}

		}
	}


}


#define POOL1_BUFFER_SIZE (A1_SIZE*A1_SIZE)//*A1_CHANNELS

void pool1(hls::stream<float>& out, hls::stream<float>& in) {

	int i, j, k, l, m;
	int array_access = 0;
	float value = 0;
	hls::LineBuffer<POOL1_BUFFER_SIZE, 1, float> pool_buff;



//cout << "POOL1" << endl;
	pool_layer1_label18: for (k = 0; k < A1_CHANNELS; k++){

		pool_layer1_label181: for (int p = 0; p < POOL1_BUFFER_SIZE; p++){
			in >> pool_buff.val[p][0];
			//cout << pool_buff.val[k][0] << endl;
		}
		pool_layer1_label13: for (i = 0; i < (A1_SIZE-1); i++){
			pool_layer1_label14: for (j = 0; j < (A1_SIZE-1); j++){
				pool_layer1_label6: for (l = 0; l < P1_KERNEL_SIZE; l++) {
					pool_layer1_label15: for (m = 0; m < P1_KERNEL_SIZE; m++){
						array_access = (i+l)*A1_SIZE+j+m; //k*(A1_SIZE*A1_SIZE)+
						//cout << k << " " << i+l << " " << j+m << endl;
						//cout << array_access << endl;
						if (l == 0 && m == 0){
							value = pool_buff.val[array_access][0];
						}
						else{
							value = (value >
							pool_buff.val[array_access][0]) ? value : pool_buff.val[array_access][0];
						}
						if (l == (P1_KERNEL_SIZE - 1) && m == (P1_KERNEL_SIZE - 1)){
							out << value;
							//cout << value << endl;
							value = 0;
						}
					}
				}
				j += (P1_STRIDE-1);
				//cout << endl;
			}
			i += (P1_STRIDE-1);

		}
	}
}

#define POOL2_BUFFER_SIZE (A2_SIZE*A2_SIZE)


void pool2(hls::stream<float>& out, hls::stream<float>& in) {

	int i, j, k, l, m;
	int array_access = 0;
	float value = 0;

	float pool_buff[POOL2_BUFFER_SIZE];


	//cout << "POOL 2" << endl;
	pool_layer2_label18: for (k = 0; k < A2_CHANNELS; k++){

		pool_layer2_label181: for (int p = 0; p < POOL2_BUFFER_SIZE; p++){
			in >> pool_buff[p];
		}

		pool_layer2_label13: for (i = 0; i < (A2_SIZE-1); i++){
			pool_layer2_label14: for (j = 0; j < (A2_SIZE-1); j++){
				pool_layer2_label6: for (l = 0; l < P2_KERNEL_SIZE; l++) {
					pool_layer2_label15: for (m = 0; m < P2_KERNEL_SIZE; m++){
						array_access =(i+l)*A2_SIZE+j+m; // k*(A2_SIZE*A2_SIZE)+
						//cout << k << " " << i+l << " " << j+m << endl;
						//cout << array_access << endl;
						if (l == 0 && m == 0){
							//value = pool_buff.val[array_access][0];
							value = pool_buff[array_access];

						}
						else{
							value = (value > pool_buff[array_access]) ? value : pool_buff[array_access];
						}
						if (l == (P2_KERNEL_SIZE - 1) && m == (P2_KERNEL_SIZE - 1)){
							out << value;
							//cout << value << endl;
							value = 0;

						}
					}
				}
				j += (P2_STRIDE-1);
				//cout << endl;
			}
			i += (P2_STRIDE-1);

		}
	}
}



void fc1(hls::stream<float> &out, hls::stream<float> &in,
		float weight[FC1_WEIGHTS_H][FC1_WEIGHTS_W],
		float bias[FC1_BIAS_SIZE]) {
	float read;
	float output[FC1_ACT_SIZE] = { 0 };

	//hls::LineBuffer<FC1_WEIGHTS_W*FC1_WEIGHTS_H, 1, float> fc1_buff;
	//	in >> read;
	float fc1_buff[FC1_WEIGHTS_W*FC1_WEIGHTS_H] ={0};

	for (int i = 0; i < P2_CHANNELS; i++){
		for (int j = 0; j < P2_SIZE*P2_SIZE; j++) {
			in >> fc1_buff[j*P2_CHANNELS+i];
		}
	}
//		cout << "FLATTEN" << endl;
//		for (int j = 0; j < FC1_WEIGHTS_H; j++) {
//			cout << fc1_buff[j] << endl;
//		}

	for (int j = 0; j < FC1_WEIGHTS_H; j++) {
		fc_layer1_label40: for (int i = 0; i < FC1_WEIGHTS_W; i++) {
			//	output[i] += weight[j][i] * fc1_buff.val[j][0];
			output[i] += weight[j][i] * fc1_buff[j];

		}
	}


	fc_layer1_label11: for (int i = 0; i < FC1_WEIGHTS_W; i++){
		out << relu(output[i] + bias[i]);
		//cout << relu(output[i] + bias[i]) << endl;
		}

}

void fc2(hls::stream<float> &out, hls::stream<float> &in,
		float weight[FC2_WEIGHTS_H][FC2_WEIGHTS_W],
		float bias[FC2_BIAS_SIZE]) {
	float read;
	float output[FC2_ACT_SIZE] = { 0 };


	fc_layer2_label13: for (int j = 0; j < FC2_WEIGHTS_H; j++) {
		in >> read;
		fc_layer2_label41: for (int i = 0; i < FC2_WEIGHTS_W; i++) {
			output[i] += weight[j][i] * read;
		}
	}
	fc_layer2_label11: for (int i = 0; i < FC2_WEIGHTS_W; i++){
		out << relu(output[i] + bias[i]);
		//cout << relu(output[i] + bias[i]) << endl;
	}
}

void fc3(hls::stream<float> &out, hls::stream<float> &in,
		float weight[FC3_WEIGHTS_H][FC3_WEIGHTS_W],
		float bias[FC3_BIAS_SIZE]) {

	float read;
	float output[FC3_ACT_SIZE] = { 0 };


	fc_layer3_label10: for (int j = 0; j < FC3_WEIGHTS_H; j++) {
		in >> read;
		fc_layer3_label42: for (int i = 0; i < FC3_WEIGHTS_W; i++) {
			output[i] += weight[j][i] * read; //.to_float();
			//cout << i <<  " = " << j << " " << i << endl;
		}
	}

	float soft_max_value = 0;

	fc_layer1_label15: for (int i = 0; i < FC3_WEIGHTS_W; i++){
		output[i] += bias[i];
		//soft_max_value = soft_max_value + hls::exp(output[i].to_float());
		soft_max_value += hls::exp(output[i]);

	}

	fc_layer1_label16: for (int i = 0; i < FC3_WEIGHTS_W; i++){
		//cout << output[i] << " " << exp(output[i]) << " " << soft_max_value << endl;
		//out << (hls::exp(output[i].to_float())/soft_max_value);
		out << (hls::exp(output[i])/soft_max_value);
		//cout << (hls::exp(output[i])/soft_max_value) << endl;
	}

}

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
