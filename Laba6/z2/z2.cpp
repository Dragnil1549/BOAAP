#include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    int tmp1, tmp2, tmp3;
    for (int i = 100; i < 1000; i++) {
        tmp1 = i / 100;
        tmp2 = (i - (tmp1 * 100)) / 10;
        tmp3 = (i - (tmp1 * 100) - (tmp2 * 10));
        if (tmp1 != tmp2 && tmp1 != tmp3 && tmp2 != tmp3)
            cout << endl << i;
    }
    return 0;
}