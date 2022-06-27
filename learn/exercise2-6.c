#include <stdio.h>
#include<math.h>
int main(){
    float h = 100.00;
    float g = 10.00;
    double s = 0.50*pow(3.00,2.00)*g;
    if(s>h){ printf("height = 100.00");
    }else{
         printf("height = %.2lf",s);
    }
   
   return 0;
}