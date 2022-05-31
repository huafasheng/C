#include <stdio.h>

int reverse( int number );
    
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number ){
    int a =1,result=0,sign = 1;
    if(number<0){
        number = -number;
        sign = -sign;

    }
    while (number>0)
    {
        a=number%10;
        number = number/10;
        if(a !=0){
            result = result*10+a;
        }

    }
    if(sign == -1){
        result = -result;
    }
    return result;
    
}
