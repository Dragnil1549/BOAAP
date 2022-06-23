#include <iomanip>
#include <iostream>
#include <conio.h>

using namespace std;
void main()
{
	int const n = 10;
	double a[n], ch1, ch2;
	int i, q1, q2;
	for (i = 0; i < n; i++)
	{
		cout << "Vvedite a[" << i << "]: ";
		cin >> a[i];
	}
	ch1 = a[0];
	ch2 = a[0];
	for (i = 0; i < n; i++)
	{
		if (a[i] < ch1)
		{
			ch1 = -999999999;
			q1 = i;
		}
		else if (a[i] > ch2)
		{
			ch2 = 999999999;
			q2 = i;
		}
	}
	cout << "min " << q1 << " i max " << q2;

}