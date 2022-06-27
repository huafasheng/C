#include <stdio.h>
#include <math.h>
int main(){
    double x=0.0;
    double result = 0.00;
    scanf("%lf",&x);
    if(x < 0){
        result = pow(x+1,2)+2*x+1/x;
        
    }else{
        result = sqrt(x);
       
    }
    printf("f(%.2lf) = %.2lf\n",x,result);

    return 0;
}