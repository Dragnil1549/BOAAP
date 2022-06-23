#include<iostream>
using namespace std;
void ii(int* a, int n) {
    for (int i = 0; i < n; i++)
        a[i] = i + 1;

}
int main() {
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
        a[i] = 0;
    ii(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}