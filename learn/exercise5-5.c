#include <stdio.h>

int CountDigit( int number, int digit );
    
int main()
{
    int number, digit;
    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));
    
    return 0;
}
int CountDigit( int number, int digit ){
    int count = 0;
    if(number<0){
        number = count-number;
    }
    while (number!=0)
    {
        int n= number%10;
        number = number/10;
        if(n==digit){
            count++;
        }
    }
    return count; 
    
    

}
