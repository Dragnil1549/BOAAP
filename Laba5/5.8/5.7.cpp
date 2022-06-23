#include <iostream>
#include <string>
using namespace std;



void main()
{
    setlocale(LC_ALL, "Russian");

    int v = 9;

    while (v != 999999)
    {
        int s = 0;
        int c = v;
        for (c; c; c /= 10)
            s += c % 10;

        if (s % 7 == 0)
        {
            int s = 0;
            ++v;
            int c = v;

            for (c; c; c /= 10)
                s += c % 10;

            if (s % 7 == 0)
                cout << v << "-" << v-- << endl;
        }

        v++;
    } 
    cout << "могут" << endl ;
    system("pause");
}