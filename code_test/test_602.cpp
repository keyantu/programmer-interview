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
��c++�������澭�����������ͷ�ļ�
#include <iomanip>
io�������������manip��manipulator��������������д(��c++��ֻ��ͨ��������д����Ч����
��setw(n)�÷��� ͨ�׵ؽ�����Ԥ����
�� cout<<setw(5)<<255<<endl;
�����:
(�ո�)(�ո�)255
��setfill(char c) �÷� : ������Ԥ����������Ѵ���û����Ŀ�ȴ�С���������õ��ַ�c���
�� cout<<setfill(��@��)<<setw(5)<<255<<endl;
�����:
@@255
*/

