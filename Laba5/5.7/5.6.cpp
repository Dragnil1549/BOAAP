#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b = 0, c = 0, d, z = 0, t;
	cout << "Введите количество лет " << endl;
	cin >> a;
	while (b < a)
	{
		cout << "Введите цену в " << (c = c + 1) << " год" << endl;
		cin >> d;
		cout << "Введите процент амортизации " << endl;
		cin >> t;
		z = (d - (d * (t / 100)) + z);
		b = b + 1;
	}
	cout << "стоймость оборудования " << z;
}