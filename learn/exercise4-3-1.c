#include<stdio.h>
#include<math.h>
int main(){
  int N;
    double sum=0,a=2,b=1,c,d;    //a作分子，b作分母，d作为代替a的值
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        c=a/b;
        sum+=c;  //这里用c来代替每一项的值
        d=a;  //因为a要取新值，所以我们要先取a旧值
        a=a+b;
        b=d;
    }
    printf("%.2f",sum);
    return 0;

}