#include<iostream>
#include<iomanip>

void main() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x;
	cout << "{������ ������� ������ ���������? (1 - ��, 2 - ���)" << endl;
	cin >> x;
	switch (x)
	{
	case 1: cout << "�����? (1 - ���, 2 - ���, 3 - ����, 4 - ����� )" << endl;
		cin >> x;
		switch (x)
		{
		case 1: cout << "��� ������, ��� �, ������� �� ������ ������ �� ���� �������� "; break;
		case 2: cout << "��� ������. ������� ���. �� ����, ��� �� ����� ������"; break;
		case 3: cout << "����-��� ������.� ��� ���� ������, ��� ����� �����, ��� ���� �� ����� � ��� �������"; break;
		case 4: cout << "������� ���������� �����"; break;
		}
		break;
	case 2: cout << "���� ����"; break;
	default: cout << "������������ �����"; break;
	}
	
}