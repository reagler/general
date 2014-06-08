#include <iostream>

using namespace std;

class B
{
public:
	void print(int n) const;
};

void B::print(int n) const
{
	cout << n << endl;
}

class D: public B
{
public:
	void print(int n) const;
	D(int a=3){}
};

void D::print(int n) const
{
	if(n <= 1) B::print(n);
	else if (n % 2 == 0) print(n / 2);
	else print(3 * n + 1);
}

class Clock
{
public:
	Clock(bool a){ m = a;}
	virtual int getdata()
	{
		return m;
	}
	int abc()
	{
		return 1;
	}
private:
	bool m;
};

class AClock: public Clock
{
public:
	AClock(int x, bool a): Clock(a)
	{
		s = x;
	}
	int getdata(int a)
	{
		return a+s+abc();
	}
private:
	int s;
};
int maidfdn()
{
	D d;
	d.print(3);
	Clock aaa();
	cout << "helloa" << endl;
	return 0;
}
