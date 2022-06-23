#include<iomanip>
#include<iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "russian");
	double  c = 10.1, z, sum = 0, y1 = 4, y2 = -6, y3 = 3, y4 = -3, y5 = 9, y6 = -5;
	sum = y1 + y2 + y3 + y4 + y5 + y6;
	{
		if (sum > c)
		{
			z = sin(c);
			cout << z << endl;
		}
		else if (sum <= c)
		{
			z = cos(c);
			cout << z << endl;
		}
	}
}