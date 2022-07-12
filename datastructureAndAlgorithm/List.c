#include<stdio.h>
#include<stdlib.h>
#define  Maxsize 10
typedef int ElemType;//定义一个ElemType类型
//定义顺序表
typedef struct
{
	ElemType data[Maxsize];
	int len;
}List;
typedef List *ListPointer;
int main(){

}
ListPointer MakeEmpty(){
	ListPointer Lp = (ListPointer) malloc(sizeof(List));
	Lp->len = -1;
	return Lp;

}
ElemType FindKth(int K,ListPointer L){
	int result  = -1;    
	
	

}
int Find(ElemType X,ListPointer L){
	int i = 0;
	while (i<=L->len&&L->data[i]!=X)
	{
		i++;
	}
	if(i>L->len){
		return -1;
	}else{
		return i;
	}
}
void Insert(ElemType X,int i,ListPointer L){
	if(L->data[Maxsize-1] == 0){
	for (size_t j = Maxsize-1; j > i; i--)
	{
		L->data[j-1] = L->data[j];
	}
	    L->data[i] = X;
	    L->len = L->len+1;
	}
	

}
void Delete(int i,ListPointer L){
	if(i<Maxsize-1){
		for (size_t i = i; i < l->len; i++)
		{
			/* code */
		}
		

	}


}
int Length(ListPointer L){
	return L->len+1;
}