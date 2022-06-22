#include<stdio.h>
int  partition(int *p,int low,int hight);
int quickSort(int *p,int low,int hight);
int main(){
    int n;
    scanf("%d",&n);
    int interger[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&interger[i]);
    }
    int *p = interger;
    quickSort(p,0,n-1);

    for (size_t i = 0; i < n-1; i++)
    {
        printf("%d ",interger[i]);
    }
    printf("%d",interger[n-1]);
    
    return 0;
}

int quickSort(int *p,int low,int hight){
    if(low<hight){
    int baseline = partition(p,low,hight);
    quickSort(p,low,baseline-1);
    quickSort(p,baseline+1,hight);
    }
}
int  partition(int *p,int low,int hight){
    int baseline = *(p+low);
    while (low<hight)
    {
       while (low<hight&&*(p+hight)<baseline)
       {
        hight--;
       }
       *(p+low) = *(p+hight);
       while (low<hight&&*(p+low)>baseline)
       {
        low++;
       }
      *(p+hight) = *(p+low);
    }
    *(p+low) = baseline;
    return low;
}