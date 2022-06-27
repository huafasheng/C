#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int b[5] = {0,0,0,0,0};
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (size_t j = 0; j < n; j++){
       if(a[j]>=90){
           b[0]++;
       }else if((80<a[j])&&(a[j]<=90)){
           b[1]++;
       }else if((70<=a[j])&&(a[j]<80)){
           b[2]++;
       }else if((60<=a[j])&&(a[j]<70)){
           b[3]++;
       }else{
           b[4]++;
       }
    }
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d",b[i]);
    }
    
    return 0;
    
    

}