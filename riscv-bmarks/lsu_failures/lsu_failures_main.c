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
//#include <stdio.h>
//#include <stdlib.h>

//--------------------------------------------------------------------------
// lsu_failures function

//struct node {
//  int num;
//  struct node* next;
//};
//
//struct node* createNode(int i) {
//  struct node* ls = (struct node*)malloc(sizeof(struct node));
//  ls->num = i;
//  return ls;
//}
//
//void lsu_failures(int n, struct node* a)
//{
//  for (int i = 1; i < n; i++) {
//    struct node* nxt = createNode(i);
//    a->next = nxt;
//    a = nxt;
//  }
//}

void lsu_failures(int n, int x[], int y[], int z[]) {
  for (int i = 0; i < n; i++) {
    x[i] = y[i];
    y[i] = x[i];
    z[i] = y[i];

//    x[i] = i;
//    y[i] = x[i] + 1;
//    z[i] = x[i] + y[i];
  }
}

//--------------------------------------------------------------------------
// Main

int main( int argc, char* argv[] )
{
  int n = 1000;
//  struct node* ls = createNode(0);
  int x[n];
  int y[n];
  int z[n];

  // Do the vvadd
  setStats(1);
  lsu_failures(n, x, y, z);
//  lsu_failures(n, ls);
  setStats(0);

  // Check the results
  return 0;
}
