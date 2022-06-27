#include <stdio.h>
#include <math.h>
double fact(int n);
int main(){
    int m,n;
    scanf("%d %d",&n,&m);
    float l = n*1.0/m*100;
    int percentage = l -100; 
    if(percentage<=0){
       printf("OK");
    }else if(percentage<=10){
       printf("Exceed %d%%. Ticket 200",percentage);
    }else{ 
       printf("Exceed %d%%. License Revoked",percentage);
    }
    return 0;
}

