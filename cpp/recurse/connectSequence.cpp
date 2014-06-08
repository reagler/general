#include <iostream>

using namespace std;

int printcon(char *parStr, char *sonStr, int *printarr, int parlen, int sonlen, int index, int parstart, int sonstart);

int main()
{
	char parStr[20];  // abdbcca
	char sonStr[10];  // abc
	int printarr[10]={0};
	cout << "please input two string: " << endl;
	cin.getline(parStr, 19);
	cin.getline(sonStr, 9);
	cout << parStr << ' ' << sonStr << endl;
	printcon(parStr, sonStr, printarr, strlen(parStr), strlen(sonStr), 0, 0, 0);
	return 0;
}

int printcon(char *parStr, char *sonStr, int *printarr, int parlen, int sonlen, int index, int parstart, int sonstart)
{
	if(index == sonlen)
	{
		for(int i = 0; i < sonlen; i++)
		{
			cout << printarr[i] << ',';
		}
		cout << '\b' << endl;
	}
	for (int i= parstart; i < parlen; i++ )
	{
		for (int j = sonstart; j < sonlen; j++)
		{
			if(parStr[i] == sonStr[j])
			{
				printarr[index] = i+1;
				printcon(parStr, sonStr, printarr, parlen, sonlen, index+1,i+1, j+1);
				
			}
		}
	}
	return 0;
}
