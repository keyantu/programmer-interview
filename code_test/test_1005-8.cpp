//------------------------------------------------------------------------------------------------
//------10.05-----面试例题1
/*
class String
{
public:
	String(const char *str=NULL); //构造函数
	String(const String &other); //拷贝构造函数
	~String(void); //析构函数
	String& operator=(const String &other); //等号操作符重载
	
private:
	char *m_data; //指针
};


String::~String()
{
    delete [] m_data; //析构函数，释放地址空间
}
String::String(const char *str)
{
    if (str==NULL)//当初始化串不存在的时候，为m_data申请一个空间存放'\0'；
	{
        m_data=new char[1];
        *m_data='\0';
	}
    else//当初始化串存在的时候，为m_data申请同样大小的空间存放该串；
	{
        int length=strlen(str);
        m_data=new char[length+1];
        strcpy(m_data,str);
	}
}


String::String(const String &other)//拷贝构造函数，功能与构造函数类似。
{
    int length=strlen(other.m_data);
    m_data=new [length+1];
    strcpy(m_data,other.m_data);
}
String& String::operator =(const String &other)
{
    if (this==&other)//当地址相同时，直接返回；
        return *this; 
	
    delete [] m_data;//当地址不相同时，删除原来申请的空间，重新开始构造；
	
    int length= strlen (other.m_data);
    m_data=new [length+1];
    strcpy(m_data,other.m_data);
	
    return *this; 
}
*/

//------------------------------------------------------------------------------------------------
//------10.07-----面试例题1

