#include <iostream>
#include <iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y, b, c, n;
	cout << "Введите число самолётов" << endl;
	cin >> x;
	cout << "Введите число ракет" << endl;
	cin >> y;
	cout << "Введите число спутников" << endl;
	cin >> b;
	cout << "чтобы посчитать колво очков введите 1" << endl;
	cin >> c;
	switch (c) {
	case 1: 
		n = (50 * x) + (100 * y) + (200 * b);
		cout << n; 
		break;
	}
}