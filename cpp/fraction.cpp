#include "fraction.h"
#include <cassert>
#include <stdexcept>

int Fraction::gcd(int n, int m)
{
	assert((n > 0) && (m > 0));
	while (n != m)
	{
		if (n < m)
			m = m - n;
		else
			n = n - m;
	}
	return n;
}

Fraction::Fraction(int t, int b) : top(t), bottom(b)
{
    cout << "------full constructor------" << endl;
	normalize();
}

Fraction::Fraction() : top(0), bottom(1) {
    cout << "------default constructor------" << endl;
}

Fraction::Fraction(int t) : top(t), bottom(1) {
    cout << "------half constructor------" << endl;
}

int Fraction::numerator() const
{
	return top;
}

int Fraction::denominator() const
{
	return bottom;
}

void Fraction::normalize()
{
	int sign = 1;
	if (top < 0)
	{
		sign = -1;
		top = -top;
	}
	if (bottom < 0)
	{
		sign = -sign;
		bottom = -bottom;
	}
	assert(bottom != 0);
	int d = 1;
	if (top > 0)
	    d = gcd(top, bottom);
	top = sign * (top / d);
	bottom = bottom / d;
}

Fraction operator+(const Fraction& left, const Fraction& right)
{
	Fraction result(left.numerator() * right.denominator() + right.numerator() * left.denominator(), left.denominator() * right.denominator());
	return result;
}

Fraction operator-(const Fraction& left, const Fraction& right)
{
	Fraction result(left.numerator() * right.denominator() - right.numerator() * left.denominator(), left.denominator() * right.denominator());
	return result;
}

Fraction operator*(const Fraction& left, const Fraction& right)
{
	Fraction result(left.numerator() * right.numerator(), left.denominator() * right.denominator());
	return result;
}

Fraction operator/(const Fraction& left, const Fraction& right)
{
	Fraction result(left.numerator() * right.denominator(), left.denominator() * right.numerator());
	return result;
}

Fraction operator-(const Fraction& value)
{
	Fraction result(-value.numerator(), value.denominator());
	return result;
}

int Fraction::compare(const Fraction& right) const
{
	return numerator() * right.denominator() - denominator() * right.numerator();
}

bool operator<(const Fraction& left, const Fraction& right)
{
	return left.compare(right) < 0;
}

bool operator<=(const Fraction& left, const Fraction& right)
{
	return left.compare(right) <= 0;
}

bool operator==(const Fraction& left, const Fraction& right)
{
	return left.compare(right) == 0;
}

bool operator!=(const Fraction& left, const Fraction& right)
{
	return left.compare(right) != 0;
}

bool operator>=(const Fraction& left, const Fraction& right)
{
	return left.compare(right) >= 0;
}

bool operator>(const Fraction& left, const Fraction& right)
{
	return left.compare(right) > 0;
}

ostream& operator<<(ostream& out, const Fraction& value)
{
	out << value.numerator() << "/" << value.denominator();
	return out;
}

istream& operator>>(istream& in, Fraction& r)
{
	int t, b;
	in >> t;
	char c;
	in >> c;
	if (c == '/')
	{
		in >> b;
	} else {
		in.putback(c);
		b = 1;
	}
	r = Fraction(t, b);
	return in;
}

Fraction::operator double() const
{
    cout << "--------double convert--------" << endl;
	return static_cast<double>(top) / bottom;
}


Fraction& Fraction::operator++()
{
	top += bottom;
	return *this;
}

Fraction Fraction::operator++(int unused)
{
	Fraction clone(top, bottom);
	top += bottom;
	return clone;
}

Fraction& Fraction::operator+=(const Fraction& right)
{
	top = top * right.denominator() + bottom * right.numerator();
	bottom *= right.denominator();
	normalize();
	return *this;
}
