#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y, z;
	double n;
	cout << "������� ������ ����� " << endl;
	cin >> x;
	cout << "������� ������ ����� " << endl;
	cin >> y;
	cout << "�������� �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - ������� ������, 5 - ������� �� �������" << endl;
	cin >> z;
	switch(z){
	case 1: n = x + y ; cout << n; break;
	case 2: n = x - y; cout << n; break;
	case 3: n = x * y; cout << n; break;
	case 4: n = x / y; cout << n; break;
	case 5: n = x % y; cout << n; break;
	default: cout << "������� ���������� ������ ";
	}

}