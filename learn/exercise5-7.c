#include <stdio.h>
#include <math.h>

double funcos( double e, double x );
int fact(int n);

int main()
{    
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
    return 0;
}

double funcos( double e, double x ){
    double subtotal = 0.0,sum = 0.0;
    int i = 0;
    int sign = 1;
    do{
        subtotal = pow(x,i)/fact(i);
        sum  = sum + subtotal*sign;
        sign =-sign;
        i=i+2;
    }while ( subtotal>e);
    
    return sum;
}
int fact(int n){
    int sum = 1;
    for (size_t i = 1; i <= n; i++)
    {
        sum*=i;
    }
    return sum;
    
}
