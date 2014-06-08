#include <iostream>
#include <vector>
#include <string>
using namespace std;

int hello()
{
	if (0)
		return 3;
}

int perm(int num[], int s, int e)
{
	if (s == e)
	{
		for (int i = 0; i <= e; i++)
		{
			cout << num[i] << ' ';
		}
		cout << endl;
		return 0;
	}

	for (int i = s; i <= e; i++)
	{
		int temp = num[s];
		num[s] = num[i];
		num[i] = temp;
		perm(num, s + 1, e);
		temp = num[s];
		num[s] = num[i];
		num[i] = temp;
	}
}

int main()
{
	cout << hello() << endl;
	vector<int> vi;
	vi.push_back(10);
	vi.push_back(10);
	vi.push_back(10);
	vi.push_back(10);
	cout << vi[0] << " length=" << vi.capacity()<< endl;
	string s;
	cout << "harry" + 1 << endl;
	int num[5] = { 0, 1, 2, 3, 4 };
	perm(num, 0, 4);
	getline(cin, s);
	return 0;
}
