#include <iostream>
void main()
{
	double z, y, n = 2, b = -0.12, x = 1.3 * powl(10, -4);
	using namespace std;
	z = 1 / (x - 1) + sin(x) - sqrt(n);
	y = (powl(x, -b) + 1) / 2 * z;
	cout << "z=" << z << endl;
	cout << "y=" << y ;
}