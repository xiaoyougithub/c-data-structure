//����io���� 
#include<iostream>
//ʹ������ռ� 
using namespace std;
/**
	1.������
		�������ڵ�Ķ��壺
		����뷨��������
		�����ڵ㣺 
		��ָ��λ�ò���ڵ�; 
		ɾ��ָ���ڵ㣺	 
*/ 
//��������ڵ� 
struct LinkNode{
	int data;
	LinkNode *next;
};
/*
	����:����ͷ�ڵ��ַ������������ 
	˼·:
		���������ڵ����,һ���Ǵ�ʵ�����ڵ����,һ�����ƶ�����(�ƶ�����ָ��ͷ�ڵ�);
		���������ݷ���Ҫ���ʱ��,ʵ�����ڵ��������ֵ,ָ����Ϊ��;
		�ٽ�ͷ�ڵ��ָ����ָ��ʵ�����ڵ�;
		����ƶ���������ƶ�. 
*/
void createLink(LinkNode *&head){
	cout<<"����������"; 
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
	����:ѭ���������� 
	˼·:�� 
*/
void show(LinkNode *&head){
	cout<<"��ʾ������"; 
	for(LinkNode *q=head->next;q;q=q->next){
		cout<<q->data;
	}
}
/*
	����:ɾ��ָ�����ݵĽڵ� 
*/
void deleteLinkNodeBydata(LinkNode *&head,int data){\
	LinkNode *p=head; 
	for(LinkNode *q=head->next;q->next->next;q=q->next,p=head->next){
		if(q->data==data){
			 p->next=q->next;
		}
	}	
}
/*������*/
//int main(){
//	LinkNode *head=new LinkNode;
//	head->next=NULL;
//	createLink(head);
//	show(head);
//	deleteLinkNodeBydata(head,5);
//	show(head); 
//}

