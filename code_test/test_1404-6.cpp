//刚才头晕的一阵一阵，眼前一黑
//幸亏我是坐在座位上的
//药不能停
//------------------------------------------------------------------------------------------------
//------14.04-----面试例题1
/*
iostream.h是input output stream的简写，意思为标准的输入输出流头文件。它包含：
（1）cin>>"要输入的内容"
（2）cout<<"要输出的内容"
这两个输入输出的方法需要#include<iostream>来声明头文件。

标准对象
作为iostream（.h）库的一部分，头文件<iostream（.h）>声明了一些用来在标准输入输出设备上进行输入输出操作的对象。
这些对象分为两组：面向单字节的，即常见的cin、cout、cerr和clog；
其面向宽字节的对应物，声明为wcin、wcout、wcerr和wclog。
//cerr对应标准错误流，用于显示错误消息。默认情况下被关联到标准输出流，但它不被缓冲，也就说错误消息可以直接发送到显示器，而无需等到缓冲区或者新的换行符时，才被显示。一般情况下不被重定向

类型
iostream（.h）库中的类很少对其成员的原型使用基本类型，而是通常使用根据其实例的特性定义的类型。对默认的char和wchar_t型的实例，类型streampos、streamoff和streamsize分别用以表示位置、偏移和大小。
操纵符
操纵符是用来与对流对象进行操作的插入（<<）和提取（>>）运算符一同使用的全局函数。它们通常变更流的属性和格式设置。endl、hex和scientific是一些操纵符的例子。
*/
//------------------------------------------------------------------------------------------------
//------14.05-----面试例题1
//出现次数最多的字串(必须是连续出现)
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
//------14.05-----面试例题2
//求出现次数最多且长度最长的子串-比较相邻字符串的公共前驱
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
//------14.05-----面试例题3
