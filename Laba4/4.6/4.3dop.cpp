#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y;
	cout << "������� x " << endl;
	cin >> x;
	cout << "������� y " << endl;
	cin >> y;
	if (x == 2 & y == 2)
		cout << "����� ";
	else if (x == 1 & y == 1)
		cout << "����� ";
	else if (x == 2 & y == 1)
		cout << "����� ";
	else if (x == 3 & y == 1)
		cout << "����� ";
	else if (x == 4 & y == 1)
		cout << "����� ";
	else if (x == 5 & y == 1)
		cout << "����� ";
	else if (x == 6 & y == 1)
		cout << "����� ";
	else if (x == 7 & y == 1)
		cout << "����� ";
	else if (x == 8 & y == 1)
		cout << "����� ";
	else if (x == 4 & y == 2)
		cout << "����� ";
	else if (x == 4 & y == 3)
		cout << "����� ";
	else if (x == 4 & y == 4)
		cout << "����� ";
	else if (x == 4 & y == 5)
		cout << "����� ";
	else if (x == 4 & y == 6)
		cout << "����� ";
	else if (x == 4 & y == 7)
		cout << "����� ";
	else if (x == 4 & y == 8)
		cout << "����� ";
	else if (x == 5 & y == 2)
		cout << "����� ";
	else if (x == 6 & y == 3)
		cout << "����� ";
	else if (x == 7 & y == 4)
		cout << "����� ";
	else if (x == 8 & y == 5)
		cout << "����� ";
	else if (x == 3 & y == 2)
		cout << "����� ";
	else if (x == 2 & y == 3)
		cout << "����� ";
	else if (x == 1 & y == 4)
		cout << "����� ";
	else
		cout << " ������������� �� " << 4-x << ",1 � ������� � �� " << y << "�����";
}