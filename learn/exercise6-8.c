#include <stdio.h>
 int main(){
     char c,d;
     int number=1;
     scanf("%c",&c);
     while (c!='\n')
     {  d=c;
        scanf("%c",&c);
        if((c==' '&&d!=' ')||(c=='\0'&&d!=' ')){
            number++;
        }
     }
     printf("%d",number);
 }