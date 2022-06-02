#include<stdio.h>
int main(){
    char string[81],reverse[81];
    gets(string);
    int index = 0;
    for (size_t i = 0; i <= 81; i++)
    {
        if(string[i] == '\0'){
            index = i;
            break;
        }
    }
    int j = index-1;
    for (size_t i = 0; i < index-1; i++)
    {
        reverse[i] = string [j];
        j--;
    }
    
    printf("%s",reverse);
    return 0;
}
    
    