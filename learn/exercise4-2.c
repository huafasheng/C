#include<stdio.h>
#include<math.h>
double fact(int n){
    double sum = 1.0;
    for (size_t i = 1; i <= n; i++)
    {
        sum= sum*i; 
    }
    return sum;
    
}
int main(){
    double x,n = 1.0,sum = 1.0;
    int i = 1;
    scanf("%lf",&x);
    while (n>0.00001)
    {
        n = pow(x,i)/fact(i);
        sum +=n;
        i++;
    }
    printf("%.4lf",sum);
    return 0;

}