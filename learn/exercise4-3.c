#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   double n = 0,sum = 0;
   scanf("%lf",&n);
   int i = 1;
   double sign = 1.0;
   while(1.0/i>=n){
      sum += sign*1.0/(3*i-2);
      sign = -sign;
      i++; 
   };
   printf("%.6lf",sum);
   return 0;   

}

