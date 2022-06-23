#include<iostream>
#include<iomanip>

void main() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x;
	cout << "¬ведите число от 1 до 9 " << endl;
	cin >> x;
	if (x == 1)
		cout << "ћне 1 год";
	else if (x == 2)
		cout << "ћне 2 года";
	else if (x == 3)
		cout << "ћне 3 года";
	else if (x == 4)
		cout << "ћне 4 года";
	else if (x == 5)
		cout << "ћне 5 лет";
	else if (x == 6)
		cout << "ћне 6 лет";
	else if (x == 7)
		cout << "ћне 7 лет";
	else if (x == 8)
		cout << "ћне 8 лет";
	else if (x == 9)
		cout << "ћне 9 лет";
	else
		cout << "ќб€зательно ввести число от 1 до 9";
}