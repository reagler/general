#include <iostream>
#include <cstring>
using namespace std;

class classA
{
 public:
	classA()
	{
		clear();
	}
	virtual ~classA()
	{
	}
	void clear()
	{
		memset(this , 0 , sizeof(*this));
	}
	virtual void func()
	{
		printf("func\n");
	}
};

class classB : public classA
{
};

int main(void)
{
	classA oa;
	classB ob;
	classA * pa0 = &oa;
	classA * pa1 = &ob;
	classB * pb = &ob;
	oa.func(); // 1
	ob.func(); // 2
	pa0->func(); // 3
	pa1->func(); // 4
	pb->func(); // 5
	return 0;
}