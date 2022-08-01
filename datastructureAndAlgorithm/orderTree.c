#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define MAXSIZE 100
#define MAX_TREE_SIZE 100
typedef int status;
typedef int elemType;
typedef elemType orderTree[MAX_TREE_SIZE];
typedef struct 
{
   int level,order;
}Position;
elemType Nil = 0;
status initTree(orderTree T){
    for (size_t i = 0; i < MAXSIZE; i++)
    {
       T[i] = 0;
    }
    return OK;   
}
status createTree(orderTree T){
    int i = 0;
    if(NULL == T){
        return ERROR;
    }
    printf("%d",MAX_TREE_SIZE);
    while (i<20)
    {
     T[i]=i+1;
     if(i!=0&&T[(i+1)/2-1]==0&&T[i]!=Nil){
        printf("%d",T[i]);
        exit(ERROR); 

     }
     while (i<MAX_TREE_SIZE)
     {
       T[i]=0;
       i++;
     }
     return OK;
    }
}
#define clearTree initTree
status emptyTree(orderTree T){
    if(T == NULL){
        return ERROR;
    }
    if(Nil == T[0]){
        return TRUE;
    }
    return FALSE;
}
int treeDepth(orderTree T){
    if(NULL == T){
        return NULL;
    }
    int i,j = 0;
    for (int i = MAX_TREE_SIZE; i >= 0; i--)
    {
        if(T[i] == Nil){
            break;
        }
    }
    i++;
    while (i>=powl(2,j))
    {
        j++;
    }
    return j;
}
status root(orderTree T,elemType *e){
    if(emptyTree(T)){
        return NULL;
    }else{
        *e = T[0];
        return OK;
    }
}
elemType valve(orderTree T,Position p){
    if(NULL == T){
        return ERROR;
    }
    if(0==T[0]){
        return ERROR;
    }
    if(p.level>treeDepth(T)||p.order>(int) powl(2,p.level-1)){
        return ERROR;
    }
    int pos = (int) powl(2,p.level)-1+p.order-1;
    return T[pos];
}
status assign(orderTree T,Position p,elemType value){
     if(NULL == T){
        return ERROR;
    }
    if(0==T[0]){
        return ERROR;
    }
     int pos = (int) powl(2,p.level)-1+p.order-1;
     if(value!= Nil && T[(pos*2+1)-1 ]== Nil){
        return ERROR;
     }else if(value!=Nil&&T[2*pos+1]!=Nil||T[2*pos+1]!=Nil){
        return ERROR;
     }
     T[pos] = value;
     return OK;
}
elemType parent(orderTree T,elemType e){
     if(NULL == T){
        return ERROR;
    }
    int i;
    for (int i = 0; i < MAX_TREE_SIZE; i++)
    {
        if (e == T[i])
        {
            return T[(i+1)/2-1];
        }
        
    }
    return Nil; 
}
elemType leftChild(orderTree T,elemType e){
    if(NULL == T){
        return ERROR;
    }
    int i;
    for (size_t i = 0; i < MAX_TREE_SIZE; i++)
    {
       if(e==T[i]){
        return T[2*i+1];
       }
    }
    return Nil;
}
elemType rightSibling(orderTree T,elemType e){
    if(NULL == T){
        return ERROR;
    }
    if(Nil == T[0]){
        return Nil;
    }
    int i;
    for (size_t i = 0; i < MAX_TREE_SIZE; i++)
    {
       if(T[i]==e&&i%2 != 0){
        return T[i+1];
       }
    }
    return Nil;
}

status visit(elemType e){
    printf("%d",e);
    return OK;
}


status preTraverse(orderTree T,int i){
   visit(T[i]);
   if(T[2*i+1]!=Nil){
    preTraverse(T,2*i+1);
   }
   if(T[2*i+2]!=Nil){
    preTraverse(T,2*i+2);
   }
}


status preOrderTraverse(orderTree T){
if(!emptyTree(T)){
    preTraverse(T,0);
}
printf("\n");
return OK;
}


status inOrderTraverse(orderTree T,int i){
   if(T[2*i+1]!=Nil){
    preTraverse(T,2*i+1);
   }
   visit(T[i]);
   if(T[2*i+2]!=Nil){
    preTraverse(T,2*i+2);
   }
}

status inOrderTraverse(orderTree T){
if(!emptyTree(T)){
    inTraverse(T,0);
}
printf("\n");
return OK;
}


