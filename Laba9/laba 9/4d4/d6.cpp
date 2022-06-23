#include<iostream>
#include<clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    const int n = 5;
    int x[n], i, a, b;
    cout << "Введите элементы массива: ";
    for (i = 0; i < n; i++)
    {
        cin >> x[i];
        a = 0;
        b = 1;
        while (x[i] > a && x[i] > b)
        {
            a = a + b;
            b = a + b;
        }
        if (x[i] == a || x[i] == b)
            break;
    }
    if (i == n)
        cout << "Чисел Фибоначчи нет" << '\n';
    else
        cout << "Первое число Фибоначчи: " << x[i] << "\n";
    system("pause");
    return 0;
}