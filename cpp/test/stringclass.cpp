#include <iostream>
#include <cstring>

using namespace std;

class String
{
public:
	String(const char* str = NULL);
	String(const String &other);
	~String(void);
	String & operator=(const String &other);

private:
	char *m_data;
};

String::~String(void)
{
	printf("~String\n");
	delete [] m_data;
}

String::String(const char *str)
{
	printf("default String\n");
	if(str == NULL)
	{
		m_data = new char[1];
		*m_data = '\0';
		return;
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}
}
String::String(const String &other)
{
	printf("copy String\n");
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
}

String & String::operator=(const String &other)
{
	printf("operator = \n");

	if(this == &other)
		return *this;
	delete [] m_data;
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);

	return *this;
}

int mafdsfin()
{
	String s1("hello");
	String s2 = s1;
	String s3;
	s3 = s2;
	cout << "--------------\n";
	String a=String("fdsafd");
	return 0;
}
