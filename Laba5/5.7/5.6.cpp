#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a, b = 0, c = 0, d, z = 0, t;
	cout << "������� ���������� ��� " << endl;
	cin >> a;
	while (b < a)
	{
		cout << "������� ���� � " << (c = c + 1) << " ���" << endl;
		cin >> d;
		cout << "������� ������� ����������� " << endl;
		cin >> t;
		z = (d - (d * (t / 100)) + z);
		b = b + 1;
	}
	cout << "��������� ������������ " << z;
}