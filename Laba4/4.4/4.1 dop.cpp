#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y, z;
	double n;
	cout << "Введите первое число " << endl;
	cin >> x;
	cout << "Введите второе число " << endl;
	cin >> y;
	cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление нацело, 5 - остаток от деления" << endl;
	cin >> z;
	switch(z){
	case 1: n = x + y ; cout << n; break;
	case 2: n = x - y; cout << n; break;
	case 3: n = x * y; cout << n; break;
	case 4: n = x / y; cout << n; break;
	case 5: n = x % y; cout << n; break;
	default: cout << "Введите корректные данные ";
	}

}