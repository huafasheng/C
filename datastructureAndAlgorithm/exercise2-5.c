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
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}
List Merge( List L1, List L2 ){
     List result = L1;
    while (!L1||!L2)
    {
        if(L1->Data<L2->Data&&L1->Next->Data>L2->Data){
            List N = (List) malloc(sizeof(struct Node));
             N->Data = L2->Data;
             N->Next = L1->Next->Next;
             L1->Next = N;
             free(N);
             L2 = L2->Next;
        }else if(L1->Data>L2->Data){
            List N = (List) malloc(sizeof(struct Node));
            N->Data = L2->Data;
            N->Next = L1;
            L1 = N;
            L2 = L2->Next;
            free(N);
        }else if(L2->Data>L1->Data&&(!L1->Next)){
             List N = (List) malloc(sizeof(struct Node));
              N->Data = L2->Data;
              L1->Next = N;
              free(N);
        }else{
            L1 = L1->Next;
        }
    }
    return result;
}
