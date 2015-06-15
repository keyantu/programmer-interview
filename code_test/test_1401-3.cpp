//聚餐，聚餐，头一天比一天晕
//感冒还能好嘛
//周六还有一次聚餐，大老板请，小老板带小孩过去
//我感觉这个梗可以说到毕业，哈哈
#include <stdlib.h>
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------------------------
//------14.01-----面试例题1
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
//------14.02-----面试例题1
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
//------14.02-----面试例题2
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
//------14.02-----面试例题3
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
//------14.03-----面试例题1
/*
int main(){
	//char str[2] = {"a","b"};
	//char str[2] = {'a','b'};
	char str[3][2] = {{'a','b'},{'a','b'},{'a','b'}};
	return 0;
}
*/
//字符数组的初始化要求最后一个字符必须为'\0'
//char 的范围 -128~127