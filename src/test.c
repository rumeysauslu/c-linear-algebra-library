#include <stdio.h>
#include "matarith.h"

int main(){

  int matrix[2][2] = {1,2,3,4};
  int matrix1[2][2] = {5,6,7,8};
  int o[2][2];
  int i, j;

  matrix_add(*o, *matrix, *matrix1, 2, 2);
  printf("toplama işlemi sonucu oluşan matris:");
  printf("\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf(" %d", o[i][j]);
    }
  printf("\n \n");
  }

  matrix_sub(*o, *matrix, *matrix1, 2, 2);
  printf("çıkarma işlemi sonucu oluşan matris:");
  printf("\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf(" %d", o[i][j]);
    }
  printf("\n \n");
  }

  matrix_mult(*o, *matrix, *matrix1, 2, 2, 2);
  printf("çarpma işlemi sonucu oluşan matris:");
  printf("\n");
  for(i = 0; i < 2; i++){
    for(j = 0; j < 2; j++){
      printf(" %d", o[i][j]);
    }
  printf("\n \n");
  }
  
  return 0;
}
