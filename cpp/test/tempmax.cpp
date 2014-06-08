#include <iostream>
#include <string>

using namespace std;

template <class T>
T maxx(T a, T b)
{
	return a>b?a:b;
}

int maint()
{
	int a = 10, b = 11;
	printf("max = %d\n", maxx(a, b));
	string c="abcdefg";
	string d= "abcdeg";
	cout << "max = " << maxx(c, d);
	return 0;
}