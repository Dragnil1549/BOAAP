#include<iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	char tmp[33];
	int A, n;
	cout << "¬ведите A: ", cin >> A;
	_itoa_s(A, tmp, 2); cout << "„исло A " << tmp << endl;
	A = A | 6;
	A = A | 8;
	_itoa_s(A, tmp, 2); cout << "A= " << tmp << endl;
}