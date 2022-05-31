#include <stdio.h>
#include <math.h>
int prime( int p );
int PrimeSum( int m, int n );
    
int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime( int p ){
    int sign  = 1;
    
    for (int i = 2; i <= sqrt(p); i++)
    {
        if(p%i==0){
            sign = 0;
        }
    }
    if(p<=1){
        sign = 0;
    }
    return sign;
}
int PrimeSum( int m, int n ){
    int  sum = 0;
    if(m<=1){
        m=2;
    }
    for (int i = m; i <= n; i++)
    {
        int sign = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i%j == 0){
                sign = 0;
            }
        }
        if(sign == 1){
            sum+=i;

        }
        
    }
    return sum;
    

}