# include <iostream>
using namespace std;
void main()
{
    int k = 0, i;
    char str[50];
    cin.getline(str, 50);
    int a = strlen(str);
    system("cls");
        for (int i = 0; str[i] != '\0'; ++i)
            if (str[i] == '*')
            {
                for (++i; str[i] != '\0' && str[i] != '*'; ++i)
                    cout << str[i];
                break;
            }
  
    system("pause");
}