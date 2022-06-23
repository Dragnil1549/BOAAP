#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string s = "abd dfa cccdc hello world";
    int vsize = s.size();
    string t;
    string z;
    int sum = 0, len;
    istringstream ss(s);
    vector<string> v;
    while (ss >> t) {
        v.push_back(t);
    }
    vsize = v.size();
    for (int i = 0;i < vsize;i++) {
        cout << v[i] << endl;
    }
    cout << endl;
    for (int i = 0;i < vsize;i++) {
        z = v[i];
        len = z.size();
        if (z[0] == z[len - 1]) {
            sum++;
        }
    }
    cout << "count = " << sum;
    return 0;
}