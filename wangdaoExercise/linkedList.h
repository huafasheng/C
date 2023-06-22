#include<stdio.h>
#include<stdlib.h>
#define  Maxsize 10
typedef int ElemType;
typedef struct list
{
	ElemType data;
	struct list *next;
    
}linkedList;
typedef struct list
{
	ElemType data;
  ElemType freq;
	struct list *next;
  struct list *prior;
    
}DlinkedList;
typedef   linkedList *ListPointer;
typedef   DlinkedList *DListPointer;
ListPointer MakeEmpty();
ListPointer FindKth(int K,ListPointer lL);
ListPointer Find(ElemType X,ListPointer L);
ListPointer Insert(ElemType X,int i,ListPointer lL);
void Delete(int i,ListPointer L);
int Length(ListPointer L);
int main(){
   ListPointer lLp;
   lLp = Insert(1,1,lLp);
   lLp = Insert(2,2,lLp);
	 lLp = Insert(3,3,lLp);
   Length(lLp);
	 Insert(5,2,lLp);
   FindKth(2,lLp);
	 Find(2,lLp);
	 Delete(2,lLp);
   
      
}

ListPointer MakeEmpty(){
    ListPointer lL = (ListPointer) malloc(sizeof(linkedList));
    lL->next = NULL;
    return lL;
}
ListPointer Insert(ElemType X,int i,ListPointer lL){
    ListPointer lp,p;
    if(i == 1){
      lp = (ListPointer) malloc(sizeof(linkedList));
      lp->data = X;
      lp->next = lL;
      return lp;
    }
    p = FindKth(i-1,lL);
    if(p==NULL){
      printf("location is illegal");
      return NULL;
    }else{
      lp = (ListPointer) malloc(sizeof(linkedList));
      lp->data = X;
      lp->next = p->next;
      p->next = lp;
      return lL;
    }
}

int Length(ListPointer lL){
  ListPointer lp = lL;
  int j = 0;
  while(lp!=NULL ){
    lp =lp->next;
    j++;
  }
  return j;
}

ListPointer FindKth(int K,ListPointer lL){
  ListPointer lp = lL;
   int j = 1;
   while (lp!=NULL && j<K)
   {
    lp=lp->next;
    j++;
   }
   if(j==K){
    return lp;
   }else{
    printf("no this number");
    return NULL;
   }
   

}
ListPointer Find(ElemType X,ListPointer lL){
  ListPointer lp = lL;
  while (lp!=NULL&&lp->data !=X)
  {
    lp = lp->next;
  }
  return lp;

}

void Delete(int i,ListPointer lL){
  ListPointer lp,p;
  if(i == 1){
     p=lL;
     if(lL!=NULL){
      lL = lL->next;
     }else{
      return NULL;
     }
     free(p);
     return lL;
  }
  lp =  FindKth(i-1,lL);
  if(lp==NULL){
    printf("The %d no exist ",i-1);
    return NULL;
  }else if(lp->next==NULL){
    printf("The %d no exist",i);
    return NULL;
  }else{
    p  = lp->next;
    lp->next = p->next;
    free(p);
    return lL;
  }
}