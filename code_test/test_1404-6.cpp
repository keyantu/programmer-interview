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
