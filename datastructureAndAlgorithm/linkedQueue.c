#include<stdio.h>
#include<stdlib.h>
typedef int ElemType; 
typedef struct 
{
    ElemType data;
    struct linkedQueue *rear;
    struct linkedQueue *front;
}linkedQueue;
typedef linkedQueue *LQpointer;
int isFullQ(LQpointer lqPointer);
void addQ(LQpointer queuePointer,ElemType item);
int isEmptyQ(LQpointer queuePointer);
ElemType DeleteQ(LQpointer queuePointer);