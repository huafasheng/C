#include <stdio.h>
#include <math.h>
#include <string.h>
double fact(int n);
int main(){
   int random=0;
   double sunm = 1.0;
   scanf("%d",&random);
   for (int i = 1; i < random+1; i++)
   {
      sunm +=1.0/fact(i);
   }
   printf("%.8lf",sunm);
   return 0;   

}
double fact(int n){
    double sum = 1.0;
    for (size_t i = 1; i <= n; i++)
    {
        sum= sum*i; 
    }
    return sum;
    
}
