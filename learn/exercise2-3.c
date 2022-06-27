#include <stdio.h>
#include <math.h>
int main(){
    int m = 0;
    int n = 0;
    scanf("%d %d",&m,&n);
    double sum = 0.0;
    for (size_t i = m; i <= n; i++)
    {
       sum += pow(i,2)+ (double)1/i; 
    }
    printf("sum = %.6lf",sum);
    return 0;
    
}
