#include<stdio.h>
int main(){
    int n,p;
    scanf("%d",&n);
    int interger[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&interger[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i+1; j < n; j++)
        {
            if(interger[i] <interger[j]){
                p = interger[j];
                interger[j] = interger[i];
                interger[i] = p;
            }
        }
        
    }
    for (size_t i = 0; i < n-1; i++)
    {
        printf("%d ",interger[i]);
    }
    printf("%d",interger[n-1]);
    
    return 0;
}
