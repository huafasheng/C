#include<stdio.h>
int sum(int N,int S);
int main(){
    int N,S;
   scanf("%d %d",&N,&S);
    printf("%d",sum(N,S));
    return 0;
}
int sum(int N,int S){
    if(S>1){
        return  10*(sum(N,S-1)+1);
    }else if(S==1){
        return  N;
    }else{
        return 0;
    }
}