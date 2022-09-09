#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* �������Ա������һ��Ԫ�ص�λ�� */
};

List ReadInput(); /* ����ʵ�֣�ϸ�ڲ���Ԫ�ش��±�1��ʼ�洢 */
Position BinarySearch( List L, ElementType X );

int main()
{
    List L = (List) malloc(sizeof(struct LNode));
    int number[] = {12,31,55,89,101};
    for (size_t i = 0; i < sizeof(number)/sizeof(int); i++)
    {
        L->Data[i+1] = number[i];
    }
    L->Last = 5;
    ElementType X = 103;
    Position P;
    

    // L = ReadInput();
    // scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

List ReadInput(){
    Position number;
    scanf("%d",&number);
    List L = (List) malloc(sizeof(struct LNode));
    ElementType array[number];
    L->Last = number;
    for (int i = 0; i < number; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < number; i++)
    {
        L->Data[i+1] = array[i];
    }
    return L;

}
Position BinarySearch( List L, ElementType X ){
    Position left = 0;
    Position right = L->Last+1;
    Position mid ;
    while(left<right){
        mid = left+(right-left)/2;
        if(X==L->Data[mid]){
            return mid;
        }else if(X>L->Data[mid]){
           left = mid+1;
        }else{
            right = mid-1;
        }
        }
        return NotFound;
}
