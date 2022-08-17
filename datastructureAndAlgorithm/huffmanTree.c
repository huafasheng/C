#include <stdio.h>
#include <stdlib.h>
typedef int elementType;
struct treeNode
{
    int weight;
    struct treeNode *left,right;
    
};

typedef struct arrayHeap
{
    elementType *element;
    int size;
    int capacity;
} *minHeap;
typedef struct treeNode *huffmanTree;
huffmanTree convertHuffman(minHeap heap){
    int i;
    huffmanTree hmTree;
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    

}
minHeap buildMinHeap(minHeap heap){

    int child=heap->size-1,parent; 

   for ( ; child > 1 ; child++)
   {
    parent = child/2;
    if(heap->element[child]>heap->element[parent]){
        int temp = heap->element[parent];
        heap->element[parent] =heap->element[child];
        heap->element[child] = temp;

    }
   }
   


}
