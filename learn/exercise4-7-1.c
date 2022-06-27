#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
  int M,N,a,b;
  scanf("%d %d",&M,&N);
  if(M<N){
      a = N;
      N = M;
      M = a;
  }
  for (size_t i = M; i > 0; i--)
  {
      if((M%i == 0)&&(N%i == 0)){
          a=i;
          break;
      }
  }
  for (size_t i = 1; i <= N; i++)
  {
      if((i*M) %N == 0){
          b = i*M;
          break;
      }
  }
  printf("%d %d",a,b);
  
   return 0;   

}
