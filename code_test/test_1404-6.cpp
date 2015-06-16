//�ղ�ͷ�ε�һ��һ����ǰһ��
//�ҿ�����������λ�ϵ�
//ҩ����ͣ
//------------------------------------------------------------------------------------------------
//------14.04-----��������1
/*
iostream.h��input output stream�ļ�д����˼Ϊ��׼�����������ͷ�ļ�����������
��1��cin>>"Ҫ���������"
��2��cout<<"Ҫ���������"
��������������ķ�����Ҫ#include<iostream>������ͷ�ļ���

��׼����
��Ϊiostream��.h�����һ���֣�ͷ�ļ�<iostream��.h��>������һЩ�����ڱ�׼��������豸�Ͻ���������������Ķ���
��Щ�����Ϊ���飺�����ֽڵģ���������cin��cout��cerr��clog��
��������ֽڵĶ�Ӧ�����Ϊwcin��wcout��wcerr��wclog��
//cerr��Ӧ��׼��������������ʾ������Ϣ��Ĭ������±���������׼������������������壬Ҳ��˵������Ϣ����ֱ�ӷ��͵���ʾ����������ȵ������������µĻ��з�ʱ���ű���ʾ��һ������²����ض���

����
iostream��.h�����е�����ٶ����Ա��ԭ��ʹ�û������ͣ�����ͨ��ʹ�ø�����ʵ�������Զ�������͡���Ĭ�ϵ�char��wchar_t�͵�ʵ��������streampos��streamoff��streamsize�ֱ����Ա�ʾλ�á�ƫ�ƺʹ�С��
���ݷ�
���ݷ������������������в����Ĳ��루<<������ȡ��>>�������һͬʹ�õ�ȫ�ֺ���������ͨ������������Ժ͸�ʽ���á�endl��hex��scientific��һЩ���ݷ������ӡ�
*/
//------------------------------------------------------------------------------------------------
//------14.05-----��������1
//���ִ��������ִ�(��������������)
/*
#include <iostream>
#include <string>
#include <vector>
using namespace std;

pair<int,string> fun(const string& str){
	vector<string> substrs;
	int maxcount = 1,count = 1;
	string substr;
	int i,len = str.length();
	for (i=0;i<len;i++)
	{
		//cout<<str.substr(i,len-i)<<endl;
		substrs.push_back(str.substr(i,len-i));
	}

	for (i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			count = 1;
			//cout<<"i"<<i<<substrs[i].substr(0,j-i)<<endl;
			//cout<<"j"<<j<<substrs[j].substr(0,j-i)<<endl;
			if (substrs[i].substr(0,j-i) == substrs[j].substr(0,j-i) )
			{
				++count;
				
				for (int k =j+(j-i);k<len;k+=j-i)
				{
					cout<<"i"<<i<<substrs[i].substr(0,j-i)<<endl;
					cout<<"k"<<j<<substrs[k].substr(0,j-i)<<endl;
					if (substrs[i].substr(0,j-i) == substrs[k].substr(0,j-i) )
					{
						++count;
						cout<<substrs[i].substr(0,j-i)<<substrs[k].substr(0,j-i)<<count<<endl;
					}
					else
						break;
				}
				if (count>maxcount)
				{
					maxcount = count;
					substr = substrs[i].substr(0,j-i);
				}
			}
		}
	}
	return make_pair(maxcount,substr);
}

int main(){
	string str;
	pair<int,string> rs;
	while (cin>>str)
	{
		rs = fun(str);
	}
	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------14.05-----��������2
//����ִ�������ҳ�������Ӵ�-�Ƚ������ַ����Ĺ���ǰ��
/*
pair<string, int> func2(string str)
{
	string strTemp;
	int i, j;
	int iLen = str.length();
	for (i = 0; i < iLen; i++)
	{
		for (j = iLen; j > 1; j--)  
		{
			if (i + j <= iLen)  
			{
				size_t pos1, pos2;
				strTemp = str.substr(i, j);
				pos1 = str.find(strTemp);
				pos2 = str.rfind(strTemp);
				if (pos1 != pos2)  
				{
					return make_pair(strTemp, pos1 + 1);
				}
			}
		}
	}
	return make_pair("", -1);
}
*/
//------------------------------------------------------------------------------------------------
//------14.05-----��������3
//�������ַ������ַ��ִ�λ���Ժ����е��ַ�
/*
#include <iostream>
using namespace std;
const char* strstr1(const char* str, const char* strCharSet){
	for (int i=0;str[i]!='\0';i++)
	{
		int j = 0;
		int temp = i;
		if (str[i] == strCharSet[j])
		{
			while (str[i++] == strCharSet[j++])
			{
				if ((strCharSet[j]=='\0'))
				{
					return &str[i-j];
				}
				i = temp;
			}
		}
	}
	return NULL;
}
*/
//------------------------------------------------------------------------------------------------
//------14.05-----��������4
//һ�仰�е��ʵ���
/*
#include <iostream>

using namespace std;

char *strReverse(char * sourcestr)
{
	int j = 0, i = 0,begin,end;
	char *str = sourcestr;
	char temp;
	j = strlen(str) - 1;
	cout << " string = " << str << endl;

	while (j > i)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		j --;
		i ++;
	}
	cout << " string = " << str << endl;
	

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
		{
			begin = i;
			while (str[i] && str[i] != ' ')
			{
				end = i;
				i++;
			}
			if (str[i] == '\0') //???????
			{
				i--;
			}
		}
		while (end > begin)
		{
			temp = str[begin];
			str[begin] = str[end];
			str[end] = temp;
			end --;
			begin ++;
		}
		i ++;
	}
	cout << " string = " << str << endl;
	return str;
}

int main()
{
	char str[] = "I come from Tianjin.";
	strReverse(str);
	return 0;
}
*/
//------------------------------------------------------------------------------------------------
//------14.05-----��������5
/*
#include <iostream>
using namespace std;
typedef int Type;
Type Count1InAInteger(Type n)
{
	Type iNum=0;
	while(n!=0)
	{
		iNum+=(n%10==1)?1:0;
		n/=10;
	}
	return iNum;
}
Type f(Type n)
{
	Type iCount=0;
	for(Type i=1;i<=n;i++)
	{
		iCount+=Count1InAInteger(i);
	}
	return iCount;
}
Type Sum(Type n)
{
	Type Count = 0;
	Type Factor = 1; 
	Type LowerNum = 0;
	Type CurrNum = 0;
	Type HigherNum = 0;
	while(n/Factor != 0)
	{
		LowerNum = n - (n / Factor) * Factor;
		CurrNum = (n / Factor)%10;
		HigherNum = n /(Factor *10);
		switch(CurrNum)
		{
		case 0:
			Count += HigherNum * Factor;
			break;
		case 1:
			Count += HigherNum * Factor + LowerNum +1 ;
			break;
		default:
			Count += (HigherNum + 1) * Factor;
			break;
		}
		Factor *= 10;
	}
	return Count;
}
int main()
{
	Type num;
	cin>> num;
	
	cout << Sum(num) << endl;	
	cout << f(num) << endl;
	return 1;
}
*/
//------------------------------------------------------------------------------------------------
//------14.06-----��������1
/************************************************************************
ת���ַ�����ʽΪԭ���ַ�������ַ�+���ַ��������ֵĸ�����
���磺1233422222 ת��Ϊ1121324125��1����1�Σ�2����1�Σ�3����2��...... 
*************************************************************************/ 
/*
#include<iostream>   
#include<cstring>  
#include<cstdlib>  
using namespace std;  
void convert(char input[],char output[])  
{  
	
    int count = 1;  
    char *fast = input;  
    char *slow = input;  
	
    while(*(++fast)!='\0')  
    {  
        if(*fast == *slow)//�����ǰ������ַ�������ͳ�Ƶ�һ������ô���ִ���Ҫ++   
        {  
            count++;  
            continue;  
        }  
        // ������ָ�벻ͬʱ��ִ���±����  
        if(slow<fast)  //ע�ⲻ��д��while ��ʽ ��ΪҪ���ظ�������ֻ����һ��  
        { 
            *output++=*slow++;   
        } 
        *output++=count+'0';  //�����ִ�����������ֺ��  
        slow = fast;  //  ��ָ��ָ���ָ�� ����ͳ��  
        count = 1;  //����������Ϊ��ʼֵ  
    }  
    *output++=*slow;  // ��ָ������ѭ��ʱ��ָ����û������ѭ������count������ȷ  
    *output++=count+'0';//��Ϊ����'\0'ѭ���˳������һ���������ַ�����û�����������������׷�����   
    *output='\0'; 
}  
int main() 
{ 
    char input[]="1233422222"; 
    char output[30]={0}; 
    convert(input,output); 
    cout<<"output is "<<output<<endl;
	return 0;
} 
*/
//------------------------------------------------------------------------------------------------
//------14.06-----��������2
/*
void fun(char* w,int m){
	int i =0;
	int len = strlen(w);
	if(m>len) m = len;

	while (len-m>0||(m=0)!=0)
	{
		for (i=0,w[len]=w[0],++m;i<len;i++)
		{
			w[i] = w[i+1];
		}
		w[len-m] = '\0';
	}
}
*/
