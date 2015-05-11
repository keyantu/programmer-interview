#include <stdlib.h>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//---面试例题1
//---第一段
/*
int main() {
	int a,x;
	for(a=0,x=0;a<=1&&!x++;a++)  {
		a++;
	}
	cout<<a<<x<<endl;

	return 0;
}
*/
//out:21

//---第二段
/*
int main() {
	int a,x;
	for(a=0,x=0;a<=1&&!x++;)  {
		a++;
	}
	cout<<a<<x<<endl;
	
	return 0;
}
*/
//out:12


//------------------------------------------------------------------------------------------------
//---面试例题2
/*
int main() {
	int a=3;

	printf("%d,%d",a,++a);
	printf("%d,%d",++a,a);
	return 0;
}
*/
//out 4,4
//说明printf里面计算参数时是从右往左压栈的