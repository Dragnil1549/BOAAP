#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double a, b, c = 1;
	cout << "������� ��������� ������� " << endl;
	cin >> a;
	cout << "������� �������� ������� " << endl;
	cin >> b;
	while (a < b)
	{
		a = a + (a * 0.03);
		c = c + 1;
	}
	cout << "������� " << a << endl;
	cout << "���������� ���� " << c;
}