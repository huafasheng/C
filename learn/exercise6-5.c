/*
本题要求实现一个判断素数的简单函数，并利用该函数验证哥德巴赫猜想：任何一个不小于6的偶数均可表示为两个奇素数之和。
素数就是只能被1和自身整除的正整数。
注意：1不是素数，2是素数
*/
#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );
    
int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime( int p ){
    int sign = 1;
    if(p==1){
        sign = 0;
    }
    for (size_t i = 2; i <= sqrt(p); i++)
    {
        if(p%i==0){
            sign  = 0;
            break;
        }
    }
    return sign;
    
}

void Goldbach( int n ){
    for (int i = 3; i < n; i=i+2)
    {
        if(prime(i)&&prime(n-i)){
            printf("%d=%d+%d",n,i,n-i);
            break;
        }
    }
    
}
