#include<stdio.h>
#include<stdlib.h>
#define  Maxsize 10
typedef int ElemType;
typedef struct
{
	ElemType *data;
	int top;
}stack;
typedef  stack *stackPointer;
stackPointer createStack(int size);
int isFull(stackPointer S,int size);
void Push(stackPointer S,ElemType elem);
int isEmpty(stackPointer S);
ElemType Pop(stackPointer S);
int main(){
    stackPointer sp = createStack(4);
    Push(sp,1);
    Push(sp,2);  
    Push(sp,3);
    Push(sp,4);
    printf("%d",Pop(sp));
    printf("%d",Pop(sp));
    Push(sp,5);
    isFull(sp,5);
    isEmpty(sp);
    


}
stackPointer createStack(int size){
    stackPointer sp = (stackPointer) malloc(sizeof(stack));
    sp->data = (ElemType*) malloc(sizeof(ElemType)*size);
    sp->top = 0;
    return sp;
}
int isFull(stackPointer S,int size){
    if(S->top == size-1){
        return 1;    
        }
        return 0;

}
void Push(stackPointer S,ElemType elem){
    if(isFull(S,4)){
        printf("this stack is full");
    }
    *(S->data+S->top) = elem;
    S->top++;
   


}
int isEmpty(stackPointer S){
    if(S->top == 0){
        return 1;
    }
    return 0;

}
ElemType Pop(stackPointer S){
    ElemType a= *(S->data+ S->top-1);
    *(S->data+ S->top-1) =0;
    S->top--;
    return a;



}