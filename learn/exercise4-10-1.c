#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int N,pre = 1;
   scanf("%d",&N);
   for (size_t i = 1; i < N; i++)
   {
      pre = (pre+1)*2;
      
   }
   printf("%d",pre);
   
   return 0;   

}

