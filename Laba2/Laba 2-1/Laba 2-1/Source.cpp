#include <iostream>
#include <iomanip>
int main()
{
	double s, w, v, a = 1.5, b = -8.1, j = 4, t = 4 * powl(10, -8);
	using namespace std;
	s = sqrt(t * a / t + 1) + 4 * powl(a, 2 * b);
	w = s * a / (1 + 0.1 * a);
	v = s + j * sqrt(pow(a, 2) + pow(b, 2));
	cout << "s=" << s << endl;
	cout << "w=" << w << endl;
	cout << "v=" << v; 
	return 0;
}