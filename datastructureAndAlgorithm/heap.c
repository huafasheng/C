#include <stdio.h>
#include<stdlib.h>
typedef int elementType;
typedef struct arrayHeap
{
    elementType *element;
    int size;
    int capacity;
} heap;
typedef heap* heapPointer;
heapPointer Create(int maxSize){
    heapPointer hPointer = malloc(sizeof(heap));
    hPointer->element = malloc((maxSize+1)*sizeof(elementType));
    hPointer->size = 0;
    hPointer->capacity = maxSize;
    return hPointer;
}
void insert(heapPointer hPointer,elementType item){
    int i;
    if(isFull(hPointer)){
        printf("full");
        return;

    }
    i = ++hPointer->size;
    for (; hPointer->element[i]<item;i/=2)
    {
       hPointer->element[i] = hPointer->element[i/2];
    }
    hPointer->element[i]=item;
    

}
int isFull(heapPointer hPointer){
   if(hPointer->size == hPointer->capacity)
   {
    return 1;
   }else{
    return 0;
   }
}

elementType deleteMax(heapPointer hPointer){
    int parent,child;
    elementType maxItem,temp;
    if(isEmpty(hPointer)){

    }
    maxItem = hPointer->element[1] ;
    temp = hPointer->element[hPointer->size--];
    for (parent = 1; parent*2<=hPointer->size; parent = child )
    {
       child = parent*2;
       if((child!=hPointer->size)&&(hPointer->element[child]<hPointer->element[child+1])){
        child++;
        if(temp>=hPointer->element[child]){
            break;
        }else{
            hPointer->element[parent] = hPointer->element[child];
        }
       }
    }
    hPointer->element[parent] = temp;
    return maxItem;
}

elementType CreateHeap(){
    int N;
    scanf("%d",&N);
    heapPointer hPointer =  Create(N);
    int element;
    for (size_t i = 0; i < N; i++)
    {

        scanf("%d",&element);
        insert(hPointer,element);
    }
    
}



