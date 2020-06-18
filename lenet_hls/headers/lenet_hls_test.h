#ifndef LENET_HLS_TEST_H
#define LENET_HLS_TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <hls_video.h>
#include <fstream>
#include <string>
using namespace std;

#include "defines.h"

#include "ap_fixed.h"

void lenet_hls(hls::stream<float24_t> &image_in, hls::stream<float24_t> &fc3_out);

typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;

#endif
