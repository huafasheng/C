#include <stdio.h>
#include <math.h>
float mileFee(float n);
int main(){
    float m;
    int n;
    scanf("%f %d",&m,&n);
    int minFee = n/5*2;
    float milFee = mileFee(m);
    int sum = round(minFee +milFee); 
    printf("%d",sum);
}


float mileFee(float n){
    float fee;
    if(n>10){
      fee = 10 +(n-3)*2+(n-10)*1;
    }else if(n>3){
      fee = 10 +(n-3)*2;
    }else{
      fee = 10;
    }
    return fee;
}