
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    int mes, den;
    int d[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    string m[12] = { "yanvar","fevral","mart","aprel","may","iyun","iyul","avgust","sentyabr","oktyabr","noyabr","dekabr" };
    for (int i = 1; i <= 2; i++)
    {
        if (i == 1)
            den = 1;
        else
            den = 5;
        mes = 0;
        while (mes <= 12)
        {
            if ((den + 7) <= d[mes])
                den += 7;
            else
            {
                den -= d[mes];
                mes++;
            }
            if (den == 13)
            {
                if (i == 1)
                    cout << "Chernaya pyatnica bila v mesyace " << m[mes] << " 2016 goda" << endl;
                else
                    cout << "Cherniy vtornik bil v mesyace " << m[mes] << " 2016 goda" << endl;
            }
        }

    }
    return 0;
}