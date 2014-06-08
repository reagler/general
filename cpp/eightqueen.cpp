#include <iostream>

using namespace std;

int number=0, count = 0;
int square[10][10]={};

int queen(int line)
{
	int flag =0;
	if(line==number)
	{
		/*for(int i=0; i< number; i++)
		{
			for(int j=0; j< number; j++)
			{
				cout << (square[i][j]==0?'.':'*') << ' ';
			}
			cout << endl;
		}
		cout << endl;*/
		count++;
		return 0;
	}
	for(int i = 0; i< number; i++)
	{
		for(int j = line-1; j >=0; j--)
		{
			if(square[j][i]!=0)
			{
				flag = 1;
				break;
			}
		}
		for(int j = line -1,  k =i - 1; j>=0 && k >=0; j--,k--)
		{
			if(square[j][k]!=0)
			{
				flag = 1;
				break;
			}
		}
		for(int j = line -1, k =i + 1; j>=0 && k <number; j--,k++)
		{
			if(square[j][k]!=0)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
		{
			flag = 0;
			continue;
		}
		square[line][i] = 1;
		queen(line + 1);
		square[line][i] = 0;
	}

}

int main()
{
	freopen
	cout << "please input the queen number: ";
	
	cin >> number;
	cout << "number = " << number << endl;;

	queen(0);
	cout << "count = " << count << endl;
	return 0;
}