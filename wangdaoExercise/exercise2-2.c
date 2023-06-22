
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include "linkedList.h"
//设计一个递归算法，删除不带头结点的单链表L中所有值为x的结点
bool deleteX(ListPointer l,ElemType X){
    ListPointer p;
    if(l==NULL){
        return NULL;
    }
    if(l->next==X){
        p = l;
        l=l->next;
        free(p);
        deleteX(l,X);
    }else{
        deleteX(l->next,X);
    }
    
}

//在带头结点的单链表L中，删除所有值为X的结点，并释放其空间，假设值为X的结点不唯一，试编写算法实现以上的操作
bool deleteX(ListPointer l,ElemType X){
    if(l->next!=NULL){
        
        ListPointer p = l;
        if(l->data == X){
            free(p);
            l = l->next;
        }else{
            l=l->next;
        }
    }
    
}
//设L为带头结点的单链表，编写算法实现从尾到头反向输出每个结点的值
bool reverseP(ListPointer l){
    l = l->next;
    ListPointer prep = MakeEmpty();
    ListPointer p = MakeEmpty();
    p = l;
    prep = l->next;
    while (prep->next!=NULL)
    {
       l=prep;
       prep=prep->next;
       l->next = p;
       p = l;
        /* code */
    }
    
}

//试编写算法将带头结点的单链表就地逆置，指辅助空间复杂度为O(1)
bool reverse(ListPointer l){
    l = l->next;
    ListPointer prep = MakeEmpty();
    ListPointer p = MakeEmpty();
    p = l;
    prep = l->next;
    while (prep->next!=NULL)
    {
       l=prep;
       prep=prep->next;
       l->next = p;
       p = l;
        /* code */
    }
    return true;
    
}
//试编写算法将带头结点的单链表L中删除一个最小值结点的高效算法
bool deleMin(ListPointer l){
    ListPointer min = MakeEmpty();
    ListPointer h = MakeEmpty();
    ListPointer prep = MakeEmpty();
    min = l->next;
    h=l;
    prep = l;
    while (h->next !=NULL)
    {
        if(min->data<l->next->data){
            prep = l;
            min = l->next;
        }
        l=l->next;
        /* code */
    }
    prep->next = min->next;
    free(min);   
    return true;
}
//有一个带头结点的单链表L，设计一个算法使其元素递增有序
/*指针插入排序
1、构建一个含一个空节点的链表
2、前置元素指向
3、遍历原链表，在空链表中插入。
*/
ListPointer order(ListPointer l){
   ListPointer r = MakeEmpty();
   ListPointer prep = MakeEmpty();
   ListPointer h = MakeEmpty();
   //h指向l两个节点后
   h = l->next->next;
   //将l置为只有一个节点的链表
   l->next->next = NULL;
   while (h!=NULL)
   {
    r = h->next;
    prep = l;
    while (prep->next != NULL&&h->data>prep->next->data)
    {
        prep = prep->next;
        /* code */
    }
    h->next = prep->next;
    prep->next = h;
    h=r;
    
    /* code */
   }
}
//设在一个带表头结点的单链表中所有的元素结点都无序，试编写一个函数删除表中所有介于给定两个之间的元素的元素、
ListPointer delRange(ListPointer l,ElemType x,ElemType y){
    ListPointer prep = MakeEmpty();
    ListPointer p  = MakeEmpty();
    p=l->next;
    prep = l;
    while (p!=NULL)
    {
        if (p->data<=y&&p->data>=x)
        {
            prep->next = p->next;
            ListPointer d = p;
            p=p->next;
            free(d);
        }else{
        prep = prep->next;
        p = p->next;
        }
    }
    return l;
}
//给定两个单链表，编写算法找出两个链表的公共结点
ListPointer findpublicNode(ListPointer l,ListPointer h){
    ElemType ln = 0;
    ElemType hn = 0;
    ListPointer x = MakeEmpty();
    ListPointer y = MakeEmpty();
    x= l;
    y = h;
    while (x!=NULL)
    {
        x = x->next;
        ln++;
    }
     while (y!=NULL)
    {
        y = y->next;
        hn++;
    }
    x=l;
    y=h;
    if(ln>hn){
        int d =ln-hn;
        while (d>0)
        {
            x = x->next;
            d--;
            /* code */
        }
    }
    if(ln<hn){
        int d =hn-ln;
        while (d>0)
        {
            y = y->next;
            d--;
            /* code */
        }
    }
    while (y!=NULL&&x!=NULL)
    {
        if(x==y){
            return x;
        }
        x = x->next;
        y=y->next;
        /* code */
    }

}
/*给定一个带表头结点的单链表，设head为头指针，结点结构为(data,next)，data为整形元素，next为指针，
试写出算法：按照递增次序输出单链表中各结点的数据元素，并释放结点所占的存储空间（要求：不允许使用数组作为辅助空间）*/
/**
 * @brief 
 * 
 */
