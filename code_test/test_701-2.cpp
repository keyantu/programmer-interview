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
*/
//错误
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