#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int N,i=1,sum = 1,productNum = 0,unproduct = 1,M=0 ;
   scanf("%d",&N);
   while (sum<=N)
   {
    unproduct += productNum;
    sum = productNum+unproduct;
      if(i%3 == 0){
       productNum+=unproduct;
    }
    i++;  
   }
   return 0;   

}

