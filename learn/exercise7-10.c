#include<stdio.h>
int main(){
    int index = 0,sign = 0;

    char c;
    scanf("%c",&c);
    char string[81];
    scanf("%s",string);
    for (size_t i = 0; i < 81; i++)
    {
        if(c == string[i]){
            index = i;
            sign = 1;
        }
        if(string[i] = '\0'){
            break;
        }
    }
    if(sign == 1){
        printf("index = %d",index);

    }else{
        printf("Not Found");

    }
    
}