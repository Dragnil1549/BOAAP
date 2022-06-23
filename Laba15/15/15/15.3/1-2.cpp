#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;
void diff(double a, double b)
{
	double e = 0.0001, x, x1;
	if ((pow(a, 3) + 2 * a - 4) * (6 * a) > 0)
	{
		x1 = a;
	}
	else
	{
		x1 = b;
	}
a1: x = x1;
	x1 = x - ((pow(x, 3) + 2 * x - 4) / (3 * pow(x, 2) + 2));
	if (abs(x1 - x) > e)
	{
		goto a1;
	}
	else
	{
		cout << "x1=" << x << endl;
	}
}
void main()
{
	double a, b;
	cout << " a=";
	cin >> a;
	cout << " b=";
	cin >> b;
	diff(a, b);
	_getch();
}