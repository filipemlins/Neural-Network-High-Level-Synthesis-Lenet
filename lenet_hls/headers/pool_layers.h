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

#ifndef POOL_LAYERS_H
#define POOL_LAYERS_H

#include "defines.h"
#include <hls_video.h>
#include "ap_fixed.h"
#include <stdio.h>
using namespace std;

#define POOL1_BUFFER_SIZE (A1_SIZE*A1_SIZE)//*A1_CHANNELS
#define POOL2_BUFFER_SIZE (A2_SIZE*A2_SIZE)

/*
void pool1(hls::stream<float>& out, hls::stream<float>& in);
void pool2(hls::stream<float>& out, hls::stream<float>& in);
*/

void pool1(hls::stream<float24_t>& out, hls::stream<float24_t>& in);
void pool2(hls::stream<float24_t>& out, hls::stream<float24_t>& in);

#endif
