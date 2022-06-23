#include <iostream>
void main()
{
	double t, u, k = 4, x = 2 * powl(10, -4), a = 8.1;
	using namespace std;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	cout << "t=" << t << endl;
	cout << "u=" << u;
}