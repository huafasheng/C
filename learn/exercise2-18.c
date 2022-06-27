#include <stdio.h>
#include <math.h>
double fact(int n);
int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    double C = fact(n)/(fact(m)*fact(n-m));
    printf("result = %f\n",C);
    return 0;
}

double fact(int n){
    double sum = 1.0;
    for (size_t i = 1; i <= n; i++)
    {
        sum= sum*i; 
    }
    return sum;
    
}