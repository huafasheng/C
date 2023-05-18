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
bool reverseList(ListPointer L);
bool deleteX(ListPointer L,ElemType x);
bool deleteRangeValue(ListPointer L,ElemType s,ElemType t);
int main(){
 	ListPointer Lp = MakeEmpty();
    ElemType* x = (ElemType*) malloc(sizeof(ElemType));
	Insert(1,1,Lp);
	Insert(2,2,Lp);
	Insert(3,3,Lp);
	Insert(4,4,Lp);
	Insert(5,5,Lp);
    Insert(6,6,Lp);
	Insert(7,7,Lp);
	Insert(8,8,Lp);
	Insert(9,9,Lp);
    reverseList(Lp);
	deleteRangeValue(Lp,2,5);
	Length(Lp);
	deleteX(Lp,4);


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
	//自己解法,没有归纳
	// if(L->len%2 == 0){
	// 	int right = L->len/2;
	// 	int left = (L->len+1)/2;
	// 	for (size_t i = 0; i < L->len/2; i++)
	// 	{
	// 		ElemType temp = L->data[left-i];
	// 		L->data[left-i]  = L->data[right+i];
	// 		L->data[rigth+i] = temp;
	// 		/* code */
	// 	}
	// }else{
	// 	int mid = L->len/2;
	// 	for (size_t i = 1; i < L->len/2+1; i++)
	// 	{
	// 		ElemType temp = L->data[mid-i];
	// 		L->data[mid-i]  = L->data[mid+i];
	// 		L->data[mid+i] = temp;
	// 	}
	// }
	// return true;
	for (size_t i = 0; i < L->len/2; i++)
	{
	 ElemType temp = L->data[i];
	 L->data[i] = L->data[L->len-1-i];
	 L->data[L->len-1-i] = temp;
	}
	
}
//王道考研第3题
//对于长度为n的顺序表，编写一个时间复杂度O（n）、空间复杂度为O（1）的算法，该算法删除线性表中所有值为x的数据元素。
bool deleteX(ListPointer L,ElemType x){
	int i = 0,k = 0;
	while (i<L->len)
	{
	    if(L->data[i]== x){
			k++;
		}else{
			L->data[i-k] = L->data[i];
		}
		i++;
	}
	L->len = L->len-k;
	return true; 
}
//王道考研第4题
//从有序顺序表中删除值在给定值S与t之间的所有元素，若S或t不合理或顺序表为空，则显示出错信息并退出运行。
bool deleteRangeValue(ListPointer L,ElemType s,ElemType t){
	if(L->len == 0 ||s>t){
		printf("this list is empty");
		return false;
	}
	int j = 0,k = 0;
	for (size_t i = 0; i < L->len; i++)
	{
		if (L->data[i]<s)
		{
			j++;
		}
		if(t<L->data[i]){
			k++;
		}
	}
	if(j>k){
		j++;
		for (size_t i = k+1; i < L->len; i++)
		{
			
			L->data[j++] = L->data[i];
		
	}
	}else{
		k++;
		for (size_t i = j+1; i < L->len; i++)
		{
			
			L->data[k++] = L->data[i];

}
	}
	
	return true; 
}
//王道考研第5题
//从顺序表中删除值在给定值S与t之间的所有元素，若S或t不合理或顺序表为空，则显示出错信息并退出运行。
bool deleteOrderRangeValue(ListPointer L,ElemType s,ElemType t){
	if(L->len == 0 ||t<s){
		printf("this list is empty");
		return false;
	}
	int i = 0,k = 0;
	while (i<L->len)
	{
	    if(s<=L->data[i]&&L->data[i] <=t){
			k++;
		}else{
			L->data[i-k] = L->data[i];
		}
	}
	L->len = L->len-k;
	return true; 
}
//王道考研第6题
//从顺序表中删除所有值重复的元素，使表的所有元素均不同。
bool deleteRepeat(ListPointer lp){
	for (size_t i = 0; i < lp->len; i++)
	{
		for (size_t j = 0; j < lp->len; j++)
		{
			if(lp->data[i]==lp->data[j]){
				for (size_t k = j; k < lp->len; k++)
				{
					lp->data[k] = lp->data[k+1];
				}
				lp->len = lp->len--;
				
			}
			/* code */
		}
		
		/* code */
	}
	return true;
	
}
//王道考研第7题
//将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表。
bool mergeTwoList(ListPointer l1,ListPointer l2){
	ListPointer l = MakeEmpty();
	if(Maxsize<(l1->len+l2->len)){
		printf("this length sum is over maxsize");
		return false;
	}
	int i = 0;
	int j = 0;
	int k=0;
	while (i<l1->len &&j<l2->len)
	{
		if(l1->data[i]<l2->data[j]){
			l->data[k++] = l2->data[j++]; 
		}else{
			l->data[k++] = l1->data[i++];
		}
		/* code */
	}
	while(i<l1->len){
		l->data[k++] = l1->data[i++];
	}
	while(j<l2->len){
		l->data[k++] = l2->data[j++];
	}
	
	}
	


