#include<stdio.h>
int main(){
    int n,k=0;
    scanf("%d",&n);
    int interger[n];
    int re[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&interger[i]);
    }
    for (size_t i = 0; i < n; i++)
    {
        int sign = 0;
        for (size_t j = i+1; j < n; j++)
        {
            if(interger[i] <interger[j]){
               sign = 1;
               break;
            }
        }
        if(sign == 0 ){
            re[k] = interger[i];
            k++;

        }
        
    }
    return 0;
}
