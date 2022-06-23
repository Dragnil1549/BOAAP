#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double a, b, c = 1;
	cout << "Введите начальную выручку " << endl;
	cin >> a;
	cout << "Введите значение выручки " << endl;
	cin >> b;
	while (a < b)
	{
		a = a + (a * 0.03);
		c = c + 1;
	}
	cout << "Выручка " << a << endl;
	cout << "Количество дней " << c;
}