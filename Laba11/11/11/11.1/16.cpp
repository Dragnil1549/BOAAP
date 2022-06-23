#include <iostream>
#include <algorithm>
using namespace std;

const int N = 10;
const int M = 8;

int getRand(void) { return rand() % 10; }

int main(void)
{
    setlocale(0, "rus");
    int X[N];
    int Y[M];
    generate(X, X + N, getRand);
    generate(Y, Y + M, getRand);
    sort(X, X + N);
    sort(Y, Y + M);

    cout << "Массив X: ";
    copy(X, X + N, ostream_iterator<int>(cout, " "));
    cout << '\n';
    cout << "Массив Y: ";
    copy(Y, Y + M, ostream_iterator<int>(cout, " "));
    cout << '\n';

    cout << '\n';
    int q = 0;
    cout << "Введите: q = ";
    cin >> q;

    int minDistance = q / 2;
    int minI = N, minJ = M;
    for (int i = 1; i < N; ++i)
    {
        if ((X[i - 1] <= minDistance) && (X[i] >= minDistance))
        {
            minI = i;
            break;
        }
    }
    for (int j = 1; j < M; ++j)
    {
        if ((Y[j - 1] <= minDistance) && (Y[j] >= minDistance))
        {
            minJ = j;
            break;
        }
    }

    cout << "Решение: " << "X[" << minI << "] + Y[" << minJ << "] = " << X[minI] + Y[minJ] << endl;
    system("pause");
}