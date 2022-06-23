#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y;
	cout << "Введите x " << endl;
	cin >> x;
	cout << "Введите y " << endl;
	cin >> y;
	if (x == 2 & y == 2)
		cout << "Можно ";
	else if (x == 1 & y == 1)
		cout << "Можно ";
	else if (x == 2 & y == 1)
		cout << "Можно ";
	else if (x == 3 & y == 1)
		cout << "Можно ";
	else if (x == 4 & y == 1)
		cout << "Можно ";
	else if (x == 5 & y == 1)
		cout << "Можно ";
	else if (x == 6 & y == 1)
		cout << "Можно ";
	else if (x == 7 & y == 1)
		cout << "Можно ";
	else if (x == 8 & y == 1)
		cout << "Можно ";
	else if (x == 4 & y == 2)
		cout << "Можно ";
	else if (x == 4 & y == 3)
		cout << "Можно ";
	else if (x == 4 & y == 4)
		cout << "Можно ";
	else if (x == 4 & y == 5)
		cout << "Можно ";
	else if (x == 4 & y == 6)
		cout << "Можно ";
	else if (x == 4 & y == 7)
		cout << "Можно ";
	else if (x == 4 & y == 8)
		cout << "Можно ";
	else if (x == 5 & y == 2)
		cout << "Можно ";
	else if (x == 6 & y == 3)
		cout << "Можно ";
	else if (x == 7 & y == 4)
		cout << "Можно ";
	else if (x == 8 & y == 5)
		cout << "Можно ";
	else if (x == 3 & y == 2)
		cout << "Можно ";
	else if (x == 2 & y == 3)
		cout << "Можно ";
	else if (x == 1 & y == 4)
		cout << "Можно ";
	else
		cout << " переместиться на " << 4-x << ",1 в сторону и на " << y << "вверх";
}