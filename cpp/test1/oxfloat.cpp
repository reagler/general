#include <iostream>
using namespace std;


int main()
{
	
	float x;
	int i,temp,bit;
	cout << "> "; // prompt
	while((cin >> x)!=0)
	{
		
		temp=(long &)x;
		cout << hex << (long &) x << endl; // cast by reference (don'tconvert)
		cout << dec << temp << endl;

		for(i=0;i<32;i++)
		{
			if((i+1)%8==0)
				cout<<i+1;
			else
				cout<<' ';
		}
		cout<<endl;
		for(i=0;i<32;i++)
		{
			if(i!=0&&i%8==0)
				cout<<' ';
			bit=temp&1;
			cout << bit;
			temp >>=1;
		}
		cout<<endl;
		cout << "> "; // prompt
	}
	return 0;
}
