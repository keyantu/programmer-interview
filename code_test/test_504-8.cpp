#include <stdlib.h>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//---5.4---��������1
/*
#include <string.h>
#include <conio.h>
int main(){
	float a = 1.0f;
	//int a = 1;
	cout<<(int)a<<endl;
	cout<<&a<<endl;
	cout<<(int&)a<<endl;
	cout<<boolalpha<<((int)a==(int&)a)<<endl;

	float b = 0.0f;
	cout<<(int)b<<endl;
	cout<<&b<<endl;
	cout<<(int&)b<<endl;
	cout<<boolalpha<<((int)b==(int&)b)<<endl;	

	return 0;
}
*/
//---���鸡�����ڼ�����еĴ洢

//------------------------------------------------------------------------------------------------
//---5.4---��������2
/*
#include <stdio.h>
int main() {
	unsigned int a = 0xFFFFFFF7;
	unsigned char i = (unsigned char)a;
	char* b = (char*)&a;

	printf("%08x,%08x",i,*b);

	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//---5.5---��������1
/*
int main()  {
	unsigned char a =0xA5;
	unsigned char b =~a>>4+1;
	//cout<<b<<endl;
	printf("%d",b);

	return 0;
}
//out:250
*/

//------------------------------------------------------------------------------------------------
//---5.5---��������2
/*
!x&(x-1)
2pown
*/

//------------------------------------------------------------------------------------------------
//---5.5---��������3
/*
int f(int x,int y){
	return (x&y)+((x^y)>>1);
}
int main(){
	int y;
	y = f(729,271);
	cout<<y<<endl;

	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//---5.5---��������4
//λ����ʵ���������ļӷ�����
/*
int f(int x,int y){
	return ((x&y)<<1)+(x^y);
}
int main(){
	int y;
	y = f(9,271);
	cout<<y<<endl;
	
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//---5.8---��������1
/*
int main(){
	int n = 'c';
	switch (n++)
	{
	default:
		printf("error");
		break;
	case 'a':
	case 'A':
	case 'b':
	case 'B':
		printf("ab");
		break;
	case 'c':
	case 'C':
		printf("c");
		
	case 'd':
	case 'D':
		printf("d");
		
	}
	return 0;
}
*/


//------------------------------------------------------------------------------------------------
//---5.8---��������2
/*
int cal_score(int score[],int judge_type[],int n)  {
	int index = n;
	double sum1,sum2;
	int index1,index2;
	for (int i=0;i<index;i++)
	{
		switch (judge_type[i])
		{
		case 1:
			sum1+=score[i];
			index1+=1;
			break;
		case 2:
			sum2+=score[i];
			index2+=1;
			break;
		default:;
		}
	}
	sum1 = sum1/index1;
	sum2 = sum2/index2;
	return (int)(sum1*0.6+sum2*0.4);
}

int main() {
	int score[];
	int judge_type[];
	int n;
}
*/
//����1:if(n&&score&&judge_type)�ķ����ж�
//����2:���ֿ��ܳ���С����Ҫ��double
//����3:����N��������Ҫ������
//����4:��������ʱҪ�жϱ���������