#include <iostream>

using namespace std;

class Abc
{
public:
	Abc(){
		a = 0;
		cout << "Abc::default constructor\n";

	}
	Abc(int a){
		this->a = a;
		cout << "a = " << a << endl;
		cout << "Abc::a constructor\n";

	}
	~Abc()
	{
		cout << "~Abc" << endl;
	}
private:
	int a;
};

class BB{
public:
	BB(){
		abc = Abc(3);
		x = 0;
		cout << "BB: default constructor\n";
	}
	BB(int x, int a): x(x),abc(a){
		cout << this->x << endl;
		cout << "BB: initlist constructor\n";
	}
	/*BB(int x, int a){
		this->x = x;
		abc=Abc(a);
		cout << "BB: initlist constructor2\n";
	}*/
	~BB()
	{
		cout << "~BB" << endl;
	}
private:
	Abc abc;
	int x;
};

int maiddn()
{
	BB b = BB(2,33);
	return 0;
}