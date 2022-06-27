#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int count=0;
   scanf("%d",&count);
   int numbers[count];
   int min = 0;
   for (size_t i = 0; i < count; i++)
   {
      scanf("%d",&numbers[i]);
   }
   for (size_t i = 0; i < count; i++)
   {
       if(numbers[i]<min){
            min = numbers[i];
       }
   }
   printf("min = %d",min);
   
   return 0;   

}

