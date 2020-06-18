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
#include "headers/conv_layers.h"

/*
void conv1(hls::stream<float> &conv1_out, hls::stream<float> &in,
		float weight[CONV1_FILTERS][CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS],
		float bias[CONV1_BIAS_SIZE]) {

	int i, j, k, filter;
	float sum = 0, placeholder;
	int row_offset, col_offset, channel_offset;
	hls::LineBuffer<CONV1_BUFFER_SIZE, 1, float> conv_buff;


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




void conv2(hls::stream<float> &conv2_out, hls::stream<float> &in,
		float weight[CONV2_FILTERS][CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS],
		float bias[CONV2_BIAS_SIZE]) {

	int i, j, k, filter;
	float sum = 0, placeholder;
	int row_offset, col_offset, channel_offset;
	float conv_buff[CONV2_BUFFER_SIZE];

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

*/

void conv1(hls::stream<float24_t> &conv1_out, hls::stream<float24_t> &in,
		float24_t weight[CONV1_FILTERS][CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS],
		float24_t bias[CONV1_BIAS_SIZE]) {

	int i, j, k, filter;
	float24_t sum = 0, placeholder;
	int row_offset, col_offset, channel_offset;
	hls::LineBuffer<CONV1_BUFFER_SIZE, 1, float24_t> conv_buff;



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
							static float24_t val1, val2;
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



void conv2(hls::stream<float24_t> &conv2_out, hls::stream<float24_t> &in,
		float24_t weight[CONV2_FILTERS][CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS],
		float24_t bias[CONV2_BIAS_SIZE]) {

	int i, j, k, filter;
	float24_t sum = 0, placeholder;
	int row_offset, col_offset, channel_offset;
	float24_t conv_buff[CONV2_BUFFER_SIZE];


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
							static float24_t val1, val2;
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

