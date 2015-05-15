#include <cstdio>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//------7.3-----面试例题2
/*
int max(int x,int y){
	return x>y?x:y;
}
int main(){
	int max(int ,int);
	int (*p) (int ,int ) = &max;
	int a =1,b=2;
	int d = (*p)(a,b);
	cout<<d<<endl;
	
	return 0;
}*/

//注意指针的加减法
