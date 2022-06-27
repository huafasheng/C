#include <stdio.h>
#include <math.h>
int main(){
    int n ,sum =0;
    scanf("%d",&n);
    for (size_t i = 1; i <=n; i++)
    {
       int s = 1;
       for (size_t j = 1; j <= i; j++)
       {
           s = s*j;
       }
       sum +=s;
       s=1;
       
       
    }
    printf("%d",sum);
    return 0;
}