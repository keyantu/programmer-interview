#include <cstdio>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//------8.1-----面试例题1
/*
int mystrlen(char *buf, int n){
	if (buf[0]==0||n==0)
	{
		cout<<"000"<<endl;
		return 0;
	}
	else if(n==1)
	return 1;


	int t = mystrlen(buf,n/2);
	cout<<"t = mystrlen(buf,n/2)"<<t<<n/2<<endl;
	if (t<n/2)
	{
		cout<<"return t"<<t<<endl;
		return t;
	}
	else
	{
		cout<<"return (t+mystrlen(buf+n/2,(n+1)/2));"<<t+mystrlen(buf+n/2,(n+1)/2)<<(n+1)/2<<endl;
		return (t+mystrlen(buf+n/2,(n+1)/2));
	}
}

int main(){
	char buf[] = {'a','b','\0','c','d','e','f','x','y','z'};
	int i;
	i = mystrlen(buf,20);
	//cout<<i<<endl;
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------8.2-----面试例题2
//递归版本
/*
int walk(int x, int y){
	if (x==1)
		return y;
	if (y==1)
		return x;
	else
		return (walk(x-1,y)+walk(x,y-1));
}
//书上的非递归版本就是列矩阵
//把递归的值一个一个加起来
int f(int x,int y){
	int a[100][100];
	for (int in=0;in<100;in++)
	{
		a[0][in] = in+1;
		a[in][0] = in+1;
	}
	for (int i=1;i<100;i++)
	{
		for (int j=1;j<100;j++)
		{
			a[i][j] = a[i-1][j]+a[i][j-1];
		}
	}

	return a[x-1][y-1];
}
int main(){
	int x;
	//x = walk(0,2);
	//x = walk(2,0);
	//x = walk(3,4);
	x = f(3,4);
	cout<<x<<endl;
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------8.3-----面试例题1
//#include <iostream>
#include <string>
/*
int main() {
	int x=10;
	int y=10;
	int i;
	//该循环体第二次循环执行
	//执行步骤为
	//y=i;此时y=0;
	//i++;
	for (i=0;x>8;y=i++)
	{
		printf("%d,%d,",x--,y);
	}
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//------8.3-----面试例题3
//数组的长度只能靠函数参数传递进去
/*
void match(int a[],int b[],int k){
	int i=0,j=0;
	cout<<k<<endl;
	while (i<=k-1)
	{
		while (j<=k-1)
		{
			if (a[i] == b[j])
			{
				cout<<i<<j<<endl;
				break;
				
			}
			j++;
		}
		i++;
	}
}
int main(){
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int b[10] = {1,2,3,4,5,6,7,8,9,10};


	int k = sizeof(a)/sizeof(int);
	match(a,b,k);

	return 0;
}

*/