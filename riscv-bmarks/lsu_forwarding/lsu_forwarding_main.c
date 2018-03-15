// See LICENSE for license details.

//**************************************************************************
// Vector-vector add benchmark
//--------------------------------------------------------------------------
//
// This benchmark uses adds to vectors and writes the results to a
// third vector. The input data (and reference data) should be
// generated using the vvadd_gendata.pl perl script and dumped
// to a file named dataset1.h.
 
#include "util.h"

//--------------------------------------------------------------------------
// lsu_forwarding function

void lsu_forwarding(int n, int a[], int b[])
{
//  for (int i = 0; i < n; i++) {
//    a[i] = i;
//    b[i] = a[i] * a[i];
//  }

  a[1] = 1;
  b[1] = 1;
//  a[2] = 2;
//  a[3] = 3;
  for (int i = 2; i < n; i++) {
    a[i] = a[i - 2] + a[i - 1];
    b[i] = b[i - 2] + b[i - 1];
//    a[i] = a[i - 4] + a[i - 3] + a[i - 2] + a[i - 1];
  }

}

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
//  int n = 500;
//  int a[n];
//  int b[n];

  int n = 1000;
  int a[n];
  int b[n];

  // Do the vvadd
  setStats(1);
//  lsu_forwarding(500, a, b);
  lsu_forwarding(n, a, b);
  setStats(0);

  // Check the results
  return 0;
}
