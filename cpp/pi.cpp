#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;
int main()
{
	double item=1, sum=0;
	for(int n=1;fabs(item)>1e-8;n++)
	{
		sum+=item;
		item*=(-1.0)*(2*n-1)/(2*n+1);
	}

	cout<<"Pi= "<<setiosflags(ios::fixed)<<setprecision(6)<<sum*4<<endl;

}