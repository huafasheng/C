#include <stdio.h>
#include <math.h>
int main(){
    int lower;
    int upper;
    scanf("%d %d",&lower,&upper);
    double C;
    printf("fahr celsius\n");
    int i = lower;
    if(lower>upper){
        printf("Invalid.");
    }else{
        while (i<upper){
          C = 5.0*(i-32)/9;
          printf("%d %.1lf\n",i,C);
          i=i+2;
       }
    }
    return 0;
}