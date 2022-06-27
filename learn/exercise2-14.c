#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double sum;
    for (int i = 1; i <= 2*n; i=i+2)
    {
       sum += 1.0/i;
    }
    printf("sum = %.6lf",sum);
    return 0;
}