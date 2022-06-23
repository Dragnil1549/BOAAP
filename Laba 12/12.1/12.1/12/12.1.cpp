# include <iostream>
using namespace std;
void main()
{
    int k = 0, i;
    char str[50];
    cin.getline(str, 50);
    int a = strlen(str);
    system("cls");
    for (i = 0;i < a;i++)
    {

        if (str[i] == '"')
        {
            i++;
            for (;str[i] != '"';i++);
            i++;
        }
        cout << str[i];
    }
    system("pause");
}
