#include<stdio.h>
void separateArray(int *p,int *m,int left,int right);
void mergeArray(int *p,int *m,int left,int middle,int right);
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
    separateArray(p,m,0,n-1);

    for (size_t i = 0; i < n-1; i++)
    {
        printf("%d ",interger[i]);
    }
    printf("%d",interger[n-1]);
    
    return 0;
}
void separateArray(int *p,int *m,int left,int right){
    if(left<right){
        int middle  = (left+right)/2;
        separateArray(p,m,left,middle);
        separateArray(p,m,middle+1,right);
        mergeArray(p,m,left,middle,right);
    }

}

void mergeArray(int *p,int *m,int left,int middle,int right){
    int i = left,j = middle+1,k = 0;
    while (i <= middle&&j<=right)
    {
        if(*(p+i)>*(p+j)){
            *(m+k) = *(p+i);
            i++;
        }else{
            *(m+k) = *(p+j);
            j++;
        }
        k++;
    }
    while (i<=middle)
    {
        *(m+k) = *(p+i);
        k++;
        i++;
    }

    while (j<=right)
    {
        *(m+k) = *(p+j);
        k++;
        j++;

    }

    for ( int g = 0; g < k;++g)
    {
        *(p+g+left) = *(m+g);
    }
}
