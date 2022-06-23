#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
    int n; std::cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        a[i] = -99 + rand() % 199;
        std::cout << a[i] << " ";
    }
    std::cout << "\n\n";
    for (int i = 0; i < n; i++)
        if (a[i] > 0) std::cout << a[i] << " ";
    std::cout << "\n\n";
    for (int i = 0; i < n; i++)
        if (a[i] < 0) std::cout << a[i] << " ";
    delete[] a;
    system("pause");
    return 0;
}