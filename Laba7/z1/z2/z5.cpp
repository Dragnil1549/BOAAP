#include<iomanip>
#include<iostream>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "russian");
	double  a = 1.5, b = -4.15, v, w;
	cout << "v=" << endl;
	cin >> v;
	{
		if (v > 0)
		{
			w = a + v;
			cout << w << endl;
		}
		else if (v <= 0)
		{
			w = b / v;
			cout << w << endl;
		}
	}
}
