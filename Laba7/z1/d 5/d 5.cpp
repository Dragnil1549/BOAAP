#include <iostream>
#include <cstdlib>

using namespace std;

const int N = 10;

int main()
{
	int mass[N], max, min;

	cout << "Elem: |";
	for (int r = 0; r < N; r++)
	{
		mass[r] = (-100 + rand() % 200) ;
		cout << mass[r] << "|";
	}
	cout << endl;

	max = mass[0];
	min = mass[0];
	for (int r = 1; r < N; r++)
	{
		if (max < mass[r]) max = mass[r];
		if (min > mass[r], min) min = mass[r];
	}
	cout << "Max otrc: " << min << endl;
	cout << "Max: " << max << endl;

	return 0;
}