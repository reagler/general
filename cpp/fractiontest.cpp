#include "fraction.h"

int main()
{
	Fraction a;
	Fraction b(4);
	Fraction c(6, 8);
	cout << "Constructed values " << a << ' ' << b << ' ' << c << endl;
	Fraction d(c);
	cout << "Value of d is " << d.numerator() << '/' << d.denominator() << endl;
	d = b + c;
	cout << "4 + 3/4 is " << d << endl;
	d = b - c;
	cout << "4 - 3/4 is " << d << endl;
	Fraction e = (b + (-c));
	cout << e << "Done with negation" << endl;

	if (d == e)
	{
		cout << "Subtraction test successful" << endl;
	} else {
		cout << "Subtraction test failed" << endl;
	}

	a = Fraction(6, 8);
	b = Fraction(7, 8);
	if (a < b)
		cout << "Compare successful" << endl;

    cout << "--------xxxxxxx------------------" << endl;
    Fraction g = Fraction(10,7);
    cout << g << endl;
    cout << g + 4 << endl;
	return 0;
}
