#include <iostream>

using namespace std;

class Base {
public:
	Base() {
		printf("Base.Base()\n");
	}
	~Base() {
		printf("Base.~Base()\n");
	}
	 static void hello() {
		printf("Base.hello()\n");
	}
	virtual void world() {
		printf("Base.world()\n");
	}
};

class Derive : public Base {
public:
	Derive() {
		printf("Derive.Derive()\n");
	}
	~Derive() {
		printf("Derive.~Derive()\n");
	}
	static void hello() {
		printf("Derive.hello()\n");
	}
	void world() {
		printf("Derive.world()\n");
	}
};

int main()
{
	Base *d = new Derive();
	d->hello();
	d->world();
	return 0;
}