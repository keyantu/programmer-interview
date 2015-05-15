#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//------7.1-----面试例题1
/*
int main()  {
	int iv;
	int iv2=1024;
	int iv3=999;

//	int &reiv;
	int &reiv2=iv;
	int &reiv3=iv;

	int *pi;
//	*pi=5;
	pi=&iv3;
	
//	const double di;
	const double maxWage = 10.0;
	const double minWage = 0.5;
	const double *pc = &maxWage;

	cout<<pi;
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------7.2-----面试例题1
/*
void swap1(int p,int q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
}
void swap2(int *p,int *q)
{
	int *temp;
	*temp = *p;
	*p = *q;
	*q = *temp;
}
void swap3(int *p,int *q)
{
	int *temp;
	temp = p;
	p = q;
	q = temp;
}
void swap4(int *p,int *q)
{
	int temp;
	temp = *p;
	*p = *q;
	*q = temp;
}
void swap5(int &p,int &q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
}
int main()
{
	int a=1,b=2;
	
	int *p;
	//错误的初始化
	//*p = a;
	p = &a;
	cout<<*p<<endl;
	
	//swap1(a,b);
	//cout<<"swap1"<<a<<b<<endl;
	//swap2(&a,&b);
	//cout<<"swap2"<<a<<b<<endl;
	//swap3(&a,&b);
	//cout<<"swap3"<<a<<b<<endl;
	//swap4(&a,&b);
	//cout<<"swap4"<<a<<b<<endl;
	swap5(a,b);
	cout<<"swap5"<<a<<b<<endl;

	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------7.2-----面试例题2
/*
void get_mem(char *p,int num)
{
	p = (char*)malloc(sizeof(char) * num);
}
int main()
{
	char *str = NULL;
	get_mem(str,100);
	strcpy(str,"hello");

	return 0;
}

void get_mem(char **p,int num)
{
	*p = (char*)malloc(sizeof(char) * num);
}
int main()
{
	char *str = NULL;
	get_mem(&str,100);
	strcpy(str,"hello");

	cout<<*str<<endl;
	cout<<str<<endl;
	cout<<&str<<endl;
	
	return 0;
}


char *get_mem(char *p,int num)
{
	p = (char*)malloc(sizeof(char) * num);
	return p;
}
int main()
{
	char *str = NULL;
	str = get_mem(str,100);
	strcpy(str,"hello");
	cout<<str<<endl;
	
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------7.2-----面试例题4
/*
int main(){
	int a[3];
	a[0] = 0;
	a[1] = 1;
	a[2] = 2;

	int *p,*q;
	p=a;
	q=&a[2];

	cout<<a[q-p]<<'\n';

	return 0;

}
*/


//------------------------------------------------------------------------------------------------
//------7.2-----面试例题5
/*
class A{
public:
	A() {m_a=1;m_b=2;}
	~A() {};
	void fun() {cout<<m_a<<m_b<<endl;}
//private:
	int m_a;
	int m_b;
};
class B{
public:
	B() {m_c=3;}
	~B() {};
	void fun() {cout<<m_c<<endl;}
//private:
	int m_c;
};

void main(){
	A a;
	B *pb = (B*)(&a);
	printf("%p",&A::m_a);
	printf("%p",&A::m_b);
//	printf("%p",&A::fun());

	printf("%p",&B::m_c);
//	printf("%p",&B::fun());

	pb->fun();
}
*/


//------------------------------------------------------------------------------------------------
//------7.2-----面试例题7
/*
class A{
public:
	A() {m_a=1;m_b=2;}
	~A() {};
	void fun() {cout<<m_a<<endl;}
	//private:
	int m_a;
	int m_b;
};
class B : public A
{
public:
	B() {m_a=2;}
	~B() {};
	//void fun() {cout<<m_a<<endl;}
	//private:
	int m_a;
};

int main(){
	B b;
	b.fun();
	printf("%d",b.m_a);
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------7.2-----面试例题9
/*
struct S{
	int i;
	int * p;
};

int main() {
	S s;
	int *p = &s.i;
	p[0] = 4;
	p[1] = 3;
	cout<<s.i<<endl;
	s.p = p;
	s.p[1] = 1;
	cout<<s.i<<endl;
	s.p[0] = 2;
	return 0;
}
*/

//题外话：天气好闷热