ListPointer delIncreaseOrder(ListPointer l){
    ListPointer prep = MakeEmpty();
    ListPointer min  = MakeEmpty();
    ListPointer r  = MakeEmpty();
    min = l->next;
    prep = l;
    while (l->next!=NULL)
    {
        r = l->next->next;
        while (r->next!=NULL)
        {
            
            if (r->next->data<min->data)
            {
                prep =r;
                min = r->next;
            }
            /* code */
        }
        prep->next = r->next->next;
        free(min);
    }
    
    
}
//将一个带头结点的单链表A分解为两个带头结点的单链表A和B使得A表中含有原表中序号为基数的元素，而B表中含有原表中序号为偶数的元素，且保持相对顺序不变
/**
 * @brief 计数
 * 
 */
ListPointer separateA(ListPointer A){
    ListPointer B = MakeEmpty();
    ListPointer l = MakeEmpty();
    B->data = NULL;
    B->next=NULL;
    B=B->next;
    int m = 0;
    l = A->next;
    while (l!=NULL)
    {
        
        if(m == 0){
          B = A;
        }else if(m%2 == 1){
            A=l->next;
        }else{
            B->next = l->next;

        }
        m++;
        l=l->next;
        /* code */
    }
}
//设C={a1,b1,a2,b2,…,an,bn}为线性表采用带头结点的hc单链表存放设计一个算法将其拆分为两个为两个线性表使得A={a1,a2,a3…,an},B={b1,b2,b3…bn}.
ListPointer separateA(ListPointer hc){
    ListPointer B = MakeEmpty();
    ListPointer A = MakeEmpty();
    B = hc;
    A = hc;
    int m = 0;
    hc = hc->next;
    while (hc!=NULL)
    {
        m++;
        if(m%2 == 1){
            A->next = hc;
            A = A->next;
        }else{
            B->next=hc;
            B=B->next;
        }
        hc = hc->next;
        /* code */
    }
    

}
//在一个递增有序的线性表中，有数值相同的元素存在。若存储的方式为单链表，设计算法去掉数值相同的元素使表中不再有重复元素
ListPointer delDuplicate(ListPointer hc){
    ListPointer prep = MakeEmpty();
    ListPointer p = MakeEmpty();
    ListPointer d = MakeEmpty();
    p = hc->next;
    prep = hc;
    while (p->next!=NULL)
    {
        if(p->data == p->next->data){
            prep->next = p->next;
            d = p;
            p = p->next;
            free(d);
        }else{
            p = p->next;
        }
        /* code */
    }
    return hc;
    

}
//假设有两个按元素值递增次序排列的线性表，均以单链表形式存储。请编写算法将这两个单链表归并为按元素值递减次序排列的单链表，并要求利用原来两个单链表的结点存放归并后的单链表
/**
 * @brief 去掉B的头节点。A>B (A->next = B):
 * 
 * @param A 
 * @param B 
 * @return ListPointer 
 */
ListPointer combineTwo(ListPointer A,ListPointer B){
    ListPointer preA  = MakeEmpty();
    ListPointer preB  = MakeEmpty();
    ListPointer result  = MakeEmpty();
    preA = A;
    preB = B;
    B = B->next;
    result = A;
    A = A->next;
    while (A!=NULL&&B!=NULL)
    {
        
        if(A->data>B->data){
            preB = B;
            B = B->next;
            preA =A;
            A = A->next;
            preA->next=preB;
            preB->next = A;
        }else{
            preB = B;
            B = B->next;
            preA =A;
            A = A->next;
            preA->next=preB;
            preB->next = A;
        }

        /* code */
    }
    

   
}
//设A和B是两个带头结点的单链表，其中元素递增有序。设计一个算法从A和B中的公共元素产生链表C，要求不破坏A，B的结点。
ListPointer combineTwoC(ListPointer A,ListPointer B){ 
    A = A->next;
    B = B->next; 
    ListPointer C = MakeEmpty();
    
    while (A!=NULL&&B!=NULL)
    {
        if(A->data<B->data){
            A = A->data;
        }else if(A->data>B->data){
            B = B->data;
        }else{
            ListPointer r = MakeEmpty();
            r = A->data;
            C->next = r;
            A = A->next;
            B = B->next;
        }
    }
    C->next = NULL;
    return C;
}

