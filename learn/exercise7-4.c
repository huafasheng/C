#include <stdio.h>
int main(){
    int aN,bN,max = 0;
    scanf("%d ",&aN);
    int a[aN];
    for (size_t i = 0; i < aN; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&bN);
    int b[bN],c[40] = {
        a[0]
    };
    for (size_t i = 0; i < bN; i++)
    {
        scanf("%d",&b[i]);
    }
    for (size_t i = 0; i < aN; i++)
    {
        int sign = 0;
        for (size_t j = 0; j <= max; j++)
        {
            if(a[i] == c[j]){
                sign = 1;

            }
        }
        if(sign == 0){
            max++;
            c[max]=a[i];
        }
    }
    for (size_t i = 0; i < bN; i++)
    {
        int sign = 0;
        for (size_t j = 0; j <= max; j++)
        {
            if(b[i] == c[j]){
                sign = 1;
                for (size_t k = j; k <= max; k++)
                {
                    c[k]=c[k+1];
                }
                

            }
        }
        if(sign == 0){
            max++;
            c[max]=b[i];
        }
    }

    for (size_t i = 0; i < max; i++)
    {
       printf("%d ",c[i]);
    }
    
    
    
    
    
    
    return 0;
}