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

#ifndef EXP_WIDTH

#include "ap_fixed.h"

#define EXP_WIDTH	16
#define INT_WIDTH	4

typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;

#endif


#ifndef __ACTIVATIONS_H
#define __ACTIVATIONS_H


typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;


float relu(float a)
{
	return a > (float)0 ? a : (float)0;
}







#endif
