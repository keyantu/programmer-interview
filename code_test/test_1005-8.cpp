//------------------------------------------------------------------------------------------------
//------10.05-----��������1
/*
class String
{
public:
	String(const char *str=NULL); //���캯��
	String(const String &other); //�������캯��
	~String(void); //��������
	String& operator=(const String &other); //�ȺŲ���������
	
private:
	char *m_data; //ָ��
};


String::~String()
{
    delete [] m_data; //�����������ͷŵ�ַ�ռ�
}
String::String(const char *str)
{
    if (str==NULL)//����ʼ���������ڵ�ʱ��Ϊm_data����һ���ռ���'\0'��
	{
        m_data=new char[1];
        *m_data='\0';
	}
    else//����ʼ�������ڵ�ʱ��Ϊm_data����ͬ����С�Ŀռ��Ÿô���
	{
        int length=strlen(str);
        m_data=new char[length+1];
        strcpy(m_data,str);
	}
}


String::String(const String &other)//�������캯���������빹�캯�����ơ�
{
    int length=strlen(other.m_data);
    m_data=new [length+1];
    strcpy(m_data,other.m_data);
}
String& String::operator =(const String &other)
{
    if (this==&other)//����ַ��ͬʱ��ֱ�ӷ��أ�
        return *this; 
	
    delete [] m_data;//����ַ����ͬʱ��ɾ��ԭ������Ŀռ䣬���¿�ʼ���죻
	
    int length= strlen (other.m_data);
    m_data=new [length+1];
    strcpy(m_data,other.m_data);
	
    return *this; 
}
*/

//------------------------------------------------------------------------------------------------
//------10.07-----��������1

