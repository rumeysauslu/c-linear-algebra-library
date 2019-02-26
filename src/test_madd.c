#include <stdio.h>
#include "matarith.h"

int main(){

  int matrix[2][2] = {1,2,3,4};
  int matrix1[2][2] = {5,6,7,8};
  int o[2][2];

  matrix_add(*o, *matrix, *matrix1, 2, 2);
  printf("%d %d %d %d",o[0][0], o[0][1], o[1][0], o[1][1]);

  matrix_sum(*o, *matrix, *matrix1, 2, 2);
  printf("%d %d %d %d",o[0][0], o[0][1], o[1][0], o[1][1]);
  
  return 0;
}
