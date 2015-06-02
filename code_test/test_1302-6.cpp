//------------------------------------------------------------------------------------------------
//------13.02-----double node
//2015.05.27-找老师要设备，现在忙着呢，以后给你找
//2015.06.02-老师你忙吗，昨天给你发了，我还没看，又被退下来了
//自己对自己负责吧
/*
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <conio.h>
using namespace std;

typedef struct student 
{
	int data;
	struct student *next;
	struct student *pre;
}dnode;

dnode *create(){
	dnode *head, *p, *s;
	int x,cycle=1;
	head = (dnode*)malloc(sizeof(dnode));
	p=head;
	while (cycle)
	{
		printf("\n please input the data:");
		scanf("%d",&x);
		if (x!=0)
		{
			s = (dnode*)malloc(sizeof(dnode));
			s->data = x;
			p->next = s;
			s->pre = p;
			p = s;
		}
		else cycle = 0;
	}
	head = head->next;
	head->pre = NULL;
	p->next = NULL;

	printf("\n yyy  %d",head->data);
	return head;
}

dnode *del(dnode * head, int num){
	dnode *p1,*p2;
	p1 = head;
	while (num!=p1->data && p1->next != NULL)
	{
		p1 = p1->next;
	}
	if (num == p1->data)
	{
		if (p1 == head)
		{
			head = head->next;
			head->pre = NULL;
			free(p1);
		} 
		else if(p1->next == NULL)
		{
			p1->pre->next = NULL;
			free(p1);
		}
		else{
			p1->next->pre = p1->pre;
			p1->pre->next = p1->next;
		}
	}
	else
		printf("\n %d could not find in this dnode list",num);

	return head;
}

dnode *insert(dnode *head, int num){
	dnode *p0,*p1;
	p1 = head;
	p0 = (dnode*)malloc(sizeof(dnode));
	p0->data = num;

	while(p0->data>p1->data&&p1->next!=NULL){
		p1 = p1->next;
	}
	if (p0->data<=p1->data)
	{
		if (head == p1)
		{
			p0->next = p1;
			p1->pre = p0;
			head = p0;
		}
		else{
			p1->next = p0;
			p0->pre = p1;
			p0->next = NULL;
		}
	}
	else{
		p1->next = p0;
		p0->pre = p1;
		p0->next = NULL;
	}
	return head;
}

int main(){
	dnode *head,stud;
	int n,del_num,insert_num;
	head = create();
	//print(head);

	cout<<"\n int:";
	cin>>del_num;
	head = del(head,del_num);
	//print(head);

	cout<<"\n insert data:";
	cin>>insert_num;
	head = insert(head,insert_num);

	return 0;
}
*/

//------------------------------------------------------------------------------------------------
//------13.03-----循环链表
/*
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define  ERROR 0

typedef struct LNode{
	int data;
	struct LNode *link;
}LNode,*LinkList;

void JPSEPHUS(int n,int k,int m){
	LinkList p,r,list,curr;
	p = (LinkList)malloc(sizeof(LNode));
	p->data = 0;
	p->link = p;
	curr = p;

	for (int i=1;i<n;i++)
	{
		LinkList t = (LinkList)malloc(sizeof(LNode));
		t->data = i;
		t->link = curr->link;
		curr->link = t;
		curr = t;
	}

	r = curr;
	while (k--)
	{
		r = p;
		p = p->link;
	}

	while (n--)
	{
		for(int s=m-1;s--;r=p,p=p->link);
		r->link = p->link;
		printf("%d->",p->data);
		free(p);
		p = r->link;
	}
}

int main(){
	JPSEPHUS(13,4,1);

	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------13.04-----队列
/*
#include <stdio.h>
#include <malloc.h>

typedef struct _Node
{
    int data;
	struct _Node *next;    
}node;
typedef struct _Queue
{
    
	node *front;           
	node *rear;           
}MyQueue;

MyQueue *CreateMyQueue()
{
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));    
	q->front = NULL;                                    
	q->rear = NULL;                                     
    return q;
}

MyQueue *enqueue(MyQueue *q , int data)
{
    node *newP = NULL;
	newP = (node *)malloc(sizeof(node));                
	newP->data = data;                                  
	newP->next = NULL;
	if(q->rear == NULL)
	{
        q->front = q->rear = newP;
	}
    else
    {
       	q->rear->next = newP;
		q->rear = newP;
	}
	return q;
}

MyQueue *dequeue(MyQueue *q)
{
    node *pnode = NULL;
	pnode = q->front;                     
	if(pnode == NULL)
	{
        printf("Empty queue!\n");
	}
	else
	{
        q->front = q->front->next;        
		if(q->front == NULL)              
		{
            q->rear = NULL;
		}
		free(pnode);                      
	}
	return q;
}
*/

//------------------------------------------------------------------------------------------------
//------13.05-----栈
//起名字居然用zhandi，可以用bottom吗，继续吐槽下
//今个雨下的好大，快递都忘了取。不知道下午吃饭雨会不会小一点
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

typedef struct _Stack{
	node *bottom,*top;
}MyStack;

MyStack *CreateMyStack(){
    MyStack *s = (MyStack *)malloc(sizeof(MyStack));    
	s->bottom = NULL;
	s->top = NULL;
    return s;
}

MyStack *push(MyStack* s,int x){
	node * p;
	p = (node*)malloc(sizeof(node));
	p->data = x;
	p->next = NULL;

	if (s->bottom == NULL)
	{
		s->bottom = p;
		s->top = p;
	} 
	else
	{
		s->top->next = p;
		s->top = p;
	}

	return s;
}

MyStack *pop(MyStack* s){
	node* p;
	int x;

	if (s->bottom==NULL)
	{
		printf("overflow!");
	}else{
		x = s->bottom->data;
		p = s->bottom;

		if (s->bottom == s->top)
		{
			s->bottom = NULL;
			s->top = NULL;
		} 
		else
		{
			while (p->next!=s->top)
			{
				p = p->next;
			}
			s->top = p;
			s->top->next = NULL;
		}
		return s;
	}
}
*/


//------------------------------------------------------------------------------------------------
//------13.05-----两个栈实现一个队列
/*
#include <iostream>
#include <stack>
using namespace std;
template<class T>
struct MyQueue{
	stack<T> s1;
	stack<T> s2;
	void push(T &t){
		s1.push(t);
	}
	T front(){
		if (s2.empty())
		{
			if(s1.size()==0) throw;
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		return s2.top();
	}

	void pop(){
		if (s2.empty())
		{
			while (!s1.empty())
			{
				s2.push(s1.top());
				s1.pop();
			}
		}
		if (!s2.empty())
		{
			s2.pop();
		}
	}
};

int main(){
	MyQueue<int> mq;
	int i;
	for(i=0;i<10;++i){
		mq.push(i);
	}

	for (i=0;i<10;++i)
	{
		cout<<mq.front()<<endl;
		mq.pop();
	}
	return 0;
}
*/

