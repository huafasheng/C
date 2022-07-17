#include<stdio.h>
#include<stdlib.h>
#define  Maxsize 10
typedef int ElemType;
typedef struct list
{
	ElemType data;
	struct list *next;
    
}linkedList;
typedef  linkedList *stackPointer;
stackPointer createStack();
int isFull(stackPointer S,int size);
void Push(stackPointer S,ElemType elem);
int isEmpty(stackPointer S);
ElemType Pop(stackPointer S);
int main(){

}
stackPointer createStack(){
    stackPointer sp = (stackPointer*) malloc(sizeof(linkedList));
    sp->next = NULL;
    return sp;
}
void Push(stackPointer S,ElemType elem){

    stackPointer sp = (stackPointer*) malloc(sizeof(linkedList));
    sp->data = elem;
    sp->next = S->next;
    S->next = sp;
}


ElemType Pop(stackPointer S){
    ElemType result;
    result = S->data;
    S = S->next;
    return result;
}

int isEmpty(stackPointer S){
    return (S->next == NULL);
    
}
int isFull(stackPointer S,int size){

}