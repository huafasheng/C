#include<stdio.h>
#include<stdlib.h>
#define  Maxsize 10
typedef int ElemType;
typedef struct
{
	ElemType *data;
	int rear;
    int front;
	int size;
	int tag;
}Queue;
typedef  Queue *QueuePointer;
QueuePointer CreateQueue(int size);
int isFullQ(QueuePointer queuePointer);
void addQ(QueuePointer queuePointer,ElemType item);
int isEmptyQ(QueuePointer queuePointer);
ElemType DeleteQ(QueuePointer queuePointer);
int main(){
	QueuePointer queueS = CreateQueue(5);
	isEmptyQ(queueS);
	addQ(queueS,1);
	addQ(queueS,2);
	addQ(queueS,3);
	printf("%d\n",DeleteQ(queueS));
	addQ(queueS,4);
	addQ(queueS,5);
	addQ(queueS,6);
	isFullQ(queueS);
	return 0;
}
QueuePointer CreateQueue(int size){
	QueuePointer queuePointer  =  (QueuePointer) malloc(sizeof(Queue));
	queuePointer->data = (ElemType*) malloc(sizeof(size)*size);
	queuePointer->size = size;
	queuePointer->front = 0;
	queuePointer->rear = 0;
	queuePointer->tag = 0;
}

int isFullQ(QueuePointer queuePointer){
	if((queuePointer->rear == queuePointer->front)&&queuePointer->tag==1){
		printf("this queue is full\n");
		return 1;
	}
	return 0;
}
void addQ(QueuePointer queuePointer,ElemType item){
	if(!isFullQ(queuePointer)){
		*(queuePointer->data+queuePointer->rear) = item;
		 queuePointer->rear = (queuePointer->rear+1)%queuePointer->size;
		 if(queuePointer->rear == queuePointer->front){
			queuePointer->tag = 1;
		 }
	}else{
        printf("queue is  full!\n");
	}
}
int isEmptyQ(QueuePointer queuePointer){
	if((queuePointer->front == queuePointer->rear)&&(queuePointer->tag == 0)){
		printf("this queue is empty!\n");
		return 1;
	}else{
		return 0;
	}
}
ElemType DeleteQ(QueuePointer queuePointer){
	ElemType result = NULL;
	if(queuePointer->rear == queuePointer->front){
		printf("this queue is empty!\n");
	}else{ 
		result  = *(queuePointer->data+queuePointer->front);
		queuePointer->front = (queuePointer->front+1)%queuePointer->size;
		if(queuePointer->front == queuePointer->rear){
			queuePointer->tag = 0;
		}
	}
	return result;
}