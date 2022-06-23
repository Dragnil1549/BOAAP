#include <iomanip>

#include <iostream>

#include <conio.h>

using namespace std;

void main()

{

	double n = 200, a = 1, b = 4, h, x, s1, s2, i, z;

	h = (b - a) / (2 * n);

	x = a + 2 * h;

	s1 = 0;

	s2 = 0;

	i = 1;

a1: s2 = s2 + (x * x * x * x + 4);

	x = x + h;

	s1 = s1 + (x * x * x * x + 4);

	x = x + h;

	i = i + 1;

	if (i < n) goto a1;

	else z = (h / 3) * ((a * a * a * a + 4) + 4 * ((a + h) * (a + h) * (a + h) * (a + h) + 4) + 4 * s1 + 2 * s2 + (b * b * b * b + 4));

	cout << "z=" << z << endl;

	_getch();

}