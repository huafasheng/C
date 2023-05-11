#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
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
bool deletemin(ListPointer L,ElemType *x);
int main(){
 	ListPointer Lp = MakeEmpty();
    ElemType* x = (ElemType*) malloc(sizeof(ElemType));
	Insert(5,1,Lp);
	Insert(2,2,Lp);
	Insert(3,3,Lp);
	Insert(5,2,Lp);
	Insert(4,5,Lp);
    Insert(1,5,Lp);
    deletemin(Lp,x);
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

//王道考研第一题
/* 从顺序表中删除具有最小值的元素并由函数返回被删元素的值。空出的元素由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行。*/
bool deletemin(ListPointer L,ElemType *x){
    if(L->len == 0){
        return false;
    }
    ElemType e = L->data[0];
    int index = 0;
    for(int j=1;j<L->len;j++){
       if(L->data[j]<e){
         e = L->data[j];
         index = j;
    }
  } 
  *x = e;
   L->data[index] = L->data[L->len-1];
    return true;
}
//王道考研第2题
//设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O（1）；
bool reverseList(ListPointer L){
	if(L->len%2 == 0){
		int right = L->len/2;
		int left = (L->len+1)/2;
		for (size_t i = 0; i < L->len/2; i++)
		{
			/* code */
		}
		
	}
}
//王道考研第3题
//对于长度为n的顺序表，编写一个时间复杂度O（n）、空间复杂度为O（1）的算法，该算法删除线性表中所有值为x的数据元素。
//王道考研第4题
//从有序顺序表中删除值在给定值S与t之间的所有元素，若S或t不合理或顺序表为空，则显示出错信息并退出运行。
//王道考研第5题
//从顺序表中删除值在给定值S与t之间的所有元素，若S或t不合理或顺序表为空，则显示出错信息并退出运行。
//王道考研第6题
//从顺序表中删除所有值重复的元素，使表的所有元素均不同。
//王道考研第7题
//将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表。
//王道考研第8题
//已知在一堆数据A[m+n]中依次存放两个线性表（a1,a2,a3,……，an）和（b1,b2,b3,……，bn）。试编写一个函数，将数组中两个顺序表的位置互换，即将（b1,b2,b3,……，bn）放到（a1,a2,a3,……，an）前面。
//王道考研第9题
//线性表（a1,a2,a3,……，an）中的元素递增有序且按顺序存储于计算机内，要求设计一个算法，完成用最少时间在表中查询数值为X的元素，若找到，则将其与后继元素位置相交换。若找不到，则将其插入表中并使表中元素递增有序。
//王道考研第10题
/*设将n(n>1)个整数放到一维数组R中。设计一个在时间和空间两方面都尽可能高效的算法，将R中保存的序列循环左移P（0<P<N）个位置，即将R中的数据由（X0，X1，X3，……，Xn-1）变换为（Xp，Xp+1，Xp+2，……，Xp-1）.要求：
   （1）给出算法的基本设计思路
   （2）根据设计思想，采用C或者C++或java语言描述算法，关键之处给出注释。
   （3）说明你所设计的算法的时间复杂度和空间复杂度。
*/
//王道考研第11题
/*一个长度为L的升序序列S，处在第[L/2]个位置的数称为S的中位数。例如，若序列S1 = （11，13，15，17，19），则S1的中位数是15，两个序列的中位数是含他们所有元素的升序序列的中位数，例如若S2（2，4，6，8，20）
，则S1和S2中位数是11.现在有两个等长升序序列A和B，试设计一个在时间和空间两方面都尽可能高效的算法，找出两个序列A和B的中位数。要求：
   （1）给出算法的基本设计思路
   （2）根据设计思想，采用C或者C++或java语言描述算法，关键之处给出注释。
   （3）说明你所设计的算法的时间复杂度和空间复杂度。
*/
//王道考研第12题
/*已知一个整数序列A=（a0,a1,a2,……，an-1）,其中0<ai<n(0<=ai<n).若存在ap1 = ap2=ap3=…＝apm = x 且m>n/2(0<=pk<n,1<=k<=m),在称x为A的主元素，例如A=(0,5,5,3,5,7,5,5)
,则5为A的主元素；犹如A = (0,5,5,3,5,1，5，7)，则A中没有主元素。假设A中n个元素存在在一个一维数组中，请设计一个尽可能高效的算法，找出A的主元素。若存在主元素，则输出该元素；否则输出-1.要求：
（1）给出算法的基本设计思路
   （2）根据设计思想，采用C或者C++或java语言描述算法，关键之处给出注释。
   （3）说明你所设计的算法的时间复杂度和空间复杂度
   */
  //王道考研第13题
  /*
  
  给定一个含n个整数的数组，请设计一个在时间上尽可能高效的算法，找出数组中未出现的最小正整数。例如：数组{-5，3，2，3}中未出现的最小正整数是1：数组{1，2，3}中未出现的最小正整数是4，要求：
  （1）给出算法的基本设计思路
   （2）根据设计思想，采用C或者C++或java语言描述算法，关键之处给出注释。
   （3）说明你所设计的算法的时间复杂度和空间复杂度
   */
  //王道考研第14题
  /*定义三元组（a,b,c）(a,b,c均为正数)的距离D=|a-b|+|b-c|+|c-a|.给定3个非空整数集合S1,S2和S3，按升序分别存储在3个数组中。请设计一个尽可能高效的算法，计算并输出所有可能的三元组（a，b,c）
  (a属于S1，b属于S2，c属于S3)中的最小距离。例如 S1 = {-1，0，9}，S2 = {2，9，17，30，41}，则最小距离为2，相应的三元组为（9，10，9）.要求：
 （1）给出算法的基本设计思路
   （2）根据设计思想，采用C或者C++或java语言描述算法，关键之处给出注释。
   （3）说明你所设计的算法的时间复杂度和空间复杂度
   */




