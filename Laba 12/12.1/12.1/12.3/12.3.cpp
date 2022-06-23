#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string>

using namespace std;
int count_words(string s) 
{
    s += ' ';
    int a = 0;
    for (size_t i = 0; i < s.length(); i++)
        if (s[i] == ' ') a++;
    return a;
}
string* cut_words(string s)
{
    s += ' ';
    int c = 0;
    int p = 0;
    int i = 0;
    string* s_return = new string[count_words(s)];
    while (s.length() != 0)
    {
        if (s[i] != ' ')
        {
            c++;
            i++;
        }
        else
        {
            i = 0;
            s_return[p] = s.substr(0, c);
            s.erase(0, c + 1);
            c = 0;
            p++;
        }
    }
    return s_return;
}

int main()
{
    string s;
    getline(cin, s);
    string* s_return;
    s_return = cut_words(s);
    for (int i = 0; i < count_words(s); i++)
    {
        string s_tmp = s_return[i];
        if (s_tmp.empty())				
        {
            continue;
        }
        else				
        {
            int p = 0;
            for (int j = i + 1; j < count_words(s); j++)
            {
                if (is_permutation(s_tmp.begin(), s_tmp.end(), s_return[j].begin()))	
                    if (s_tmp.length() == s_return[j].length())	
                    {
                        cout << s_return[j] << endl;	
                        s_return[j].clear(); 
                        p++;
                    }
            }
            if (p >= 1) cout << s_tmp << endl;
        }
    }
    return 0;
}