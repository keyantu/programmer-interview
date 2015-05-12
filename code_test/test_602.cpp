#include <stdlib.h>
#include <iomanip>
#include <iostream>
using namespace std;
/*
class C{

public:
	C(int i):m_Count(i) {}
	int incr() const{
		return ++m_Count;
	}
private:
	mutable int m_Count;
};
int main() {
	C c1(10);
	for (int tmp,i=0;i<10;i++)
	{
		tmp = c1.incr();
		cout<<setw(tmp)<<setfill(' ')<<tmp<<endl;
	}
	return 0;
}
*/
/*
在c++程序里面经常见到下面的头文件
#include <iomanip>
io代表输入输出，manip是manipulator（操纵器）的缩写(在c++上只能通过输入缩写才有效。）
▲setw(n)用法： 通俗地讲就是预设宽度
如 cout<<setw(5)<<255<<endl;
结果是:
(空格)(空格)255
▲setfill(char c) 用法 : 就是在预设宽度中如果已存在没用完的宽度大小，则用设置的字符c填充
如 cout<<setfill(‘@‘)<<setw(5)<<255<<endl;
结果是:
@@255
*/

