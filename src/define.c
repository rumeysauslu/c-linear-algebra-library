#include <stdio.h>
#define N 100 
#define _fib(N) for (int i=2; i<=N; i++){ \
                    f[i] = f[i-1] + f[i-2];}

#define fib(a, N) do{int f[N+1]={1,1}; _fib(N); a=f[N]; } while(0);

int main(void){
  int a;
  fib(a,5);
  printf("%d\n", a);

  return 0;
}

