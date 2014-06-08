#include <iostream>
#include <string>

using namespace std;

char var[19];
int test(char var[])
{
	return sizeof(var);
}

int main()
{
	string strArr1[] = {"Trend", "Micro","Soft"};
	string *pStrArr1 = new string[2];
	pStrArr1[0]="US";
	pStrArr1[1]="CN";

	for(int i = 0; i < sizeof(strArr1)/sizeof(string); i++)
		cout << strArr1[i];
	for(int i = 0; i < sizeof(pStrArr1)/sizeof(string); i++)
		cout << pStrArr1[i];
	cout << sizeof(string)<< endl;
	cout << sizeof strArr1<< endl;
	cout << sizeof 3<< endl;
	cout << test(var) << endl;
	return 0;
}
