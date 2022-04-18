#include "Fraction.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>
using namespace std;

Fraction::Fraction()
{
	setFirst(0);
	setSecond(0);
}
Fraction::Fraction(const int first, const int second)
{
	setFirst(first);
	if (second >= 0 && second <= 99)
		setSecond(second);
	else
		cerr << "Неправильний аргумент конструктора";
}
Fraction::Fraction(Fraction& m)
{
	setFirst(m.getFirst());
	setSecond(m.getSecond());
}

Fraction& Fraction::operator = (Fraction& s)
{
	setFirst(s.getFirst());
	setSecond(s.getSecond());
	return *this;
}

ostream& operator << (ostream& out, Fraction& s)
{
	out << string(s);
	return out;
}
istream& operator >> (istream& in, Fraction& s)
{
	int x, y;
	Fraction a;
	cout << "Ціла частина числа: "; cin >> x;
	do {
		cout << "Дробова частина числа: "; cin >> y;
	} while (y < 0 || y > 100);
	s.setFirst(x);
	s.setSecond(y);
	return in;
}

bool operator < (Fraction a, Fraction b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() < b.getSecond());
}
bool operator <= (Fraction a, Fraction b) {
	return (a.getFirst() < b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() <= b.getSecond());;
}
bool operator > (Fraction a, Fraction b) {
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() > b.getSecond());
}
bool operator >= (Fraction a, Fraction b)
{
	return (a.getFirst() > b.getFirst()) || (a.getFirst() == b.getFirst() && a.getSecond() >= b.getSecond());
}
bool operator == (Fraction a, Fraction b) {
	return a.getFirst() == b.getFirst() && a.getSecond() == b.getSecond();
}
bool operator != (Fraction a, Fraction b) { return !operator ==(a, b); }

Fraction::operator string () {
	stringstream ss;
	ss << "Число: " << getFirst() << "." << getSecond() << endl;
	return ss.str();
}