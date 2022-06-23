#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    srand((unsigned)time(NULL));
    int n;
    cout << "Размер матрицы:" << "\n";
    cout << "n = ";
    cin >> n;
    double** a = new double* [n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new double[n];
    }
    cout << "Рандомная матрица:" << "\n";
    cout.precision(2);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = -10 + 20.0 / RAND_MAX * rand(); //[-10; 10]
            cout.width(5);
            cout << fixed << a[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n - 1; i++)
    {
        swap(a[n - 1][i], a[i][n - 1]);
    }
    cout << "Изменённая матрица:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout.width(5);
            cout << fixed << a[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;
    system("pause");
    return 0;
}