#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int n;
   int num = 0;
   scanf("%d",&n);
   if(n>=2000&&n<=2099){
       printf("Invalid year!");
   }else{
       for (int i = 2001; i <= n; i++)
       {
           if((i%4 ==0) && (i%100 !=0)){
               printf("%d\n",i);
               num++;
           }
       }
       if(num == 0){
           printf("None");
       }
   }
   return 0;    
}
