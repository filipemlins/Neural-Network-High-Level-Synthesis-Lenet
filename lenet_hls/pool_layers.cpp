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
#include "headers/pool_layers.h"



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
