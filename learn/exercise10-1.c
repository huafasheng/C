#include <stdio.h>

int sum( int n );

int main()
{
    int n;

    scanf("%d", &n);
    printf ("%d\n", sum(n));

    return 0;
}

int sum( int n ){
    int s = 0;
    if(n<0){
        return s;
    }
    if(n>0){
        s = sum(n-1)+n;
    }
    return s;
}
