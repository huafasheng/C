 #include <stdio.h>
 int main(){
     char c;
     int ref,result,sign = 0;
     scanf("%d%c",&result,&c);
     while (c != '=')
     {
         switch (c)
         {
         case '+':
             scanf("%d",&ref);
             result+=ref;
             break;
         case '-':
             scanf("%d",&ref);
             result-=ref;
             break;
         case '*':
             scanf("%d",&ref);
             result*=ref;
             break;
         case '/':
             scanf("%d",&ref);
             if(ref == 0){
                 sign = 1;
                 break;
             }
             result/=ref;
             break;
         default:
            sign = 1;
             break;
         }
         scanf("%c",&c);
     }
     if(sign == 1){
         printf("ERROR");
     }else{
         printf("%d",result);
     }
     
 }