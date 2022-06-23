#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "russian");
    int* mas, n, sum;
    sum = 0;
    cout << "Введите размер массива: ";
    cin >> n;
    mas = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]= ";
        cin >> mas[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 0) 
            sum += mas[i];
    }
    cout << "Сумма четных элементов массива равна " << sum;
    cin.get(); 
    return 0;
}