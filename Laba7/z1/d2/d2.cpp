#include <iostream> 
#include <iomanip> 
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    int array[100], n;
    cout << "Lolvo mas: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 20 - 10;
    }
    cout << "\nMas:\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << array[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (array[i] < 0)
        {
            cout << "\nPervii otric: " << i + 1 << endl;
            break;
        }
    }
    cout << endl;
}
