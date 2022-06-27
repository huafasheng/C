#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    double sum = 0.0;
    double sign = 1.0;
    int i = 1;
    while(i <= n)
    {  
       sum +=  i*sign/(2*i-1); 
       sign = -sign;
       i++;
    }
    printf("%.3lf",sum);
    return 0;
}