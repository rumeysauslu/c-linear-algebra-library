#include <stdio.h>

static inline int fib1(int N){
  int f[N+1] = {1,1};
  for (int i=2; i<=N; i++){ 
      f[i] = f[i-1] + f[i-2];}
    return f[N];
}

int main(void){
  int a;
  a = fib1(5);
  printf("%d\n", a);

  return 0;
}
