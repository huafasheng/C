#include <stdio.h>
#include <math.h>
int main(){
    int n;
    double sum;
    scanf("%d",&n);
    for (size_t i = 1; i <= n; i++)
    {
        sum +=sqrt(i);
    }
 
   printf("sum = %.2lf",sum);
   return 0;
}