#include <x86intrin.h>
#include <stdio.h>
#include "matarith.h"
#define NRUN 1000
#define CRUN 2000
#define N 2
typedef int mat [N][N] __attribute__((aligned(32)));

int main(void) {
  int i, j;
  long long int multSum = 0;
  long long int addSum = 0;
  long long int subSum = 0;
  long long int multAverage;
  long long int addAverage;
  long long int subAverage;

  mat matrix = {1,2,3,4}; /* cache içinde satırın başından başlayarak yazması için 'matrix[N][N] __attribute__((aligned(32))) = {1,2,3,4}' */
  mat matrix1 = {5,6,7,8};
  int o[N][N];

  long long int mult[CRUN]; /* long long int c[1000]; */
  for(i = 0; i < NRUN; i++){
    mult[i*2+0] = _rdtsc(); /* c[i] = _rdtsc(); */
    matrix_mult(*o, *matrix, *matrix1, N, N, N);
    mult[i*2+1] = _rdtsc(); /* c[i] = _rdtsc()-c[i] */
  }

  long long int add[CRUN];
  for(i = 0; i < NRUN; i ++){
    add[i*2+0] = _rdtsc();
    matrix_add(*o, *matrix, *matrix1, N, N);
    add[i*2+1] = _rdtsc(); 
  }

  long long int sub[CRUN];
  for(i = 0; i < NRUN; i++){
    sub[i*2+0] = _rdtsc();
    matrix_sub(*o, *matrix, *matrix1, N, N);
    sub[i*2+1] = _rdtsc();
  }

  for(j = 0; j < NRUN; j ++){
    multSum = multSum + (mult[j*2+1] - mult[j*2+0]);
    addSum = addSum + (add[j*2+1] - add[j*2+0]);
    subSum = subSum + (sub[j*2+1] - sub[j*2+0]);
  }

  multAverage = multSum / NRUN;
  printf("çarpım işlemi ortalama : %ld \n", (long)multAverage );
  addAverage = addSum / NRUN;
  printf("toplama işlemi ortalama : %ld \n", (long)addAverage);
  subAverage = subSum / NRUN;
  printf("çıkarma işlemi ortalama : %ld \n", (long)subAverage);

}  
