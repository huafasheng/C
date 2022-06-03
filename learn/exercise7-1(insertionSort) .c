#include<stdio.h>
int main(){
    int n,temp;
    scanf("%d",&n);
    int integer[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&integer[i]);
    }
    
    for (size_t i = 1; i < n; i++)
    {
        int max = i;
        for (size_t j = 0; j < i; j++)
        {
           if(integer[i]>integer[j]){
               max = j;
               break;
           }
        }
        if(max!=i){
             temp = integer[i];
            for (size_t k = i; k > max; k--)
            {
              integer[k]= integer[k-1];
            }
            integer[max] = temp;

            
        }
        
    }
    
    for (size_t i = 0; i < n; i++)
    {
        printf("%d ",integer[i]);
    }
    return 0;
    
}