// }
//王道考研第8题
//已知在一堆数据A[m+n]中依次存放两个线性表（a1,a2,a3,……，am）和（b1,b2,b3,……，bn）。试编写一个函数，将数组中两个顺序表的位置互换，即将（b1,b2,b3,……，bn）放到（a1,a2,a3,……，am）前面。
bool changeEach(ListPointer L,int m,int n){
	for (size_t i = 0; i < L->len/2; i++)
	{
	 ElemType temp = L->data[i];
	 L->data[i] = L->data[L->len-1-i];
	 L->data[L->len-1-i] = temp;
	}
	for (size_t i = 0; i < n; i++)
	{
	 ElemType temp = L->data[i];
	 L->data[i] = L->data[n-1-i];
	 L->data[n-1-i] = temp;
	}
	for (size_t i = n; i < L->len; i++)
	{
	 ElemType temp = L->data[i];
	 L->data[i] = L->data[L->len-1-i];
	 L->data[L->len-1-i] = temp;
	}
	return true;
	
	
}
//王道考研第9题
//线性表（a1,a2,a3,……，an）中的元素递增有序且按顺序存储于计算机内，要求设计一个算法，完成用最少时间在表中查询数值为X的元素，若找到，则将其与后继元素位置相交换。若找不到，则将其插入表中并使表中元素递增有序。
bool query(ListPointer L,int X){
	int i =L->len/2;
	int right = L->len-1;
	int left  = 0;
	int s = 0;
	while (left<=right)
	{
		i = (left+right)/2;
		if(X>L->data[i] == X){
			return true;
			break;
		}else if(X>L->data[i]){
			left = i+1;
		}else{
			right = i-1; 
		}
	}
	if(left<=right){
		int temp = L->data[i+1];
		L->data[i+1] = X;
		L->data[i] = temp;
	}else{
		for (size_t i = L->len-1; L->data[i] >X ; i--)
		{
			L->data[i+1] = L->data[i];

		}
		L->data[i+1] = X;
		L->len++;
		
	}

}
//王道考研第10题
/*设将n(n>1)个整数放到一维数组R中。设计一个在时间和空间两方面都尽可能高效的算法，将R中保存的序列循环左移P（0<P<N）个位置，即将R中的数据由（X0，X1，X3，……，Xn-1）变换为（Xp，Xp+1，Xp+2，……，Xp-1）.要求：
   （1）给出算法的基本设计思路
   （2）根据设计思想，采用C或者C++或java语言描述算法，关键之处给出注释。
   （3）说明你所设计的算法的时间复杂度和空间复杂度。
*/
bool leftM(ListPointer L,int p){
	int mid = L->len/2;
	for (size_t i = 0; i < L->len/2; i++)
	{
		int temp = L->data[i];
		L->data[i] = L->data[L->len-1-i];
		L->data[L->len-1-i] = temp;
		
	}
	for (size_t i = 0; i < count; i++)
	{
		
		/* code */
	}
	
	
	
}

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




