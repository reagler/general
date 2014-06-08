#include <stdio.h>

class A
{
public:
	A() {m_a = 1; m_b = 2;}
	~A(){}
	void func(){printf("%d%d\n", m_a, m_b);}
private:
	int m_a;
	int m_b;
};

class B
{
public:
	B() {m_c = 3;}
	~B(){}
	void func(){printf("%d\n", m_c);}
private:
	int m_c;
};

void main()
{
	A a;
	B *pb = (B*)(&a);
	pb->func();
	printf("sizeof A = %d, B = %d\n", sizeof(A), sizeof(B));
}
