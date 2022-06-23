#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int _tmain(int argc, t_char* argv[])
{
    double A[] = { 1,1,2,4,2,7,7,8,3,0,3,5 };
    int N = 12;

    int pos1 = distance(A, max_element(A, A + N));
    int pos2 = distance(A, min_element(A, A + N));
    int p;
    pos1 > pos2 ? p = pos1 - pos2 - 1 : p = pos2 - pos1 - 1;

    cout << p << endl;
    return 0;
}