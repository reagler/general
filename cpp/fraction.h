#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>

using namespace std;

class Fraction
{
public:
	// 0/1
	Fraction();
	// t/1
	explicit Fraction(int t);

	// t/b
	Fraction(int t, int b);

	int numerator() const;

	int denominator() const;

	Fraction& operator+=(const Fraction& right);

	Fraction& operator++(); // prefix form
	Fraction operator++(int unused); // postfix form

	operator double() const; // change to double

	int compare(const Fraction& right) const;

private:
	void normalize();

	int gcd(int n, int m);
	int top;
	int bottom;

};

Fraction operator+(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& left, const Fraction& right);
Fraction operator*(const Fraction& left, const Fraction& right);
Fraction operator/(const Fraction& left, const Fraction& right);
Fraction operator-(const Fraction& value);

bool operator<(const Fraction& left, const Fraction& right);
bool operator<=(const Fraction& left, const Fraction& right);
bool operator==(const Fraction& left, const Fraction& right);
bool operator!=(const Fraction& left, const Fraction& right);
bool operator>=(const Fraction& left, const Fraction& right);
bool operator>(const Fraction& left, const Fraction& right);

ostream& operator<<(ostream& out, const Fraction& value);
istream& operator>>(istream& in, Fraction& r);

#endif
