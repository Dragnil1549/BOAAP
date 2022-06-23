#include <iostream>
#include <string>
using namespace std;
char* foo(char* a, int n, int kon)
{
	for (int i = n; i < kon - 1; i++)
	{
		*(a + i) = *(a + i + 1);
	}
	return a;
}
char* bar(char* a, int kon)
{
	for (int i = 0; i < kon; i--)
	{
		a[2 * i] = a[i];
	}
	for (int i = 0; i < 2 * kon; i = i + 2)
		a[i + 1] = a[i];
	return a;
}
int main()
{
	string s;
	cin >> s;
	int len = s.length();
	char* a = new char[len];
	for (int i = 0; i < len; i++) *(a + i) = s[i];
	int k = 0;
	for (int i = 0; i < len - k; i++)
	{
		while (*(a + i) == '*')
		{
			a = foo(a, i, len - k);
			k++;
		}

	}
	if (2 * len - 2 * k > len)
	{
		char* a2 = new char[2 * len - 2 * k];
		for (int i = 0; i < len - k; i++) a2[i] = a[i];
		a2 = bar(a2, len - k);
		for (int i = 0; i < (2 * len - 2 * k); i++)
			cout << *(a2 + i);
	}
	else
	{
		bar(a, 2 * len - 2 * k);
		for (int i = 0; i < (2 * len - 2 * k); i++)
			cout << *(a + i);
	}
	system("pause");
}
