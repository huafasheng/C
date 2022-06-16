#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int interger[n];
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",&interger[i]);
    }
    int *p = interger;
    int temp[n];
    int *m = temp;
    quickSortArray(p,m,0,n-1);

    for (size_t i = 0; i < n-1; i++)
    {
        printf("%d ",interger[i]);
    }
    printf("%d",interger[n-1]);
    
    return 0;
}
int quickSortArray(int *p,int low,int hight,int){
    int baseline = *(p+low);
    while (low<hight)
    {
        while (low<hight&&*(p+hight)>baseline)
        --hight;
        {
            *(p+low) = *(p+hight);
        }
        
        while (low<hight&&*(p+low)<baseline)
        ++low;
        {
            *(p+low) = *(p+hight);
        }
        
        
    }
    

    return baseline;

}