#include<iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	int a, b = 0, c;
	cout << "¬вести число "; cin >> a;
	cout << "¬ведите второе число "; cin >> c;
	int* arr = new int[a];
	int* brr = new int[b];
	for (int i = 0; i < a; i++)
	{
		arr[i] = rand() % 999 + 1;
		if (arr[i] % c == 0)
		{
			brr[b++] = arr[i];
		}
		cout << arr[i] << "||";
	}
	cout << endl;
	for(int i = 0; i < b; i++)
	{
		cout << brr[i] << "||";
	}
}