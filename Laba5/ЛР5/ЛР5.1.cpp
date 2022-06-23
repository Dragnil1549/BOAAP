#include <iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double b = 2, j = 6, a = 1.5 * 10e-8, i, y, t;
	for (int x = 1; x <= 3; x++)
	{
		cout << "¬ведите i " << endl;
		cin >> i;
		y = a / (b + pow(b, b)) / (1 + j * i);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "t= " << t << endl;
	}
}
