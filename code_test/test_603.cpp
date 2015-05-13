#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;
//------------------------------------------------------------------------------------------------
//------面试例题1
/*
struct  
{
	short a1;
	short a2;
	short a3;
}A;
struct  
{
	long a1;
	short a2;
}B;

int main()  {
	char* ss1 = "0123456789";
	//录代码录到这里也请让我吐槽一下程序员面试宝典里的变量命名
	//而且里面错误好多啊
	//这本书其实和三年高考五年模拟那种书差不多类型的
	char ss2[] = "0123456789";
	char ss3[100] = "0123456789";
	int ss4[100];
	char q1[] = "abc";
	char q2[] = "a\n";
	char* q3 = "a\n";

	char *str1 = (char*)malloc(100);
	void *str2 = (void*)malloc(100);
	cout<<sizeof(ss1)<<" ";//4
	cout<<sizeof(ss2)<<" ";//11
	cout<<sizeof(ss3)<<" ";//100
	cout<<sizeof(ss4)<<" ";//400
	cout<<sizeof(q1)<<" ";//4
	cout<<sizeof(q2)<<" ";//3
	cout<<sizeof(q3)<<" ";//4
	cout<<sizeof(A)<<" ";//6
	cout<<sizeof(B)<<" ";//8
	cout<<sizeof(str1)<<" ";//4
	cout<<sizeof(str2)<<" ";//4

	return 0;
}
*/
//指针的大小是一个定值，4字节
//内存中的数据对齐


//------------------------------------------------------------------------------------------------
//------面试例题3
/*
class A1{
public:
	int a;
	static int b;

	A1();
	~A1();
};

class A2{
public:
	int a;
	char c;
	A2();
	~A2();
};

class A3{
public:
	float a;
	char c;
	A3();
	~A3();
};

class A4{
public:
	float a;
	int b;
	char c;
	A4();
	~A4();
};

class A5{
public:
	double d;
	float a;
	int b;
	char c;
	A5();
	~A5();
};

int main()  {
	cout<<sizeof(A1)<<endl;//sizeof计算栈内分配的大小，不计static
	cout<<sizeof(A2)<<endl;
	cout<<sizeof(A3)<<endl;
	cout<<sizeof(A4)<<endl;
	cout<<sizeof(A5)<<endl;
	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------面试例题7
//本题有错误
//sizeof(string) = 16
/*
int main(int argc, char* argv[]){
	string strArr1[] = {"Trend","Micro","Soft"};
	string *pStrArr1 = new string[2];
	pStrArr1[0] = "US";
	pStrArr1[1] = "CN";
	cout<<sizeof(strArr1)<<endl;//48
	cout<<sizeof(string)<<endl;//16
	cout<<sizeof(pStrArr1)<<endl;//4
	for (int i=0;i<sizeof(strArr1)/sizeof(string);i++)
	{
		cout<<strArr1[i];
	}
	for (int j=0;j<sizeof(pStrArr1)/sizeof(string);j++)
	{
		cout<<pStrArr1[j];
	}
	return 0;
}
*/
//修改程序如下
/*
int main(int argc, char* argv[]){
	string strArr1[] = {"Trend","Micro","Soft"};
	string *pStrArr1 = new string[2];
	pStrArr1[0] = "US";
	pStrArr1[1] = "CN";
	cout<<sizeof(strArr1)<<endl;//48
	cout<<sizeof(string)<<endl;//16
	cout<<sizeof(pStrArr1)<<endl;//4
	cout<<sizeof(*pStrArr1)<<endl;//4
	for (int i=0;i<sizeof(strArr1)/sizeof(string);i++)
	{
		cout<<strArr1[i];
	}
	cout<<endl;
	while (*pStrArr1!="")
	{
		cout<<*pStrArr1<<endl;
		pStrArr1++;
	}

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------面试例题8
/*
#include <complex>
class Base{
public:
	Base() {cout<<"base-ctor"<<endl;}
	~Base() {cout<<"base-dtor"<<endl;}

	virtual void f(int) {cout<<"base-f(int)"<<endl;}
	virtual void f(double) {cout<<"base-f(double)"<<endl;}

	virtual void g(int i=10){cout<<"base-g()"<<i<<endl;}
	virtual void g2(int i=10){cout<<"base-g2()"<<i<<endl;}

};

class Derived : public Base{
public:
	Derived(){cout<<"derived-ctor"<<endl;}
	~Derived(){cout<<"derived-dtor"<<endl;}
	void f(complex<double>){cout<<"derived-f(complex)"<<endl;}
	virtual void g(int i=20){cout<<"derived-g"<<i<<endl;}
};

int main(){
	Base b;
	Derived d;
	
	Base * pb = new Derived;
	cout<<sizeof(Base)<<"tt"<<endl;
	cout<<sizeof(Derived)<<"bb"<<endl;

	return 0;

}
*/
//------------------------------------------------------------------------------------------------
//------面试例题9
/*
char var[10];
int test(char var[]){
	return sizeof(var);
}
int main(){
	cout<<sizeof(var)<<endl;
	int i ;
	i = test(var);
	cout<<i<<endl;

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------面试例题10
/*
#include <memory.h>
#include <assert.h>

class A{};
class A2{};
class B:public A{};
class C:public virtual B{};
class D:public A,public A2{};

int main(){
	cout<<sizeof(A)<<endl;
	cout<<sizeof(B)<<endl;
	cout<<sizeof(C)<<endl;
	cout<<sizeof(D)<<endl;

	return 0;
}
*/
//补程序员面试宝典p44-6.1.1
//编译报错
/*
#define SUB(x,y) x-y
#define ACCESS_BEFORE(element,offset,value) *SUB(&element, offset)=value 
int main(){
	int i;
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	ACCESS_BEFORE(array[5],4,6);
	cout<<"happy"<<endl;
	return 0;
}
*/
