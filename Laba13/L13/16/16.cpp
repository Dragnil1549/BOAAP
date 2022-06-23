#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int mass[5][5] = { {0} }; 

class Calculate
{
    int middle; 
    int d1; 
    int d2;
public:
    void FindMiddle() 
    {
        middle = 0;
        d1 = 0;
        d2 = 0;
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                middle += mass[i][j];
            }
        }
        middle /= 25;
        std::cout << "Middle val is " << middle << "\n";
    }

    void PrintMass() 
    {
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                std::cout << mass[i][j] << " " << "[" << i << "]" << "[" << j << "]\n";
            }
        }
    }


    void PrintResult() 
    {
        std::cout << "Result is: " << mass[d1][d2] << " " << "[" << d1 << "]" << "[" << d2 << "]\n";
    }

    void FindNearestValue() 
    {
        int temp = 0;
        for (int i = 0; i < 5; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                int val = abs(middle - mass[i][j]);
                if (i == 0 && j == 0)temp = val;

                if (temp > val)
                {
                    temp = val;
                    d1 = i;
                    d2 = j;
                }

            }
        }
    }
};


int main()
{
    srand(time(NULL));

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            mass[i][j] = rand() / 90530;
        }
    }
