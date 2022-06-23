#include <iostream>

int main()
{
    int a[] = { 1, 2, 2, 4, 1, 0, 0, 0, 1, 2 };
    const size_t N = sizeof(a) / sizeof(*a);

    for (int x : a) std::cout << x << ' ';
    std::cout << std::endl;

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = i + 1; j < N; j++)
        {
            if (a[j] < a[i])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int x : a) std::cout << x << ' ';
    std::cout << std::endl;

    size_t n = 0;

    for (size_t i = 0; i < N; )
    {
        size_t j = 0;
        while (++i < N && a[i] == a[i - 1]) ++j;
        if (j != 0) n += j + 1;
    }

    std::cout << "Столько " << n << " поторяющихся" << std::endl;

    return 0;
}