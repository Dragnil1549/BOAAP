#include <iostream>
#include <iomanip> 
void main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; 
	cin >> c;
	cout << setw(10) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(9) << setfill(probel) << probel;
	cout << setw(8) << setfill(c) << c << endl;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(12) << setfill(c) << c << endl;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(8) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
}
