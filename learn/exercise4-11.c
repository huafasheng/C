#include <stdio.h>
#include <math.h>
#include <string.h>
int isPrime(int n);
int main(){
   int M=0,N=0,number = 0,sum = 0;
   scanf("%d %d",&M,&N);
   for (size_t i = M; i <= N; i++)
   {
      if(isPrime(i)){
         number++;
         sum += i;
      };
   } 
   printf("%d %d",number,sum);  
   return 0;   

}

int isPrime(int n){
   int result=0,sum = 0;
   for(int i = 2;i<=sqrt(n);i++){
      if(n%i==0){
         sum++;
      }
   }
   if(sum==0||i ==1 || i == 2){
      result = n;
   }else{
      result = 0;

   }
   return result;
}

