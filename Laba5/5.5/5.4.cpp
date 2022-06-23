#include <iostream>
#include<iomanip>

void main()
{
    using namespace std;
    setlocale(LC_CTYPE, "Russian");
    int n = 1000000, m = 0;
    while (n < 1000000000)
    {
        while (n != 0)
        {
            m += n % 10;
            n /= 10;
        }
        if ((m % 7 == 0) && ((m + 1) % 7 == 0))
            cout << "да";
        else
            m = 0;
            n = n + 1;
    }
    cout << "нет";
    
    
}