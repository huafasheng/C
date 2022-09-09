#include <stdio.h>
#include <stdlib.h>

#define ERROR -1

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

ElementType Find( List L, int m );

int main()
{
    List L;
    int m;
    L = Read();
    scanf("%d", &m);
    printf("%d\n", Find(L,m));
    Print(L);
    return 0;
}

ElementType Find( List L, int m ){
    List g = (List) malloc(sizeof(struct Node));
    while (!L)
    {
       List n = (List) malloc(sizeof(struct Node));
       if(L->Next){
         n = L->Next;
         n->Next = L;
       }else{
        g = n;
       }
       free(n);
       L = L->Next;
    }
    while (m!=0)
    {
        List n = (List) malloc(sizeof(struct Node));
        n = g;
        g = g->Next;
        free(n);
        m--;
    }
    
    
}