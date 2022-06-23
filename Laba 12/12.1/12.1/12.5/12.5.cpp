#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(0,"");
    const int S = 100;
    char s[S];
    puts("Введите текст:");
    cin >> s;
    puts("Слово:");

   string word, m;
    stringstream str(s);
    while (str >> word)
    {
        string temp = word;
        reverse(temp.begin(), temp.end());

        if (word == temp && word.size() > m.size())
        {
            m = word;
        }
    }
    if (m.size() != 0) cout << m;
    return 0;
}