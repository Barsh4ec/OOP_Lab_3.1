#include <iostream>
#include <Windows.h>
#include "Fraction.h"

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Fraction a, b;
	cin >> a;
	cin >> b; cout << endl;
	cout << a;
	cout << b;


	if (a < b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a <= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a > b == true)
		cout << "����� ����� ����� �� �����" << endl;
	if (a >= b == true)
		cout << "����� ����� ����� ��� ���� �������" << endl;
	if (a == b == true)
		cout << "����� � ����� ����� ����" << endl;
	if (a != b == true)
		cout << "����� � ����� ����� �� ����" << endl;

	return 0;
}