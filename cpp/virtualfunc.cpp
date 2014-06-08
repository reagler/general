#include <iostream>

using namespace std;

class A{
public:
    void print(){
    	hello();
    }
    virtual void hello(){
    	cout << "base hello" << endl;
    }
};

class B : public A {
public:
	void hello() {
		cout << "derive hello" << endl;
	}
};

int main()
{
	B b;
    b.print();
	return 0;
}