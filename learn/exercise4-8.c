#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
  long M,N;
  scanf("%ld %ld",&M,&N);
  float sum = M,final=0.0,B=M,k=2.0;
  for (size_t i = 0; i < N; i++)
  {
      sum +=final*2;
      final = B/k;
      k = k*2.0;
      
  }
  printf("%.1lf %.1lf",sum,final);
  
   
  return 0;   

}