//已知两个链表A，B分别表示两个集合，其元素递增排序，编制函数求A，B的交集，并存放于A链表中
ListPointer getIntersection(ListPointer A,ListPointer B){
    ListPointer Pa = MakeEmpty();
    ListPointer Pb = MakeEmpty();
    ListPointer Pc = MakeEmpty();
    Pc = A;
    Pa = A->next;
    Pb = B->next;
    while (Pa!=NULL&&Pb!=NULL)
    {
        if(Pa->data == Pb->data){
            Pc->next = Pa;
            Pc = Pa;
            Pa = Pa->next;
            ListPointer temp = MakeEmpty();
            temp = Pb;
            Pb = Pb->next;
            free(temp);   
        }else if(Pa->data<Pb->data){
            ListPointer temp = MakeEmpty();
            temp = Pa;
            Pa = Pa->next;
            free(temp);
        }else{
            ListPointer temp = MakeEmpty();
            temp = Pb;
            Pb = Pb->next;
            free(temp);
        }
        /* code */
    }
    while (Pa!=NULL)
    {
        ListPointer temp = MakeEmpty();
            temp = Pa;
            Pa = Pa->next;
            free(temp);
        /* code */
    }
    while (Pb!=NULL)
    {
        ListPointer temp = MakeEmpty();
            temp = Pb;
            Pb = Pb->next;
            free(temp);
        /* code */
    }
    Pc->next = NULL;
    free(B);
    return A;
}
//判断b是否为a的连续子序列
int pattern(ListPointer A,ListPointer B){
    ListPointer PA = MakeEmpty();
    ListPointer PB = MakeEmpty();
    ListPointer pre = MakeEmpty();
    PA = A;
    PB = B;
    pre = A;
    while (PA!=NULL&&PB!=NULL)
    {
        if(PA->data == PB->data){
            PA = PA->next;
            PB = PB->next;
        }else{
            pre = pre->next;
            PA = pre;
            PB = B; 
        }
        /* code */
    }
    if(PB==NULL){
            return 1;

    }else{
            return 0;

    }
    


}
//判断带头节点的循环双链表是否对称
int Symmetry(DListPointer l){
    DListPointer p = MakeEmpty();
    DListPointer q = MakeEmpty();
    p = l->next;
    q = l->prior;
    while (q!=p&&q->next!=p)
    {
        if(q->data ==p->next){
            p = p->next;
            q = q->prior;
        
        }else{
            return 0;
        }
    }
    return 1;
}
//将两个循环单链表合并为一个循环单链表。
ListPointer link(ListPointer h1,ListPointer h2){
     ListPointer q = MakeEmpty();
     ListPointer p = MakeEmpty();
    p = h1; 
     while (p->next!= h1)
     {
        p = p->next;
        /* code */
     }
     q = h2;
     while (q!=NULL)
     {
        q = q->next;
        /* code */
     }
     p->next = h2;
     q->next = h1;
     return h1;
     
     
     
}
//将最小的节点删除直到表空，最后删除头节点。
void delAll(ListPointer l){
    ListPointer minp,min,p,pre;
    while (l->next!=l)
    {
        p = l->next;
        pre = l;
        min = p;
        minp = pre;
        while (p!=l)
        {
            if(p->data<minp->data){
                min = p;
                minp = pre;

            }
            pre = p;
            p = p->next;
            /* code */
        }
        printf("%d",min->data);
        minp->next = min->next;
        free(min);
        /* code */
    }
    free(l);

}
//根据访问频度排序，相同频度最近一次访问排在最前。
DListPointer locate(DListPointer L,ElemType X){
    DListPointer p = L->next,q;
    while (p!=NULL&&p->data !=X)
    {
        p = p->next;
        if(p!=NULL){
            printf("不存在值为X的节点");
        }else{
            p->freq++;
            if(p->next!=NULL){
                p->next->prior = p->prior;
            }
            p->prior->next = p->next;
            q = p->prior;
            while (q!=L&&q->freq<=p->freq)
            {
                q = q->prior;
                /* code */
            } 
            p->next = q->next;
            q->next->prior = p;
            p->prior = q;
            q->next = p;
            
        }
        /* code */
    }
    return p;
    }
