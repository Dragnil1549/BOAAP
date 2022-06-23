#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

int main()
{

    std::vector<double> vec;
    double temp = 0;

    std::ifstream file("s1.txt");
    if (file)
    {
        while (!file.eof())
        {
            file >> temp;
            vec.push_back(temp);
        }
    }
    file.close();

    file.open("s2.txt");
    if (file)
    {
        while (!file.eof())
        {
            file >> temp;
            vec.push_back(temp);
        }
    }
    file.close();

    std::sort(vec.begin(), vec.end());

    std::ofstream res_file("s3.txt");
    if (res_file)
    {

        for (int i = 0; i < vec.size(); i++)
        {
            res_file << vec[i] << "\n";
            std::cout << vec[i] << "\n"; 
        }
    }
    res_file.close();

    system("pause");
    return(0);
}