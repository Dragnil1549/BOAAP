#include <iostream>
#include <math.h>
void main()
{
	long double d, f, i = -6, x = 4.5, z = 1.5 * powl(10, -6);
	using namespace std;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2 * d) / d;
	cout << "d=" << d << endl;
	cout << "f=" << f;
}