//输出倒数第K个节点对应的data。
/**
 * @brief 两种方法
 * 1、遍历求链表长度，输出n-k处data
 * 2、双指针，f先走K,f,s同步长行走，f为空时，s即为
 * 
 * @param l 
 * @return ElemType 
 */
ElemType printK(ListPointer l,int k){
    ListPointer p,q;
    p = l->next;
    q = l->next;
    int count = 0;
    while (p!=NULL)
    {
        if(count<k){
        count++;
        }else{
            q = q->next;
        }
        p = p->next;
        /* code  */
    }
    if(count<k){
        return 0;
    }else{
        printf("%d",q->data);
        return 1;
    }


}
//采用带头节点的单链表保存单词，单词后缀相同，可共享相同的后缀空间，设计算法，找找到相同后缀的其实位置。
int listlen(ListPointer l){
    int len = 0;
    while (l->next!=NULL)
    {
        len++;
        l = l->next;
        /* code */
    }
    return len;
}
ListPointer find_addr(ListPointer str1,ListPointer str2){
    int m,n;
    ListPointer q,p;
    m = listlen(str1);
    n = listlen(str2);
    for (p = str1; m>n; m--)
    {
        p = p->next;
        /* code */
    }
    for (q = str2; m<n; n--)
    {
        q = q->next;
        /* code */
    }
    while (p->next!=NULL&&p->next!=q->next)
    {
        p = p->next;
        q = q->next;
        /* code */
    }
    return p->next;
    
    

}
//单链表绝对值去重。 
void removeabs(ListPointer l,int n){
    ListPointer p = l,r;
    int *q,m;
    q = (int*) malloc(sizeof(int)*(n+1));
    for (size_t i = 0; i < n+1; i++)
    {
        *(q+i) = 0;
        /* code */
    }
    while (p->next!= NULL){
        m = p->next->data>0?p->next->data:-p->next->data;
        if(*(q+m)==0){
            if(*(q+m)==0){
              *(q+m) ==1;
            }else{
                r = p->next;
                p->next = r->next;
                free(r);
            }
        }
    }
    free(q);
}

//判断单链表是不是存在环。存在找到入口并返回，否则返回NULL
/**
 * 1、两节点按不同步长前进，存在环，则会相遇，不存在则返回头节点。
 *    
*/
ListPointer getRotatePosition(ListPointer l){
    ListPointer s = MakeEmpty();
    ListPointer f = MakeEmpty();
    s = l;
    f=l;
    while (s!=NULL||f->next!=NULL)
    {
        s =s->next;
        f = f->next->next;
        if(s ==f){
            break;
        }        /* code */
    }
    if(s==NULL||f->next!=NULL){
        return NULL;
    }
    ListPointer p1,p2;
    while (p1!=p2)
    {
        p1 = p1->next;
        p2 = p2->next;
        /* code */
    }
    return p1;
}
//将链表折半插入，重新组织
/**1、找到链表中间值
 * 2、逆置后半段链表
 * 2、两段重新组合
 * */  
ListPointer getMid(ListPointer l){
    ListPointer p = MakeEmpty();
    ListPointer m = MakeEmpty();
    p = l;
    m=l;
    while (p->next!=NULL)
    {
        p = l->next;
        m = l->next;
        if(p->next!=NULL){
            p=p->next;
        }
        /* code */
    }
    return m->next  ;
}
ListPointer reverseRear(ListPointer l){
    ListPointer p = MakeEmpty();
    ListPointer prep = MakeEmpty();
    prep=l->next;
    p = l;
    while (prep!= NULL)
    {
        l=prep;
        prep = prep->next;
        l->next = p;
        p = l;
        /* code */
    }  
    return p;
}
ListPointer combinelist(ListPointer l){
    ListPointer m = MakeEmpty();
    ListPointer h = MakeEmpty();
    h=l;
    m = getMid(l);
    m = reverse(m);
    l=l->next;
    while (m!=NULL)
    {
        m->next = l->next;
        l->next = m;
        l = m->next;
        m = m->next;
        /* code */
    }
    return l;
    
    
}