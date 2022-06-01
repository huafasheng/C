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
    int b[bN],c[40];
    for (size_t i = 0; i < bN; i++)
    {
        scanf("%d",&b[i]);
    }
    for (size_t i = 0; i < aN; i++)
    {
        int sign = 0;
        for (size_t j = 0; j < bN; j++)
        {
            if(a[i] == b[j]){
                sign = 1;
            }
        }
        if(sign == 0){
            c[max]=a[i];
             max++;
        }
    }
    for (size_t i = 0; i < bN; i++)
    {
        int sign = 0;
        for (size_t j = 0; j < aN; j++)
        {
            if(a[j] == b[i]){
                sign = 1;
            }
        }
        if(sign == 0){
            c[max]=b[i];
            max++;
        }
    }

    for (size_t i = 0; i < max; i++)
    {
       for (size_t j = 0; j < max; j++)
       {
           if((c[i]==c[j])&&(i!=j)){
               for (size_t k = j; k< max; k++)
               {
                   c[k] = c[k+1];
                   
               }
               max--;

           }
       }
       
    }
    

    for (size_t i = 0; i < max-1; i++)
    {
       printf("%d ",c[i]);
    }
    printf("%d",c[max]);
    return 0;
}
    
    