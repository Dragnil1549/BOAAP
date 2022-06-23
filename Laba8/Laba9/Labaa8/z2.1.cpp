#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;
void main()
{
	double a, b, e = 0.0001, x;
	cout << " a=";
	cin >> a;
	cout << " b=";
	cin >> b;
a1: x = (a + b) / 2;
	if (((x * x * x + 2 * x - 4) * (a * a * a + 2 * a - 4)) <= 0)
	{
		b = x;
	}
	else
	{
		a = x;
	}
	if (abs(a - b) > 2 * e)
	{
		goto a1;
	}
	else
	{
		cout << "x=" << x << endl;
	}
	_getch();
}