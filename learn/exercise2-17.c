#include <stdio.h>
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i <= n; i++)
    {
       int po = pow(3,i);
       printf("pow(3,%d) = %d\n",i,po);
    }
    return 0;
}