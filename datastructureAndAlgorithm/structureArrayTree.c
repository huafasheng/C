#include <stdio.h>
#define Tree int
#define MaxTree 10
typedef char elemType;
#define Null -1
struct treeNode
{
   elemType element;
   Tree left;
   Tree right;
}T1[MaxTree],T2[MaxTree];

Tree buildTree(struct treeNode T[]){
    int N;
    scanf("%d\n",&N);
    int check[N];
    Tree cl,cr,root;
    if(N){
    for (int i = 0; i < N; i++)
    {
        check[i]==0;
    }
    
    for (int i = 0; i < N; i++)
    {
        scanf("%c %c %c\n",&T[i].element,&cl,&cr);
        if (cl != '-')
        {
           T[i].left = cl-'0';
           check[T[i].left] = 1;

        }else{
            T[i].left = Null;
        }
        if (cr != '-')
        {
            T[i].right = cr - '0';
            check[T[i].right] = 1;
        }else{
            T[i].right = Null;
        }
    }
    for (size_t i = 0; i < N; i++)
    {
        if(check[i] == 0){
            root = check; 
        }
    }
    return root;
}
}

int isomorphic(Tree R1,Tree R2,struct treeNode T1[],struct treeNode T2[]){
    if(R1 == Null&&R2 == Null){
        return 1;
    }
    if(((R1!=Null)&& (R2==Null))||((R1==Null)&&(R2!=Null))){
        return 0;
    }
    if (T1[R1].element != T2[R2].element)
    {
        return 0;
    }
    if(T1[R1].left == Null&& T2[R2].left ==Null){
        return isomorphic(T1[R1].right,T2[R2].right,T1,T2);
    }
    if(((T1[R1].left != Null )&& (T2[R2].left!= Null))&&(T1[T1[R1].left].element == T2[T2[R2].left].element )){
        return (isomorphic(T1[R1].left,T2[R2].left,T1,T2)&&isomorphic(T1[R1].right,T2[R2].right,T1,T2));

    }else{
         return (isomorphic(T1[R1].left,T2[R2].right,T1,T2)&&isomorphic(T1[R1].right,T2[R2].left,T1,T2));
    }
    
}


