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

#include "headers/full_connected.h"


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
