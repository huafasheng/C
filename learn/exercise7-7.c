/*
给定一个n×n的方阵，本题要求计算该矩阵除副对角线、
最后一列和最后一行以外的所有元素之和。
副对角线为从矩阵的右上角至左下角的连线。
*/
#include <stdio.h>
int main(){
int n,sum = 0;
scanf("%d",&n);
int a[n][n];
for (size_t i = 0; i < n; i++)
{
    for (size_t j = 0; j < n; j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for (size_t i = 0; i < n-1; i++)
{
    for (size_t j = 0; j < n-1; j++)
    {
        if((n-i-j) != 1){
            sum+=a[i][j];
        }
    }
}
   printf("%d",sum);
return 0;
}