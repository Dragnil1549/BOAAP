#include<iostream>
#include<iomanip>
void main()
{
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x, y;
	cout << "Ââåäèòå x " << endl;
	cin >> x;
	cout << "Ââåäèòå y " << endl;
	cin >> y;
	if (x == 2 & y == 2)
		cout << "áü¸ò ";
	else if (x == 1 & y == 3)
		cout << "áü¸ò ";
	else if (x == 4 & y == 2)
		cout << "áü¸ò ";
	else if (x == 5 & y == 3)
		cout << "áü¸ò ";
	else if (x == 6 & y == 4)
		cout << "áü¸ò ";
	else if (x == 7 & y == 5)
		cout << "áü¸ò ";
	else if (x == 8 & y == 6)
		cout << "áü¸ò ";
	else if (x == 6 & y == 1)
		cout << "áü¸ò ";
	else if (x == 7 & y == 2)
		cout << "áü¸ò ";
	else if (x == 8 & y == 3)
		cout << "áü¸ò ";
	else if (x == 5 & y == 2)
		cout << "áü¸ò ";
	else if (x == 4 & y == 3)
		cout << "áü¸ò ";
	else if (x == 3 & y == 4)
		cout << "áü¸ò ";
	else if (x == 2 & y == 5)
		cout << "áü¸ò ";
	else if (x == 1 & y == 6)
		cout << "áü¸ò ";
	else if (x > 8)
		cout << "Îøèáî÷íûå äàííûå ";
	else if (x < 1)
		cout << "Îøèáî÷íûå äàííûå ";
	else if (y > 8)
		cout << "Îøèáî÷íûå äàííûå ";
	else if (y < 1)
		cout << "Îøèáî÷íûå äàííûå ";
	else
		cout << "íå áü¸ò ";

}
	
