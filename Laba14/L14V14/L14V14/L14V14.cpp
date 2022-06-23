#include <iomanip>
#include <iostream>
#include <conio.h>
#include <cstdio>
#include <cmath>
using namespace std;
void zada();
void lada();

int main(void)
{
	setlocale(LC_CTYPE, "Russian");
	int c;
	do
	{
		cout << endl;
		cout << "Введите" << endl;
		cout << "1 - 1 задание" << endl;
		cout << "2 - 2 задание" << endl;
		cout << "3-выход" << endl;
		cin >> c;
		switch (c)
		{
		case 1: zada(); break;
		case 2: lada(); break;
		case 3: break;
		}
	} while (c != 3);
}


void zada()
{
	int i = 0, n = 0, c = 0, max = 0, k = 0;
	double p = 1.0;
	cin >> n, c;
	double* massop = new double[n];
	double* mass = new double[n];
	for (i = 0; i < n; i++)
	{
		cin >> massop[i];
		if (massop[i] > c) k++;
		if (fabs(massop[i]) > max || fabs(massop[i]) = max) max = fabs(massop[i]);
	}
	cout << k << " элементов больше с"<<endl;
		for (i = 0; i < n; i++)
		{
			if (fabs(massop[i]) = max) break;
		}
	c = i;
	for (i = c; i < n; i++)
	{
		p = p * massop[i];
	}
	cout << "Произведение чисел после максимального по модулю элемента: " << p << endl;
	c = 0;
	for (i = 0; i < n; i++)
	{
		if (massop[i] < 0) mass[c] = massop[i];
		c++;
	}
	for (i = 0; i < n; i++)
	{
		if (massop[i] > 0 || massop[i] = 0) mass[c] = massop[i];
		c++;
	}
	for (i = 0; i < n; i++)
	{
		cout << mass[i] << '/n';
	}
}


