/*本题要求实现一个计算Fibonacci数的简单函数，并利用其实现另一个函数，输出两正整数m和n（0<m≤n≤10000）之间的所有Fibonacci数。
所谓Fibonacci数列就是满足任一项数字是前两项的和（最开始两项均定义为1）的数列。
*/
#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
    
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}
int fib( int n ){
    int pre = 1;
    int now = 0;
    int behind = 0;
    for (size_t i = 0; i < n; i++)
    {
        behind = now;
        now = pre + now;
        pre = behind;        
    }
    return now;
    

}
void PrintFN( int m, int n ){
     int pre = 1;
    int now = 0;
    int behind = 0;
    while(now<n){
        behind = now;
        now = pre + now;
        pre = behind;
        if(now>n){
            break;
        } 
        if(now>m){
            printf("%d ",now);
        }       
    };

}
