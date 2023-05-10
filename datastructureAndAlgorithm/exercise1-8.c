 #include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10
#define NotFound 0
typedef int ElementType;

typedef int Position;
typedef struct LNode *List;
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};

List ReadInput(); /* 裁判实现，细节不表。元素从下标1开始存储 */
Position BinarySearch( List L, ElementType X );
Position search(Position left,Position right,List L,ElementType X);

int main()
{
    // List L;
    List L = (List) malloc(sizeof(struct LNode));

    int data[] = {12,31,55,89,101};
    for (size_t i = 0; i < 5; i++)
    {
       L->Data[i+1] = data[i]; 
    }
    L->Last = 5;
    ElementType X = 10;
    Position P;
    
    // L = ReadInput();
    // scanf("%d", &X);
    P = BinarySearch( L, X );
    printf("%d\n", P);

    return 0;
}

List ReadInput(){
    List L = (List) malloc(sizeof(struct LNode));
    scanf("%d",&L->Last);
    for (size_t i = 1; i < L->Last; i++)
    {
        scanf("%d",&L->Data[i]);
    }
    return L;
}

Position BinarySearch( List L, ElementType X ){
   return search(0,L->Last+1,L,X);
}
Position search(Position left,Position right,List L,ElementType X){
    Position mid = left+(right-left)/2;
    if(mid<1||mid>L->Last){
         return NotFound;
    }else{
        if(X == L->Data[mid]){
        return mid;
    }else if(X < L->Data[mid]){
        return search(left,mid,L,X);
    }else{
           return search(mid,right,L,X);
    }
    }
    
    

}

