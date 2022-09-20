#include <stdio.h>
#include <stdlib.h>
int sonMaxSum(int* n,int size,int left,int right);
int main(){
    int number,n;
    scanf("%d",&number);
    int m[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&m[i]);
    }
    int* p = &m;
    int findMaxSum();
    

}

int findMaxSum(int* n,int size,int left,int right){
    int mid = (left+right)/2;
    if(left==right){
        return *(n+left);
    }
    int leftsum = findMaxSum(n,size,left,mid);
    int rightsum = findMaxSum(n,size,mid,right);
    int leftbordersum,rightbordersum ,thissum = 0;
    for (int i = mid+1; i < right; i++)
    {
        thissum+= *(n+i);
        if(rightbordersum<thissum){
            rightbordersum = thissum;

        }
    }
    thissum = 0;
    for (int i = mid; i >=left; i--)
    {
        thissum +=*(n+i);
        if(leftbordersum<thissum){
            leftbordersum<thissum;
        }
    }
    int midsum = leftbordersum+rightbordersum;
    return max(midsum,leftsum,rightsum);
}

int MAX (int a,int b,int c){
    int max = 0;
    if(a>b){
        max = a;
    }else{
        max = b;
    }
    if(max<c){
        max = c;
    }
}



