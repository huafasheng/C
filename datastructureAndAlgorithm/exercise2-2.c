#include<stdio.h>
int* leftremove(int* array,int size,int shift);

int main(){
    int number,position;
    scanf("%d %d",&number,&position);
    int array[number];
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&array[i]);
    }
    leftremove(array,number,position);
    for (size_t i = 0; i < number; i++)
    {
        printf("%d",array[i]);
    }
    
    
    
}
int* leftremove(int* array,int size,int shift){
    int i = 0;
    int pre = *array;
    int former = *array;
    while ((i-shift+size)%size!=shift)
    {
        i = (i-shift+size)%size;
        former = *(array+i);
        *(array+i) = pre;
        pre = former;
        
    }
    i=(i-shift+size)%size;
    *array =pre;
    return array;
    }