#include <bitset>
#include <climits>
#include <iostream>
#include <limits>
using namespace std;
typedef bitset< sizeof(unsigned)* CHAR_BIT >  T_bitset;
int     main()
{
    setlocale(LC_CTYPE, "Russian");
        unsigned    n{};
        cout << "¬ведите число ";
        cin >> n;
        cout << T_bitset(n) << endl;
        for (unsigned i{ 2 }; i; i <<= 2)
        {
            n |= i;
        }
        cout << n << endl << T_bitset(n);
}