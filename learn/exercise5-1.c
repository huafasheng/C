//本题要求实现一个计算m~n（m<n）之间所有整数的和的简单函数。
#include <stdio.h>
int sum(int m,int n);
int main(){
    int m, n;

    scanf("%d %d", &m, &n);
    printf("sum = %d\n", sum(m, n));
    return 0;
}

int sum(int m,int n){
    int sum = 0;
    for (int i = m; i <= n; i++)
    {
        sum +=i;
    }   
    return sum;
}