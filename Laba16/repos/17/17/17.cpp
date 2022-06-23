#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;
void diff(double a, double b)
{
	double e = 0.0001, x, x1;
	if ((sin(a) +2+a) > 0)
	{
		x1 = a;
	}
	else
	{
		x1 = b;
	}
a1: x = x1;
	x1 = sin(a) + 2 + a;
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