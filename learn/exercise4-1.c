#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int N=0,sum = 0;
   scanf("%d ",&N);
   while (N>0){
    
    if(N%2 != 0){
        sum+=N;
    }
    scanf("%d ",&N);
   }
   printf("%d\n",sum);  
   return 0;   

}

