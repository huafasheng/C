#include<stdio.h>
 

 int main (){
     int num = 0;
     scanf("%d",&num);
     if(num < 0){
         printf("Invalid Value!");
     }else if( num >50){
         printf("cost = %.2lf",50*0.53+(num-50)*0.58);
     }else{
         printf("cost = %.2lf",num*0.53);
     }
 }