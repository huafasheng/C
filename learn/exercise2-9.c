#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int quotient = a/b;
    printf("%d + %d = %d\n%d - %d = %d\n%d * %d = %d\n%d / %d = %d\n",a,b,sum,a,b,difference,a,b,product,a,b,quotient);
    return 0;
}