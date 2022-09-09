#include <stdio.h>
#define TOL 1E-3

double dist( double h, double p );

int main()
{
    double h, p, d;
    scanf("%lf %lf", &h, &p);
    d = dist(h, p);
    printf("%.6f\n", d);
    return 0;
}

double dist( double h, double p ){
    if(h*p>TOL){
        return h*p+(h*p,p);
    }else{
        return 0;
    }
}