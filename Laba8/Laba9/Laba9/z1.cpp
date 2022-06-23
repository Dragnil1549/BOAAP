#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;
void main()
{
	setlocale(LC_CTYPE, "Russian");
	double n = 200, a = 1, b = 4, h, x, s, s1, s2, i, z;
	int k;
	cout << "Выберите  (1 - метод трапеции, 2 - метод парабол)" << endl;
	cin >> k;
	switch (k) {
	case 1:
		h = (b - a) / n;
		x = a;
		s = 0;
	    once: s = s + h * ((x * x * x * x + 4) + (((x + h) * (x + h) * (x + h) * (x + h) + 4))) / 2;
		x = x + h;
		if (x > (b - h))
		{
			cout << "s=" << s << endl;
			break;
		}
		else 
		{
			goto once;
		}
		
	case 2:
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
			break;
		}
	}
	


}