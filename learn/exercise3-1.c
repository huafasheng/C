#include <stdio.h>
#include <math.h>
int max(int *p,int *f);
double fact(int n);
int main(){
    int n,m,l;
    scanf("%d %d %d",&m,&n,&l);
    max(&m,&n);
    max(&m,&l);
    max(&n,&l);
    printf("%d-> %d-> %d",m,n,l);
    return 0;
}

int max(int *p,int *f){
    if(*p>*f){
        int temp;
        temp = *p;
        *p = *f;
        *f = temp;
    }
    return 0;
}
