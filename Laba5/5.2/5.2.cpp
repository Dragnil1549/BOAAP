
#include <iostream>
using namespace std;
void main()
{
	float b = 1, y, a = 3, j = 2, e = 4, t, i = 3;
	while (i > 1.9)
	{
		y = a / (b + pow(e, b)) / (1 + j * i);
		t = cos(y + 1) / sqrt(abs(-2 * j));
		cout << "i=" << i << "\t";
		cout << " t=" << t << endl;
		i = i - 0.1;
	}
}