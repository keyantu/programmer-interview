//------------------------------------------------------------------------------------------------
//------13.01-----面试例题1
//又到了数据结构
//单链表
/*
typedef struct student{
int data;
struct student *next
}
*/
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

typedef struct student{
	int data;
	struct student *next;
}node;
//数据的创建/测长/打印
node * create(){
	node *head,*p,*s;
	int x,cycle = 1;
	head = (node*)malloc(sizeof(node));
	p = head;
	while (cycle)
	{
		printf("\nplease input data:");
		scanf("%d",&x);
		if (x!=0)
		{
			s = (node*)malloc(sizeof(node));
			s->data = x;
			printf("\n%d",s->data);
			p->next = s;
			p = s;
		}
		else cycle = 0;
	}
	head = head->next;
	p->next = NULL;

	return (head);
}
int length(node* head){
	int n=0;
	node* p;
	p = head;
	while (p!=NULL)
	{
		p=p->next;
		n++;
	}
	return n;
}
void print(node* head){
	node* p;
	int n;
	n = length(head);
	p = head;
	if (head!=NULL)
	while (p!=NULL)
	{
		printf("\n  uuu   %d",p->data);
		p = p->next;
	}
}
//插入/删除/排序
node* del(node* head,int num){
	node *p1,*p2;
	p1 = head;
	while (num!=p1->data&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}

	if (num==p1->data)
	{
		if (p1==head)
		{
			head = p1->next;
			free(p1);
		}
		else
			p2->next = p1->next;
			free(p1);
	}

	else
		printf("\n could not find your number!");

	return head;
}

node *insert(node *head, int num){
	node *p0,*p1,*p2;
	p1 = head;
	p0 = (node *)malloc(sizeof(node));
	p0->data = num;
	while (p0->data>p1->data&&p1->next!=NULL)
	{
		p2 = p1;
		p1 = p1->next;
	}
	if (p0->data<=p1->data)
	{
		if (head == p1)
		{
			p0->next = p1;
			head = p0;
		}
		else
		{
			p2->next = p0;
			p0->next = p1;
		}
	}else{
		p1->next = p0;
		p0->next = NULL;
	} 
	return head;
}

node * sort(node* head){
	node *p, *p2, *p3;
	int n;
	int temp;
	n = length(head);
	if (head == NULL||head->next == NULL)
	 return head;
	p = head;
	for (int j=1;j<n;++j)
	{
		p = head;
		for (int i=0;i<n-j;++i)
		{
			if(p->data>p->next->data){
				temp = p->data;
				p->data = p->next->data;
				p->next->data = temp;
			}
			p = p->next;
		}
	}
	return head;
}

node* reverse(node* head){
	node * p1, * p2, * p3;

	if(head == NULL || head->next == NULL)
		return head;

	p1 = head, p2 = p1->next;

	while (p2)
	{
		p3 = p2->next;
		p2->next = p1;
		p1 = p2;
		p2 = p3;
	}

	head->next = NULL;
	head = p1;
	return head;
}

int main(){
	node* head,stud;
	int n,del_num,insert_num;
	head = create();
	print(head);

	cout<<"\n Int: ";
	cin>>del_num;
	head = del(head,del_num);
	print(head);

	cout<<"\n please input the insert data:";
	cin>>insert_num;
	head = insert(head,insert_num);
	print(head);

	head = sort(head);
	print(head);

	head = reverse(head);
	print(head);

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------13.01-----面试例题7
//遍历一次单链表，可以求出中间节点
/*
void search(node* head, node* mid){
	node *temp = head;
	while (head->next->next!=NULL)
	{
		head = head->next->next;
		temp = temp->next;
		mid = temp;
	}
}
*/
//BGM:国境四方-Rajor 原曲是三代目 J Soul Brothers
//被丁丁唱的及其M？。。