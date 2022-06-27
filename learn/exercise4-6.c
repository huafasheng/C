#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int random=0,count=0,input=0,sum =0;
   scanf("%d %d",&random,&count);
   for (size_t i = 0; i < count+1; i++)
   {
      scanf("%d",&input);
      sum++;
      if(sum == count+1){
         printf("Game Over");
      }else{
      if(input<0){
         printf("Game Over");
         break;
      }else if(input<random){
         printf("Too small");
      }else if(input>random){
         printf("Too big");
      }else if(input==random){
         if(sum ==1){
          printf("Bingo!");
         }else if(sum <= 3){
            printf("Lucky You!");
         }else{
             printf("Good Guess!");
         }
         break;
      }
      }
   }
   return 0;   

}

