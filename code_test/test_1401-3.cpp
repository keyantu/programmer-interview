//�۲ͣ��۲ͣ�ͷһ���һ����
//��ð���ܺ���
//��������һ�ξ۲ͣ����ϰ��룬С�ϰ��С����ȥ
//�Ҹо����������˵����ҵ������
#include <stdlib.h>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//------14.01-----��������1
/*
int main(){
	int num = 12345;
	int j=0,i=0;
	char temp[7],str[7];
	
	while (num)
	{
		temp[i] = num%10+'0';
		i++;
		num = num/10;
	}
	temp[i] = 0;
	//reverse
	printf("%s",temp);
	i = i-1;
	while (i>=0)
	{
		str[j] = temp[i];
		j++;
		i--;
	}
	str[j] = 0;

	printf("%s",str);

	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------14.02-----��������1
/*
char* strcpy(char* strDest,const char* strSrc){
	assert((strDest!=NULL)&&(strSrc!=NULL));
	char *address = strDest;
	while ((strDest++=strSrc++)!='\0')
	NULL;
	return address;
}
*/
//------------------------------------------------------------------------------------------------
//------14.02-----��������2
/*
int main(){
	char s[] = "123456789";
	char d[] = "123";
	strcpy(d,s);
	cout<<d<<endl;
	cout<<s<<endl;
	return 0;
}
*/

//------------------------------------------------------------------------------------------------
//------14.02-----��������3
/*
void LoopMove(char* pStr,int steps){
	int n = strlen(pStr)-steps;
	char temp[MAX_LEN];

	strcpy(temp,pStr+n);
	strcpy(temp+steps,pStr);
	*(temp+strlen(pStr)) = "\0";
	strcpy(pStr,temp);
}
*/

//------------------------------------------------------------------------------------------------
//------14.03-----��������1
/*
int main(){
	//char str[2] = {"a","b"};
	//char str[2] = {'a','b'};
	char str[3][2] = {{'a','b'},{'a','b'},{'a','b'}};
	return 0;
}
*/
//�ַ�����ĳ�ʼ��Ҫ�����һ���ַ�����Ϊ'\0'
//char �ķ�Χ -128~127