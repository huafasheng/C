#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
typedef enum {false, true} bool;
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List ReadInput(); /* ����ʵ�֣�ϸ�ڲ���Ԫ�ش��±�0��ʼ�洢 */
void PrintList( List L ); /* ����ʵ�֣�ϸ�ڲ��� */
bool Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L->Data = {};

    L = ReadInput();
    scanf("%d", &X);
    if ( Insert( L, X ) == false )
        printf("Insertion failed.\n");
    PrintList( L );

    return 0;
}

bool Insert( List L, ElementType X ){
    int left = 0;
    int right = L->Last;
    int mid = left+(right-left)/2;
    while (left<right||L->Last == MAXSIZE)
    {
        mid = left+(right-left)/2;
        if(X == L->Data[mid]){
            return false;
        }else if(X>L->Data[mid]&&X>L->Data[mid+1]){
            for (size_t i = L->Last+1; i > mid; i--)
            {
                L->Data[i] = L->Data[i-1];
            }
            L->Data[mid+1] = X;
            L->Last = L->Last+1;
            return true;
        }else if(X<L->Data[mid]&&mid==0){
           for (size_t i = L->Last+1; i >0; i--)
            {
                L->Data[i] = L->Data[i-1];

            }
            L->Data[0] = X;
            L->Last = L->Last+1;
         return true;
        }else if(X<L->Data[mid]&&mid==L->Last){
            L->Data[L->Last+1] = X;
            L->Last = L->Last+1;
            return true;
        }else{
            return false;
            
        }
    }
    return false;
}