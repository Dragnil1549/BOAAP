#include <iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	double b = 2.4, j = 6, a = 15 * 10e-5, i, y, t;
	for (int x = 1; x <= 3; x++)
	{
		cout << "¬ведите i " << endl;
		cin >> i;
		while (b < 3)
		{
			y = a / (b + exp(b)) / (1 + j * i);
			t = cos(y + 1) / sqrt(abs(-2 * j));
			cout << "t=" << t << endl;
			b = b + 0.2;
		}
		b = 2.4;
	}
}