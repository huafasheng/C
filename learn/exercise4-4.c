#include <stdio.h>
#include <math.h>
int main(){
    int a,n,s;
    scanf("%d %d",&a,&n);
    for (size_t i = 0; i <n; i++)
    {
        int sum = 0;
       for (size_t j = 0; j <= i; j++)
       {
          sum += a*pow(10,j);
       }
       s+=sum;
    }
    printf("s=%d",s);
    
}