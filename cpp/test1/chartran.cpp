#include <iostream>

using namespace std;

struct
{
	char a1;
	char a2;
	char a3;
}A, D[10];

struct
{
	long a1[10];
	short a2;
}B;

class M
{
private:
	bool a;
	int b;
	bool c;
};

class N
{
private:
	int a;
	bool b;
	bool c;
};

int main()
{
	char *ss1 = "0123456789";
	char ss2[] = "0123456789";
	
	cout << sizeof(ss1) << " ";
	cout << sizeof(ss2) << " ";
	cout << sizeof(D) << " ";
	cout << sizeof(B) << " ";

	int a;
	char b;
	int c;
	printf("0x%08x ",&a);
	printf("0x%08x ",&b);
	printf("0x%08x ",&c);
	cout << sizeof(M) << ' ' << sizeof(N) << endl;
	return 0;

}
