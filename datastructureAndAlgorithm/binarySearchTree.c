#include <stdio.h>
#include<stdlib.h>
typedef int elemType;
typedef struct tree
{
    struct bsTree* left;
    struct bsTree* right;
    elemType element;
}bsTree;
typedef bsTree *bsTreePointer;


bsTreePointer iterFind(elemType X,bsTreePointer bstPointer){
    while(bstPointer){
        if(X == bstPointer->element){
            return bstPointer;
        }else if(X>bstPointer->element){
            bstPointer = bstPointer->right;
        }else{
            bstPointer = bstPointer->left;
        }
    }
    return NULL;
}

bsTreePointer insert(elemType X,bsTreePointer bstPointer){ 
    if(bstPointer){
        bsTreePointer bstP = (bsTreePointer) malloc(sizeof(bsTreePointer));
        bstP->element = X;
        bstP->left = bstP->right = NULL; 
        return bstP;
    }else{
        if(X>bstPointer->element){
            bstPointer->right = insert(X,bstPointer->right);
        }else{
             bstPointer->left = insert(X,bstPointer->left);
        }
        return bstPointer;
    }

}

bsTreePointer delete(elemType X,bsTreePointer bstPointer){
    bsTreePointer tmp;
    if(!bstPointer){
        printf("The tree is null!");
        return NULL;
    }else if (X<bstPointer->element)
    {
        bstPointer->left = delete(X,bstPointer->left);
    }else if(X>bstPointer->right){
        bstPointer->right = delete(X,bstPointer->right);
    }else{
        if(bstPointer->left&&bstPointer->right){
            tmp = findMin(bstPointer->element,bstPointer->right);
            bstPointer->element = tmp->element;
            bstPointer->right = delete(bstPointer->element,bstPointer->right);
        }
        else{
          tmp = bstPointer;
          if(!bstPointer->left){
            bstPointer = bstPointer->right;
          }else{
            bstPointer = bstPointer->left;
          }
          free(tmp);
        }
    }
    return bstPointer;
}