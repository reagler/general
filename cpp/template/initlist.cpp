#include <iostream>
#include <string>

using namespace std;

class A
{
	static const int Size = 0;
};

class base
{
private:
	int m_i;
	int m_j;
public:
	base(int i): m_j(i), m_i(m_j){}
	base():m_j(0), m_i(m_j){}
	int get_i(){return m_i;}
	int get_j(){return m_j;}
};

int amain()
{
	base obj(98);
	cout << obj.get_i() << endl << obj.get_j() << endl;
	return 0;
}