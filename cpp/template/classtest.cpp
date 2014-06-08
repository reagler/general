#include <iostream>
#include <string>

#include <vector>

using namespace std;

class B
{
private:
	int data;
	int aaa;
public:
	B()
	{
		cout << "default constructor" << endl;
	}
	~B()
	{
		cout << "destructed "<< << endl;
	}
	B(int i): data(i)
	{
		cout << "constructed by paramter " << data << endl;
	}
};

B Play(B b)
{
	return b;
}

int main()
{
	B temp = Play(5);
	B temp1 = 3;
	return 0;
}