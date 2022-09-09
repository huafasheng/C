#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}
List Insert( List L, ElementType X ){
    List p = L;
    List N = (List) malloc(sizeof(struct Node));
    if(X<L->Data){
        N->Data = X;
        N->Next = L;
        return N;
    }
    while (!L)
    {
        
        if(L->Data<X&&X<L->Next->Data){
            N->Data = X;
            N->Next = L->Next; 
            L->Next = N;
        }else if(!L->Next&&X>L->Data){
            N->Data = X;
            L->Next = N;
        }
        L = L->Next;
    }
    return p;
    
}