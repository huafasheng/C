#include <stdio.h>
#include <math.h>
int main(){
    int n,o,f,count=0,total=0;
    scanf("%d",&n);
    n=n-8;
    for (int i = n/5; i >=0; i--)
    {
        total=i+1;
        f = n-i*5;
        for (int j = f/2; j >= 0; j--)
        {
            total=j+1; 
            o = f-2*j;
            total =o+1;
            printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n",i+1,j+1,o+1,total);
            count++;
            
        }   
    }
    printf("count = %d",count);
    return 0;
}
    
