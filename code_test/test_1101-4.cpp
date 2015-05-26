//------------------------------------------------------------------------------------------------
//------11.01-----面试例题1
/*
#include <iostream>
using namespace std;
class A{
protected:
	int m_data;
public:
	A(int data=0){m_data = data;}
	int GetData(){return doGetData();}
	virtual int doGetData(){return m_data;}
};
class B:public A{
protected:
	int m_data;
public:
	B(int data=1){m_data = data;}
	//int GetData(){return m_data;}
	//virtual 
	int doGetData(){return m_data;}
};
class C:public B{
protected:
	int m_data;
public:
	C(int data=2){m_data = data;}
	//int GetData(){return m_data;}
	//virtual int doGetData(){return m_data;}
};
int main(){
	C c(10);

	cout<<c.GetData()<<endl;
	cout<<c.A::GetData()<<endl;
	cout<<c.B::GetData()<<endl;
	cout<<c.C::GetData()<<endl;

	cout<<c.doGetData()<<endl;
	cout<<c.A::doGetData()<<endl;
	cout<<c.B::doGetData()<<endl;
	cout<<c.C::doGetData()<<endl;

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------11.01-----面试例题2
/*
#include <iostream>
using namespace std;
class A{
public:
	void virtual f(){
		cout<<"A"<<endl;
	}
};
class B:public A{
public:
	void virtual f(){
		cout<<"B"<<endl;
	}
};

int main(){
	A * pa = new A();
	pa->f();
	B * pb = (B*)pa;
	pb->f();

	delete pa,pb;
	pa = new B();
	pa->f();

	pb = (B*)pa;
	pb->f();

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------11.02-----面试例题1
/*
#include <iostream>
#include <stdio.h>
class Parent{
public:
	Parent(int var=-1){
		m_nPub = var;
		m_nPtd = var;
		m_nPrt = var;
	}
public:
	int m_nPub;
protected:
	int m_nPtd;
private:
	int m_nPrt;
};
class Child1:public Parent{
public:
	int GetPub(){return m_nPub;}
	int GetPtd(){return m_nPtd;}
	int GetPrt(){return m_nPrt;}
};
class Child2:protected Parent{
public:
	int GetPub(){return m_nPub;}
	int GetPtd(){return m_nPtd;}
	int GetPrt(){return m_nPrt;}
};
class Child3:private Parent{
public:
	int GetPub(){return m_nPub;}
	int GetPtd(){return m_nPtd;}
	int GetPrt(){return m_nPrt;}
};

int main(){
	Child1 cd1;
	Child2 cd2;
	Child3 cd3;

	int nVar = 0;

	cd1.m_nPub = nVar;
	cd1.m_nPtd = nVar;
	nVar = cd1.GetPtd();

	cd2.m_nPub = nVar;
	nVar = cd2.m_nPtd;

	cd3.m_nPub = nVar;
	nVar = cd3.GetPtd();

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------11.03-----面试例题2
/*
#include <iostream>
#include <memory.h>
#include <assert.h>
using namespace std;
class A{
	char k[3];
public:
	virtual void aa(){};
};
class B : public virtual A{
	char j[3];
public:
	virtual void bb(){};
};
class C : public virtual B{
	char i[3];
public:
	virtual void cc(){};
};
int main(){
	cout<<"sizeof(A)"<<sizeof(A)<<endl;
	cout<<"sizeof(B)"<<sizeof(B)<<endl;
	cout<<"sizeof(C)"<<sizeof(C)<<endl;
	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------11.04-----面试例题4
/*
#include <iostream>
using namespace std;
class A{
	int m_nA;
};
class B{
	int m_nB;
};
class C:public A,public B{
	int m_nC;
};
int main(){
	C* pc = new C;
	B* pb = dynamic_cast<B*>(pc);
	A* pa = dynamic_cast<A*>(pc);

	cout<<pc<<endl;
	cout<<pb<<endl;
	cout<<(C*)pb<<endl;

	cout<<int(pc)<<endl;
	cout<<int(pb)<<endl;

	return 0;
}
*/