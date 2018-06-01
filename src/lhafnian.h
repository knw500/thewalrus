// Copyright 2018 Xanadu Quantum Technologies Inc.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef _HAFNIAN_
#define _HAFNIAN_

#include <complex.h>
#include <assert.h>
#include <lapacke.h>
#include <omp.h>

#include <math.h>

typedef unsigned char sint;

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

void haf (double complex mat[], int n, double res[]);
double complex hafnian_loops (double complex mat [], int n);
void evals (double complex z[], double complex vals[], int n);
double complex hafnian (double complex * mat, int n);

#endif
