#include <iostream>
#include <conio.h>
#include <time.h>


using namespace std;
void main()
{
	const int n = 1000;
	int a[n], i, sz;
	cout << "Vvedite razmer massiva: ";
	cin >> sz;
	for (i = 0; i < sz; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << endl;
	}
	_getch();
}