#include <iostream>

int main()
{
    int N, iMin = 0, iMax = 0, first, second, bIndex = 0;

    std::cout << "Enter N: ";
    std::cin >> N;
    int* a = new int[N]; 

    for (int i = 0; i < N; i++)
    {
        std::cout << "Enter a[" << i << "]: ";
        std::cin >> a[i];
        if (a[iMin] > a[i])
            iMin = i;
        if (a[iMax] < a[i])
            iMax = i;
    }

    if (iMin < iMax)
    {
        first = iMin;
        second = iMax;
    }
    else
    {
        first = iMax;
        second = iMin;
    }

    int* b = new int[N];
    for (int i = 0; i < first; i++)
        b[bIndex++] = a[i];
    for (int i = second; i >= first; i--)
        b[bIndex++] = a[i];
    for (int i = second + 1; i < N; i++)
        b[bIndex++] = a[i];

    for (int i = 0; i < N; i++)
        std::cout << b[i] << " ";

    delete[] a; 
    delete[] b;
}