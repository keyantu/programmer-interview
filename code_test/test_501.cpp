#include <stdlib.h>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//---��������1
/*
int i = 1;
void main(){
	int i = i;
	//but
	//cout<<i<<endl;
}

//����������£�

--------------------Configuration: code_test - Win32 Debug--------------------
Compiling...
test_501.cpp
E:\for github\programmer-interview\code_test\test_501.cpp(5) : warning C4700: local variable 'i' used without having been initialized
Linking...

code_test.exe - 0 error(s), 1 warning(s)
*/

//------------------------------------------------------------------------------------------------
//---��������2
/*
int main()	{
	int x=2,y,z;
	x*=(y=z=5);
	cout<<x<<endl;

	z=3;
	x==(y=z);
	cout<<x<<endl;

	x=(y==z);
	cout<<x<<endl;

	x=(y&z);
	cout<<x<<endl;

	x=(y&&z);
	cout<<x<<endl;

	y=4;
	x=(y|z);
	cout<<x<<endl;

	x=(y||z);
	cout<<x<<endl;

	return 0;

}
*/
//����������£�
/*
--------------------Configuration: code_test - Win32 Debug--------------------
Compiling...
test_501.cpp
E:\for github\programmer-interview\code_test\test_501.cpp(34) : warning C4553: '==' : operator has no effect; did you intend '='?
  Linking...
  
code_test.exe - 0 error(s), 1 warning(s)
*/

//------------------------------------------------------------------------------------------------
//---��������3
/*
int func(int x)  {
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x-1);
	}
	return count;
}

int main()  {
	cout<<func(9999)<<endl;
	return 0;
}
*/

/*-------------------------------
���յ�BGM:
cv׹��-�ټ�������ɭ��
Rajor-����
-------------------------------*/