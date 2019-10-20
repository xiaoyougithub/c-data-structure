//导入io流库 
#include<iostream>
//使用命令空间 
using namespace std;
/**
	1.单链表
		单链表表节点的定义：
		后插入法创建链表：
		遍历节点： 
		在指定位置插入节点; 
		删除指定节点：	 
*/ 
//定义链表节点 
struct LinkNode{
	int data;
	LinkNode *next;
};
/*
	功能:根据头节点地址参数创建链表 
	思路:
		定义两个节点变量,一个是待实例化节点变量,一个是移动变量(移动变量指向头节点);
		当输入数据符合要求的时候,实例化节点变量并赋值,指针域为空;
		再将头节点的指针域指向实例化节点;
		最后移动变量向后移动. 
*/
void createLink(LinkNode *&head){
	cout<<"创建单链表"; 
	LinkNode *p,*q=head;
	int data;
	while(1){
		cin>>data;
		if(data<0){
			break;
		}else{
			p=new LinkNode;
			p->data=data;
			p->next=NULL;
			q->next=p;
			q=p;
		}
	}
} 
/*
	功能:循环遍历链表 
	思路:略 
*/
void show(LinkNode *&head){
	cout<<"显示单链表"; 
	for(LinkNode *q=head->next;q;q=q->next){
		cout<<q->data;
	}
}
/*
	功能:删除指定数据的节点 
*/
void deleteLinkNodeBydata(LinkNode *&head,int data){\
	LinkNode *p=head; 
	for(LinkNode *q=head->next;q->next->next;q=q->next,p=head->next){
		if(q->data==data){
			 p->next=q->next;
		}
	}	
}
/*主程序*/
//int main(){
//	LinkNode *head=new LinkNode;
//	head->next=NULL;
//	createLink(head);
//	show(head);
//	deleteLinkNodeBydata(head,5);
//	show(head); 
//}

