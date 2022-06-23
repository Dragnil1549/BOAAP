#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int a = 100000, b, c, d, e, f, g;
	while (a < 1000000)
	{
		b = a / 1000000;
		c = (a / 100000) % 100000;
		d = (a / 10000);
		e = (a / 1000);
		f = (a / 100);
		g = a / 10;
		a = a + 1;
	}
}