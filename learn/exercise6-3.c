#include <stdio.h>
#include <math.h>
int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}
int factorsum( int number ){
    int sum = 0;
    if(number == 1){
        return sum;
    }
    for (int i = 2; i <= sqrt(number); i++)
    {
        if(number%i == 0){
            if(i == number/i){
                sum+=i;
            }else{
                sum+=(i+number/i);
            }
            
        }
    }
    return sum+1;
    

}
void PrintPN( int m, int n ){
    int flag = 0;
    for (int i = m; i < n; i++)
    {
        if(factorsum(i) == i){
            flag++;
            printf("%d = 1",i);
            for (int j = 2; j < i; j++)
            {
                if(i%j == 0){
                printf("+%d",j);
                }
            }
            printf("\n");
        }
    }
    if(flag == 0){
        printf("No perfect number"); 
    }
    
      
}