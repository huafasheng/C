#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
        
    return 0;
}

double fact( int n ){
    double f = 1;
    if(n>0){
    f = fact(n-1)*n;
    }
    return f;

};
double factsum( int n ){
    int fs = 0;
    if(n>0){
    fs = factsum(n-1)+fact(n);
    }
    return fs;

};
