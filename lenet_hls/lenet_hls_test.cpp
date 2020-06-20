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

#include "headers/lenet_hls_test.h"

#define NUM_IMAGES 10000



int main()
{


/*
		hls::stream<float24_t> conv1_out("conv1_out");
		int size_output = A1_SIZE*A1_SIZE*A1_CHANNELS;
		float24_t conv1_layer_out[size_output];


		hls::stream<float24_t> pool1_out("pool1_out");
		float24_t pool1_out_layer[P1_SIZE*P1_SIZE*P1_CHANNELS];
		int size_output = P1_SIZE*P1_SIZE*P1_CHANNELS;


		hls::stream<float24_t> conv2_out("conv2_out");
		float24_t conv2_layer_out[A2_SIZE*A2_SIZE*A2_CHANNELS];
		int size_output = A2_SIZE*A2_SIZE*A2_CHANNELS;


		hls::stream<float24_t> pool2_out("pool2_out");
		float24_t pool2_out_layer[P2_SIZE*P2_SIZE*P2_CHANNELS];
		int size_output = P2_SIZE*P2_SIZE*P2_CHANNELS;

		hls::stream<float24_t> fc1_out("fc1_out");
		int size_output = FC1_OUT_SIZE;
		float24_t fc1_out_layer[size_output];

		hls::stream<float24_t> fc2_out("fc2_out");
		int size_output = FC2_OUT_SIZE;
		float24_t fc2_out_layer[size_output];
*/
/*

	hls::stream<float> fc3_out("fc3_out");
	int size_output = FC3_ACT_SIZE;
	float fc3_out_layer[size_output];
	float image[32*32*1];
	float sti_val;
	hls::stream<float> image_input("image_input");
	float max_val = fc3_out_layer[0];


*/

	hls::stream<float24_t> fc3_out("fc3_out");
	int size_output = FC3_ACT_SIZE;
	float24_t fc3_out_layer[size_output];
	float24_t image[32*32*1];
	float24_t sti_val;
	hls::stream<float24_t> image_input("image_input");
	float24_t max_val = fc3_out_layer[0];


	int i,j,k, max = 0;


	// read file with test results and store in array
	int fc_layer3_ref[10000];
	// open as cpp
	ifstream ifs("../../../ref/testresult/test_result.out");
	if (!ifs.is_open())
		{
			cout << "The filename test is unable to open! " << endl;
			return 1;
		}

	i = 0;
	while(ifs)
	{
		ifs >> fc_layer3_ref[i];
		i++;
	}

	ifs.close();



	string stimulus_source;

	ifstream myfile ("../../../ref/filenames.out");

	if (!myfile.is_open())
	{
		cout << "The filename filenames is unable to open! " << endl;
		return 1;
	}

	float wrong_val = 0, corrected_val = 0;

	for (int j = 0; j < NUM_IMAGES; j++) {

		getline(myfile, stimulus_source);

		//cout << stimulus_source << endl;
		ifstream sti (stimulus_source);


		if (!sti.is_open())
		{
			cout << "The image file is unable to open! " << stimulus_source << endl;
			return 1;
		}
		else
		{
			k = 0;
			while (sti >> sti_val) // sti_val is now a normal integer, so it'll be fine.
			{
				image[k] = sti_val; // Conversion to ap_int<8> occurs automatically; you may want to check bounds.
				k++;
			}
		}
		sti.close();


		for (int i = 0; i < IMAGE_SIZE*IMAGE_SIZE*IMAGE_CHANNELS; i++){
			image_input << image[i]; // overload of operator calls write function
			//cout << image[i] << endl;
		}


		lenet_hls(image_input, fc3_out);

		for(i = 0; i < size_output; i++) {
			fc3_out_layer[i] = fc3_out.read();
		}

		//cout << std::fixed;
		//cout << std::setprecision(6);
		//		cout << "FC3" << endl;
		//
		//		for(i = 0; i < size_output; i++) {
		//			cout << fc3_out_layer[i] << endl;
		//			//if(i%14 == 0 && i != 0){
		//			//cout << endl;
		//		}



		// one hot enconding

		//set one hot enconding values.
		max_val = fc3_out_layer[0];
		max = 0;

		for (i = 1; i < size_output; i++)
		{
			//cout << fc3_out_layer[i] << " " << i << endl;
			if (fc3_out_layer[i] > max_val) {
				max_val = fc3_out_layer[i];
				max = i;
			}
		}

		cout << max << " " << fc_layer3_ref[j] << endl;
		if(max == fc_layer3_ref[j]){
			corrected_val++;
		}
		else{
			wrong_val++;
		}
	}

	cout << "corrected values: " << corrected_val << " percentage: " << corrected_val/NUM_IMAGES << endl;
	cout << "wrong values: " << wrong_val << " percentage: " << wrong_val/NUM_IMAGES << endl;

	return 0;

}
