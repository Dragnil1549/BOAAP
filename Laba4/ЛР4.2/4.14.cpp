#include<iostream>
#include<iomanip>

void main() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x;
	cout << "������� ����� �� 1 �� 9 " << endl;
	cin >> x;
	if (x == 1)
		cout << "��� 1 ���";
	else if (x == 2)
		cout << "��� 2 ����";
	else if (x == 3)
		cout << "��� 3 ����";
	else if (x == 4)
		cout << "��� 4 ����";
	else if (x == 5)
		cout << "��� 5 ���";
	else if (x == 6)
		cout << "��� 6 ���";
	else if (x == 7)
		cout << "��� 7 ���";
	else if (x == 8)
		cout << "��� 8 ���";
	else if (x == 9)
		cout << "��� 9 ���";
	else
		cout << "����������� ������ ����� �� 1 �� 9";
}