#include <iostream>
#include <string>

using namespace std;

class A{
public:
	A(){ printf("class A construction.\n"); }
	~A(){ printf("class A destroy.\n"); }
	void funcA(){ printf("A::funcA run.\n"); }
	virtual void funcB(){ printf("A::funcB run.\n"); }
};

class B:public A{
public:
	B(){ printf("class B construction.\n"); }
	~B(){ printf("class B destroy.\n"); }
	void funcA(){ printf("B::funcA run.\n"); }
	virtual void funcB(){ printf("B::funcB run.\n"); }
};

int mainaaa()
{
	A *a = new B();
	B b;
	a->funcA();
	a->funcB();
	b.funcA();
	b.funcB();
	delete a;
	int x =3;

	
	abc += "fd";
	abc += 97;
	cout << abc << endl;
	return 0;
}
