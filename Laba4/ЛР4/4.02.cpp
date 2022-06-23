#include<iostream>
#include<iomanip>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, B, C;
	using namespace std;
	cout << "Введите число А " << endl;
	cin >> A;
	cout << "Введите число B " << endl;
	cin >> B;
	cout << "Введите число C " << endl;
	cin >> C;
	if (A % 2 == 1)
		cout << "Есть";
	else if (B % 2 == 1)
		cout << "Есть";
	else if (C % 2 == 1)
		cout << "Есть";
	else
		cout << "Нет";
}