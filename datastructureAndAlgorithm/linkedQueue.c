#include<stdio.h>
#include<stdlib.h>
typedef int ElemType; 
typedef struct list
{
	ElemType data;
	struct list *next;
}linkedList;
typedef struct Queue
{
    linkedList *rear;
    linkedList *front;
}linkedQueue;
typedef linkedQueue *LQpointer;
LQpointer CreateQueue();
void addQ(LQpointer lqPointer,ElemType item);
ElemType DeleteQ(LQpointer lqPointer);
int main(){
	LQpointer queueS =  CreateQueue();
	addQ(queueS,1);
	addQ(queueS,2);
	addQ(queueS,3);
	printf("%d\n",DeleteQ(queueS));
	addQ(queueS,4);
	addQ(queueS,5);
	addQ(queueS,6);
	return 0;
}

LQpointer CreateQueue(){
    LQpointer queueS = (LQpointer) malloc(sizeof(linkedQueue));
    linkedList* head  = (linkedList*) malloc(sizeof(linkedList));
    head->next = NULL;
    head->data = 0;
    queueS->front = head;
    queueS->rear = head;
    return queueS;
}

void addQ(LQpointer lqPointer,ElemType item){
   lqPointer->rear->data  = item;
   linkedList* nex = (linkedList*) malloc(sizeof(linkedList));
   nex->data = 0;
   nex->next = NULL;
   lqPointer->rear->next = nex;
   lqPointer->rear = nex;
}

ElemType DeleteQ(LQpointer lqPointer){
    ElemType result;
   if(lqPointer->front ==lqPointer->rear){
    printf("this lqPointer is empty!");
   }else{
    result = lqPointer->front->data;
    linkedList* fron = lqPointer->front;
    lqPointer->front = lqPointer->front->next;
    free(fron);
   }
   return result;
}

