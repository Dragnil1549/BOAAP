#include <string>
#include <iostream> 
#include <ctime> 

using namespace std;

void nill() {
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));


    int** M;
    M = new int* [5];
    for (int i = 0;i < 5; i++)
        M[i] = new int[5];


    for (int i = 0;i < 5; i++)
        for (int n = 0;n < 5;n++)
            M[i][n] = rand() % 10 * -1;



    for (int i = 0;i < 5; i++)
    {
        for (int n = 0;n < 5;n++)
            cout << "|" << M[i][n] << "|";
        cout << endl;
    }
    char b = 1;
    for (int i = 0; (i < 5) && b; i++) {
        b = 0;
        for (int j = 0; j < 5; j++)
            if (M[i][j] < 0) {
                b = 1;
                break;
            }
    }
    if (b) for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            M[i][j] = -M[i][j], printf("%d ", M[i][j]);
        putchar('\n');
    }
    else puts("Нет отрицательных");

}

int main()
{
    nill();
    return 0;

}