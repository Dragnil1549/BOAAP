#include<iostream>
#include<iomanip>

void main()
{
	setlocale(LC_CTYPE, "Russian");
	int A, B, C;
	using namespace std;
	cout << "������� ����� � " << endl;
	cin >> A;
	cout << "������� ����� B " << endl;
	cin >> B;
	cout << "������� ����� C " << endl;
	cin >> C;
	if (A % 2 == 1)
		cout << "����";
	else if (B % 2 == 1)
		cout << "����";
	else if (C % 2 == 1)
		cout << "����";
	else
		cout << "���";
}