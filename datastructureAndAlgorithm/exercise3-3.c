#include <stdio.h>
#include "orderStack.h"
#define MAXSIZE 20
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标0开始存储 */
void PrintList( List L ); /* 裁判实现，细节不表 */
List Delete( List L, ElementType minD, ElementType maxD );

int main()
{
    List L;
    ElementType minD, maxD;
    int i;

    L = ReadInput();
    scanf("%d %d", &minD, &maxD);
    L = Delete( L, minD, maxD );
    PrintList( L );

    return 0;
}

List Delete( List L, ElementType minD, ElementType maxD ){
    for (size_t i = 0; i < L->Last+1; i++)
    {
        if(minD<L->Data[i]&&L->Data[i]<maxD){
            for (size_t j = i; j < L->Last+1 ; j++)
            {
              L->Data[i] = L->Data[i+1];
            }
            
        }
    }
    
}

List Delete( List L, ElementType minD, ElementType maxD ){
    stackPointer sp = createStack(MAXSIZE);

    for (size_t i = 0; i < L->Last+1; i++)
    {
        if(minD>L->Data[i]||L->Data[i]>maxD){
            sp->data[sp->top] = L->Data[i];
            sp->top = sp->top+1;
        }
    }
    L->Last = 0;
    for (size_t i = 0; i < sp->top+1; i++)
    {
        L->Data[L->Last] = sp->data[i];
        L->Last = L->Last+1;
    }
    return L;

    
    
}