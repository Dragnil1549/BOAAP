#include<iostream>
using namespace std;
void main()
{
	setlocale(0, "");
	int a, b = 0, c;
	cout << "¬ведите размер массивов "; cin >> a;
	int* arr = new int[a];
	int* brr = new int[a];
	int* crr = new int[a];
	for (int i = 0; i < a; i++)
	{
		arr[i] = rand() % 99 + 1;
		cout << arr[i] << "||";
	}
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		brr[i] = rand() % 99 + 1;
		cout << brr[i] << "||";
		crr[i] = arr[i] + brr[i];
	}
	cout << endl;
	for (int i = 0; i < a; i++)
	{
		cout << crr[i] << "||";
	}
}