// See LICENSE for license details.

//**************************************************************************
// LSU Entry benchmark
//-------------------------------------------------------------------------
 
#include "util.h"

//--------------------------------------------------------------------------
// Input/Reference Data

#include "dataset1.h"

//--------------------------------------------------------------------------
// function

void benchmark(int n, int a[], int b[], int c[], int d[])
{
  // unroll for more stores and loads to occur
  // only even n
  int tmp;
  for (int i = 0; i < n; i += 4) {
//    a[i] = d[i + 3];
//    b[i] = a[i];
//    c[i] = b[i];
//    d[i] = c[i];
//    a[i + 1] = d[i];
//    b[i + 1] = a[i + 1];
//    c[i + 1] = b[i + 1];
//    d[i + 1] = c[i + 1];
//    a[i + 2] = d[i + 1];
//    b[i + 2] = a[i + 2];
//    c[i + 2] = b[i + 2];
//    d[i + 2] = c[i + 2];
//    a[i + 3] = d[i + 2];
//    b[i + 3] = a[i + 3];
//    c[i + 3] = b[i + 3];
//    d[i + 3] = c[i + 3];

    tmp = a[i];
    a[i] = b[i];
    b[i] = c[i];
    c[i] = d[i];
    d[i] = a[i + 1];
    a[i + 1] = b[i + 1];
    b[i + 1] = c[i + 1];
    c[i + 1] = d[i + 1];
    d[i + 1] = a[i + 2];
    a[i + 2] = b[i + 2];
    b[i + 2] = c[i + 2];
    c[i + 2] = d[i + 2];
    d[i + 2] = a[i + 3];
    a[i + 3] = b[i + 3];
    b[i + 3] = c[i + 3];
    c[i + 3] = d[i + 3];
    d[i + 3] = tmp;

//    tmp[i] = a[i];
//    a[i] = b[i];
//    b[i] = c[i];
//    c[i] = d[i];
//    d[i] = c[i] + b[i] + a[i] + tmp[i];
//    tmp[i + 1] = a[i + 1];
//    a[i + 1] = b[i + 1];
//    b[i + 1] = c[i + 1];
//    c[i + 1] = d[i + 1];
//    d[i + 1] = c[i + 1] + b[i + 1] + a[i + 1] + tmp[i + 1];
//    tmp[i + 2] = a[i + 2];
//    a[i + 2] = b[i + 2];
//    b[i + 2] = c[i + 2];
//    c[i + 2] = d[i + 2];
//    d[i + 2] = c[i + 2] + b[i + 2] + a[i + 2] + tmp[i + 2];
//    tmp[i + 3] = a[i + 3];
//    a[i + 3] = b[i + 3];
//    b[i + 3] = c[i + 3];
//    c[i + 3] = d[i + 3];
//    d[i + 3] = c[i + 3] + b[i + 3] + a[i + 3] + tmp[i + 3];

//    tmp[i] = a[i];
//    a[i] = b[i];
//    b[i] = a[i] + c[i];
//    c[i] = b[i] + a[i] + d[i];
//    d[i] = c[i] + b[i] + a[i];
//    tmp[i] = d[i] + tmp[i];
//    tmp [i + 1]= a[i + 1];
//    a[i + 1] = b[i + 1];
//    b[i + 1] = a[i + 1] + c[i + 1];
//    c[i + 1] = b[i + 1] + a[i + 1] + d[i + 1];
//    d[i + 1] = c[i + 1] + b[i + 1] + a[i + 1];
//    tmp[i + 1] = d[i + 1] + tmp[i + 1];
//    tmp [i + 2]= a[i + 2];
//    a[i + 2] = b[i + 2];
//    b[i + 2] = a[i + 2] + c[i + 2];
//    c[i + 2] = b[i + 2] + a[i + 2] + d[i + 2];
//    d[i + 2] = c[i + 2] + b[i + 2] + a[i + 2];
//    tmp[i + 2] = d[i + 2] + tmp[i + 2];
//    tmp [i + 3]= a[i + 3];
//    a[i + 3] = b[i + 3];
//    b[i + 3] = a[i + 3] + c[i + 3];
//    c[i + 3] = b[i + 3] + a[i + 3] + d[i + 3];
//    d[i + 3] = c[i + 3] + b[i + 3] + a[i + 3];
//    tmp[i + 3] = d[i + 3] + tmp[i + 3];

//    a[i] = d[i];
//    b[i] = a[i];
//    c[i] = b[i];
//    d[i] = c[i];
//    tmp[i] = d[i] + c[i] + b[i] + a[i];
//    a[i + 1] = d[i + 1];
//    b[i + 1] = a[i + 1];
//    c[i + 1] = b[i + 1];
//    d[i + 1] = c[i + 1];
//    tmp[i + 1] = d[i + 1] + c[i + 1] + b[i + 1] + a[i + 1];  
//    a[i + 2] = d[i + 2];
//    b[i + 2] = a[i + 2];
//    c[i + 2] = b[i + 2];
//    d[i + 2] = c[i + 2];
//    tmp[i + 2] = d[i + 2] + c[i + 2] + b[i + 2] + a[i + 2];  
//    a[i + 3] = d[i + 3];
//    b[i + 3] = a[i + 3];
//    c[i + 3] = b[i + 3];
//    d[i + 3] = c[i + 3];
//    tmp[i + 3] = d[i + 3] + c[i + 3] + b[i + 3] + a[i + 3];  

//    a[i] = a[i] + b[i];
//    b[i] = a[i] - b[i] + c[i]; //a[i] + c[i]
//    c[i] = a[i] - (b[i] - c[i]) + d[i]; // b[i] + d[i]
//    d[i] = c[i] + d[i];
//    a[i + 1] = a[i + 1] + b[i + 1];
//    b[i + 1] = a[i + 1] - b[i + 1] + c[i + 1]; //a[i] + c[i]
//    c[i + 1] = a[i + 1] - (b[i + 1] - c[i + 1]) + d[i + 1]; // b[i] + d[i]
//    d[i + 1] = c[i + 1] + d[i + 1];

  }
}

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
//  int tmp[DATA_SIZE];

//  benchmark(DATA_SIZE, input1_data, input2_data, input3_data, input4_data, tmp);

  setStats(1);
  benchmark(DATA_SIZE, input1_data, input2_data, input3_data, input4_data);
  setStats(0);

//  return verify(DATA_SIZE, input4_data, verify_data);
}
