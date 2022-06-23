#include <iostream>
#include <conio.h>


using namespace std;
void main()
{
	const int n = 10000;
	int a[n], i, sz, q, w;
	cout << "Vvedite razmer massiva: ";
	cin >> sz;
	for (i = 0; i < sz; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
	for (i = 0; i < sz; i++)
	{
		if (a[i] == 0)
		{
			cout << "a[" << i << "] ";
			goto a1;
		}
	}
    a1:for (i = sz; i > 0; i--)
    {
	if (a[i] == 0)
	{
		cout << "a[" << i << "] ";
		goto a2;
	}
    }

    a2:_getch();

}