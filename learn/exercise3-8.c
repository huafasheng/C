#include <stdio.h>
#include <math.h>
#include <string.h>
struct FRUIT
{
    double price;
    char name[20];
};

int main(){
   struct FRUIT fruit[5] = {
       {3.00,"apple"},{2.50,"pear"},{4.10,"orange"},{10.20,"grape"},{0.00,"exit"}
   }; 
   struct FRUIT f;
   for (int i = 0; i < 5; i++){
       f = fruit[i];
       printf("[%d] %s\n",i,f.name);
   }
   char a;
   for (int i = 0; i < 5||a == 0; i++)
   {
       char a = getchar();
       for(int j = 0;i<=5;i++){
           f = fruit[i];
           if(strcmp(a,f.name)==0){
               break;
           }
       }
       switch (i)
       {
       case 1:
           printf("price = %.2lf\n",a)
           break;
       case 2:
           printf("price = %.2lf\n",a)
           break;
       case 3:
           printf("price = %.2lf\n",a)
           break;
       case 4:
           printf("price = %.2lf\n",a)
           break;
       default:
           break;
       }

   }
   
   scanf()
   
   return 0;    
}
