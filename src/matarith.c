int matrix_add(int *o, int *a, int *b, int satir, int sutun){
  int i, j;
  for(i = 0; i < satir; i++){
    for(j = 0; j < sutun; j++){
      o[i*sutun+j] = a[i*sutun+j] + b[i*satir+j];
    }
  }
  return 0;
}
