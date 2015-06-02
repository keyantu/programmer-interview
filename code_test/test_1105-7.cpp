//------------------------------------------------------------------------------------------------
//------11.05-----面试例题1
//组合与继承
//is kind of
//has some kind of
//a part of
//------------------------------------------------------------------------------------------------
//------11.07-----面试例题1
/*
#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
	int vInt=10;
	int arr[2]={10,20};
	int *p=&vInt;
	int **p2p=&p;
	int *parr[2]={&vInt,&vInt};
	int (*p2arr)[2]=&arr;

	cout<<typeid(vInt).name()<<endl;
	cout<<typeid(arr).name()<<endl;
	cout<<typeid(p).name()<<endl;
	cout<<typeid(p2p).name()<<endl;
	cout<<typeid(parr).name()<<endl;
	cout<<typeid(p2arr).name()<<endl;

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------11.07-----面试例题2
/*
#include <iostream>
using namespace std;
class A{
private:
	int a;
public:
	A(){a=0;}
	void operator++(){a+=1;}
	void operator++(int){a+=2;}
	friend void print(const A &c);
};
void print(const A &c){
	cout<<c.a;
}
int main(){
	A classa;
	print(classa);
	++classa;

	print(classa);
	classa++;
	print(classa);

	return 0;
}
*/