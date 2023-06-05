
#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include "linkedList.h"
//设计一个递归算法，删除不带头结点的单链表L中所有值为x的结点
bool deleteX(ListPointer l,ElemType X){
    if(l->next!=NULL){
        
        ListPointer p = l;
        
    }
    
}

//在带头结点的单链表L中，删除所有值为X的结点，并释放其空间，假设值为X的结点不唯一，试编写算法实现以上的操作
bool deleteX(ListPointer l,ElemType X){
    if(l->next!=NULL){
        
        ListPointer p = l;
        if(l->data == X){
            free(p);
            l = l->next 
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
/*
1、变换成数组
2、
*/
ListPointer order(ListPointer l){
   ListPointer min = MakeEmpty();
   ListPointer h = MakeEmpty();
   h=l;
   min = l->next;
   while (h->next!=NULL)
   {
    if(h->next->data<l->data){

    }
    /* code */
   }
}
//设在一个带表头结点的单链表中所有的元素结点都无序，试编写一个函数删除表中所有介于给定两个之间的元素的元素
//给定两个单链表，编写算法找出两个链表的公共结点
/*给定一个带表头结点的单链表，设head为头指针，结点结构为(data,next)，data为整形元素，next为指针，
试写出算法：按照递增次序输出单链表中各结点的数据元素，并释放结点所占的存储空间（要求：不允许舒勇数组作为辅助空间）*/
//将一个带头结点的单链表A分解为两个带头结点的单链表A和B使得A表中含有原表中序号为基数的元素，而B表中含有原表中序号为偶数的元素，且保持相对顺序不变
//设C={a1,b1,a2,b2,…,an,bn}为线性表采用带头结点的hc单链表存放设计一个算法将其拆分为两个为两个线性表使得A={a1,a2,a3…,an},B={b1,b2,b3…bn}.
//在一个递增有序的线性表中，有数值相同的元素存在。若存储的方式为单链表，设计算法去掉数值相同的元素使表中不再有重复元素
//假设有两个按元素值递增次序排列的线性表，均以单链表形式存储。请编写算法将这两个单链表归并为按元素值递减次序排列的单链表，并要求利用原来两个单链表的结点存放归并后的单链表
//设A和B是两个带头结点的单链表，其中元素递增有序。设计一个算法从A和B中的公共元素产生链表C，要求不破坏A，B的结点。
//已知两个链表A，B分别表示两个集合，其元素递增排序，编制函数求A，B的交集，并存放于A链表中
//两个链表A和B分别表示两个集合，其元素递增排列。设计一个算法，从A和B的公共元素中产生单链表C，要求不破坏A和B的节点
//抽取升序A,B链表公共节点放入A中
//判断b是否为a的连续子序列
//判断带头节点的循环双链表是否对称
//将两个循环单链表合并为一个循环单链表。
//将最小的节点删除直到表空，最后删除头节点。
//根据访问频度排序，相同频度最近一次访问排在最前。
//输出倒数第K个节点对应的data。
//采用带头节点的单链表保存单词，单词后缀相同，可共享相同的后缀空间，设计算法，找找到相同后缀的其实位置。
//单链表绝对值去重。

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
    while ()
    {
        /* code */
    }
    

    


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