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
    int findMaxSum(,);
    

}

int findMaxSum(int* n,int size,int left,int right){
    int mid = (left+right)/2;
    if(left==right){
        return *(n+left);
    }
    int leftsum = findMaxSum(n,size,left,mid);
    int rightsum = findMaxSum(n,size,mid,right); 


}



