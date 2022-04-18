#pragma once
#include "Pair.h"
#include <string>
#include <sstream>
using namespace std;
class Fraction : public Pair
{
public:
	Fraction();
	Fraction(const int, const int);
	Fraction(Fraction&);

	friend bool operator < (Fraction x, Fraction y);
	friend bool operator <= (Fraction x, Fraction y);
	friend bool operator > (Fraction x, Fraction y);
	friend bool operator >=(Fraction x, Fraction y);
	friend bool operator == (Fraction x, Fraction y);
	friend bool operator != (Fraction x, Fraction y);

	Fraction& operator = (Fraction& s);
	friend ostream& operator << (ostream&, Fraction&);
	friend istream& operator >> (istream&, Fraction&);

	operator string ();
};

