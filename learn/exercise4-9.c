#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
   int n,m,a=0,i=1;
    scanf("%d",&n);
        for(i;i<=n;i=i+2){
            for(m=i;m<n;m++){
                printf(" ");
            }
            for(a;a<i;a++){
                printf("* ");
            }
            a=0;
            printf("\n");
        }
        for(i=i-4;i>0;i=i-2){
            for(m=i;m<n;m++){
                printf(" ");
            }
            for(a;a<i;a++){
                printf("* ");
            }
            a=0;
            printf("\n");
        }
    return 0;

}
