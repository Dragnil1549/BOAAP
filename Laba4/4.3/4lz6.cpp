#include<iostream>
#include<iomanip>

void main() {
	using namespace std;
	setlocale(LC_CTYPE, "Russian");
	int x;
	cout << "{Хотите выбрать камень хранитель? (1 - да, 2 - нет)" << endl;
	cin >> x;
	switch (x)
	{
	case 1: cout << "Какой? (1 - Вор, 2 - Маг, 3 - Воин, 4 - Потом )" << endl;
		cin >> x;
		switch (x)
		{
		case 1: cout << "Вор значит, что ж, никогда не поздно встать на путь истинный "; break;
		case 2: cout << "Маг значит. Каждому своё. Не суди, так не судим будешь"; break;
		case 3: cout << "Воин-это хорошо.Я как тебя увидел, так сразу понял, что тебе не место в той повозке"; break;
		case 4: cout << "Соверши правильный выбор"; break;
		}
		break;
	case 2: cout << "Дело ваше"; break;
	default: cout << "Некорректный выбор"; break;
	}
	
}