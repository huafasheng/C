/* 本题要求编写程序，
将给定n×n方阵中的每个元素循环向右移m个位置，
即将第0、1、⋯、n−1列变换为第n−m、n−m+1、⋯、n−1、0、1、⋯、n−m−1列。
*/
#include <stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][n],b[n][n];
    for ( int  i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    m=m%n;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            if((j+m)>=n){
                b[i][j+m-n] = a[i][j];
            }else{
                b[i][j+m] = a[i][j];
            }
        }
        
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
        
    }
    
    
    
}