//前几天不舒服加胳膊疼缓了一下
//看来还是需要运动
//------------------------------------------------------------------------------------------------
//------9.1-----面试例题1
/*
#include <iostream>
#include <vector>
using namespace std;
void print (vector<int> v){
	cout<<"\n vector size is:"<<v.size()<<endl;
	vector<int>::iterator p=v.begin();
}
int main(){
	vector<int> vec;
	vec.push_back(34);
	vec.push_back(23);
	print(vec);
	vector<int>::iterator p ;
	p = vec.begin();
	*p = 69;
	*(p+1) = 70;
	print(vec);
	vec.pop_back();
	print(vec);
	vec.push_back(101);
	vec.push_back(102);
	int i = 0;
	while (i<vec.size())
		cout<<vec[i++]<<" ";

	cout<<endl;

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------9.1-----面试例题2
/*
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

class CDemo{
public:
	CDemo():str(NULL) {};
	~CDemo()
	{
		if (str)
			delete []str;
	}
	char* str;
};
int main(){
	CDemo d1;
	d1.str = new char[32];
	strcpy(d1.str,"trend micro");

	vector<CDemo> *a1 = new vector<CDemo> ();

	a1->push_back(d1);
	//cout<<*a1.str<<endl;

	delete a1;

	return 0;
}
*/

//------------------------------------------------------------------------------------------------
//------9.2-----面试例题2
//泛型编程
/*
const int * find1(const int* array,int n, int x){
	const int* p = array;
	for (int i=0;i<n;i++)
	{
		if (*p==x)
		{
			return p;
		}
		++p;
	}
	return 0;
}

template <typename T>
const T* find1(const T* array, T n, T x)
*/

//------------------------------------------------------------------------------------------------
//------9.3-----面试例题1
/*
#include <iostream>
using namespace std;

template<typename T>
class Operate{
	public:
		static T Add(T a, T b){
			return a+b;
		}
		static T Mul(T a, T b){
			return a*b;
		}
		static T Judge(T a, T b){
			if (a>=0)
			{
				return a;
			}
			else if (b==0)
			{
				return a;
			}
			return a/b;
		}
};

int main(){
	int A,B,C,D,E,x,y,z;
	A=1,B=2,C=3,D=4,E=5;
	x = Operate<int>::Add(A,B);
	y = Operate<int>::Mul(C,D);
	z = Operate<int>::Judge(E,B);
	cout<<x<<y<<x<<endl;

	return 0;
}
*/

//------------------------------------------------------------------------------------------------
//------9.3-----面试例题2
//但是有错误
/*
#include <iostream>
using namespace std;
template<typename t>
struct tcontainer{
	virtual void push(const t&) = 0;
	virtual void pop() = 0;
	virtual const t& begin() = 0;
	virtual const t& end() = 0;
	virtual size_t size() = 0;
};
template<typename t>
struct tvector:public tcontainer<t>{
	static const size_t _step = 100;

	tvector(){
		_size = 0;
		_cap = _step;
		buf = 0;
		re_capacity(_cap);
	}

	~tvector(){
		free(buf);
	}

	void re_capacity(size_t s){
		if (!buf)
		{
			buf = (t*)malloc(sizeof(t)*s);
		} 
		else
		{
			buf = (t*)realloc(buf,sizeof(t)*s);
		}
	}

	virtual void push(const t& v){
		if (_size>=_cap)
		{
			re_capacity(_cap += _step);
		}
		buf[_size++] = v;
	}

	virtual void pop(){
		if (_size)
		{
			_size--;
		}
	}

	virtual const t& begin(){
		return buf[0];
	}
	
	virtual const t& end(){
		if (_size)
		{
			return buf[_size-1];
		}
	}
	virtual size_t size(){
		return _size;
	}

	const t& operator[] (size_t i){
		if (i>=0&&i<_size)
		{
			return buf[i];
		}
	}

	private:
		size_t _size;
		size_t _cap;
		t* buf;
};

int main(){
	tvector<int> v;
	for (int i = 0; i<300; i++)
	{
		v.push(i);
	}
	for (int i = 0; i<300; i++)
	{
		cout<<v[i]<<endl;
	}
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------9.3-----面试例题3
/*
#include <stdio.h>
#include <vector>
using namespace std;
bool used[100];
vector<long> v;
void dfs(int k, long a){
	if(k&&a%k!=0)
		return;
	if (k==3)
	{
		v.push_back(a);
		return;
	}

	for(int i =1;i<=3;i++)
		if(!used[i]){
			used[i] = 1;
			dfs(k+1,a*10+i);
			used[i] = 0;
		}
}
int main(){
	dfs(0,0);
	for (int i =0;i<v.size();i++)
	{
		printf("%ld+",v[i]);
	}
	getchar();
}
*/