#include <stdio.h>

int sign( int x );

int main()
{
    int x;

    scanf("%d", &x);
    printf("sign(%d) = %d\n", x, sign(x));
    return 0;
}
int sign( int x ){
    int signal;
    if(x>0){
        signal = 1;
    }else if(x==0){
        signal = 0;
    }else{
       signal = -1;
    }
    return signal;
};
