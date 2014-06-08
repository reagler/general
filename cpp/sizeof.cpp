#include <iostream>
using namespace std;

int main()
{
	int i,j;
	long l,m;
	long double a, b;
	printf("sizeof int=%lu\n", sizeof(int));
	printf("sizeof long=%lu\n", sizeof(long));
	printf("sizeof longlong=%lu\n", sizeof(long long));
	printf("sizeof pointer=%lu\n", sizeof(int *));
	printf("sizeof boolean=%lu\n", sizeof(bool));
	printf("sizeof short=%lu\n", sizeof(short));
	printf("sizeof float=%lu\n", sizeof(float));
	printf("sizeof double=%lu\n", sizeof(double));
	printf("sizeof long double=%lu\n", sizeof(long double));
	printf("int i=%p, j=%p\n", &i, &j);
	printf("long l=%p, m=%p\n", &l, &m);
	printf("long double a=%p, b=%p\n", &a, &b);
	return 0;
}