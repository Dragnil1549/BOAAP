#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;

double trap()
{
	double n = 200, a = 0, b = 4, h, x, s, s1, s2, i, z;
	h = (b - a) / n;
	x = a;
	s = 0;
once: s = s + h * ((x * x + 4 * x - 2) + (((x + h) * (x + h) * (x + h) * (x + h) + 4))) / 2;
	x = x + h;
	if (x > (b - h))
	{
		cout << "s=" << s << endl;
		return 0;
	}
	else
	{
		goto once;
	}

}
double parabl()
{
	double n = 200, a = 0, b = 4, h, x, s, s1, s2, i, z;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	s1 = 0;
	s2 = 0;
	i = 1;
ty: s2 = s2 + (x * x * x * x + 4);
	x = x + h;
	s1 = s1 + (x * x * x * x + 4);
	x = x + h;
	i = i + 1;
	if (i < n)
	{
		goto ty;
	}
	else
	{
		z = (h / 3) * ((a * a * a * a + 4) + 4 * ((a + h) * (a + h) * (a + h) * (a + h) + 4) + 4 * s1 + 2 * s2 + (b * b * b * b + 4));
		cout << "z=" << z << endl;
		return 0;
	}
}
void main()
{
	for (;;)
	{
		setlocale(LC_CTYPE, "Russian");
		int k;
		cout << "¬ыберите  (1 - метод трапеции, 2 - метод парабол)" << endl;
		cin >> k;
		switch (k) {
		case 1:
			trap();
				break;
		case 2:
			parabl();
			break;
		}
	}


}