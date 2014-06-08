#include <iostream>

using namespace std;

class A1
{
public:
	int a;
	static int b;

	A1();
	~A1();
};

class A2
{
public:
	int a;
	char c;

	A2();
	int func(){printf("hello");}
	~A2();
};

class A3
{
public:
	float a;
	char b;

	A3();
	~A3();
};

class A4
{
public:
	float a;
	int b;
	char c;

	A4();
	~A4();
};

class A5
{
public:
	double d;
	float a;
	int b;
	char c;

	A5();
	~A5();
};


int main()
{
	int a[sizeof(int)];
	cout << sizeof(A1) << endl;
	cout << sizeof(A2) << endl;
	cout << sizeof(A3) << endl;
	cout << sizeof(A4) << endl;
	cout << sizeof(A5) << endl;
	cout << sizeof a << endl;
	return 0;
}