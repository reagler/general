#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream input_data;
	input_data.open("input.data");
	int n;
	double x;
	input_data >> n >> x;
	char ch;
	input_data.get(ch);
	input_data.get(ch);
	input_data.close();
	cout << n << x << ch << endl;
	ofstream output_data;
	output_data.open("output.dat");
	output_data << "hello world\n" ;
	output_data.close();
	return 0;
}