#include <iostream>
#include <fstream>
#include <list>
#include <string>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian_Russia.1251");
	list<int> positive, negative;
	string numbers = "numbers.txt"; // исходный файл целых чисел
	ifstream input(numbers);
	try {
		if (!input) throw runtime_error(numbers);
		int number, element = 0;
		while (input >> number) {
			if (element / 10 & 1) negative.push_back(number);
			else positive.push_back(number);
			++element;
		}
		string mixed = "mixed.txt"; // конечный файл целых чисел
		ofstream output(mixed);
		try {
			if (!output) throw runtime_error(mixed);
			int i = 0;
			while (!negative.empty() && !positive.empty()) {
				try {
					if (i % 10 < 5) {
						output << positive.front() << ' ';
						positive.pop_front();
					}
					else {
						output << negative.front() << ' ';
						negative.pop_front();
					}
					++i;
				}
				catch (...) {
					output.close();
					throw;
				}
			}
			output.close();
		}
		catch (runtime_error const& e) {
			cerr << L" Ошибка: Не удаётся записать в файл " << e.what() << endl;
			output.close();
			cin.sync();
			cin.get();
			return -2;
		}
		input.close();
	}
	catch (runtime_error const& e) {
		cerr << "\a Ошибка: Не удалось открыть файл " << e.what() << endl;
		input.close();
		cin.sync();
		cin.get();
		return -1;
	}
}