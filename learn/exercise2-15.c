#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double sum;
    int sign = 1;
    for (int i = 1; i <= n; i++)
    {
       sum += 1.0*sign/(3*i-2);
       sign = -sign;
    }
    printf("sum = %.3lf",sum);
    return 0;
}