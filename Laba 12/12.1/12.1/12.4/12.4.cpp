#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
using namespace std;
const int MAX = 100;

int main()
{
	char source[MAX];
	char dest[MAX];
	char* buf;
	//char tmp[25];
	int n = 1;
	cin.getline(source, (MAX - 1), '\n');
	buf = strtok(source, " ,.");
	if (buf != NULL)
		buf = strtok(NULL, " ,.");
	_strrev(buf);
	strcpy(dest, buf);
	strcat(dest, " ");
	buf = strtok(NULL, " ,.");
	while (buf != NULL)
	{
		if ((n % 2) == 0)
		{
			_strrev(buf);
			strcat(dest, buf);
			strcat(dest, " ");
		}
		n++;
		buf = strtok(NULL, " ,.");
	}
	cout << endl << dest << endl;
	return 0;
}