#include<stdio.h>
#include<stdlib.h>
#define  Maxsize 10
typedef int ElemType;
typedef struct
{
	ElemType data[Maxsize];
	int len;
}List;
typedef  List *ListPointer;
ListPointer MakeEmpty();
ElemType FindKth(int K,ListPointer L);
int Find(ElemType X,ListPointer L);
void Insert(ElemType X,int i,ListPointer L);
void Delete(int i,ListPointer L);
int Length(ListPointer L);
int main(){
 	ListPointer Lp = MakeEmpty();
	Insert(1,1,Lp);
	Insert(2,2,Lp);
	Insert(3,3,Lp);
	Insert(5,2,Lp);
	FindKth(2,Lp);
	Find(2,Lp);
	Delete(2,Lp);
	Length(Lp);


}
ListPointer MakeEmpty(){
	ListPointer lp = (ListPointer) malloc(sizeof(List));
	lp->len = 0;
	return lp;
}
void Insert(ElemType X,int i,ListPointer lp){
	if(lp->len == Maxsize-1){
		printf("table full!");
		return;
	}
	if(i<1||i>lp->len+1){
		printf("location is illegal!");
		return;
	}
	for (int j = lp->len; j > i-1; j--)
	{
		lp->data[j] = lp->data[j-1];
	}
	lp->data[i-1] = X;
	lp->len++;
}
ElemType FindKth(int K,ListPointer L){
	printf("%d",L->data[K-1]);
	return L->data[K-1];
}
int Find(ElemType X,ListPointer L){
	for (size_t i = 0; i < L->len; i++)
	{
		if(L->data[i] == X){
			return i+1;
		}
	}
	return -1;
}
void Delete(int i,ListPointer L){
	if(i<L->len){
	for (int j = i; j < L->len+1; j++)
	{
		L->data[j-1] = L->data[j];
	}
	L->len--;
	}else{
		printf("index out of boundary");
	}
}

int Length(ListPointer L){
	return L->len;
}
