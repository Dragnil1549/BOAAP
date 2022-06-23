#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <iostream>

class Random {
public:
    Random(int min, int max)
        : min(min)
        , max(max) {
        std::srand(std::time(NULL));
    }

    int operator()() {
        return min + std::rand() % (max - min);
    }
private:
    int min;
    int max;
};

int main() {
    const size_t size = 200;
    int    arr[size];
    const int    min = -50;
    const int    max = 50;

    std::generate(arr, arr + size, Random(min, max + 1));

    int pair_count = 0;
    for (size_t i = 1; i < size; ++i)
        if (arr[i - 1] == arr[i])
            ++pair_count;

    std::cout << "Masiv: " << std::endl;
    std::copy(arr, arr + size, std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;

    std::cout << "pari: " << pair_count << std::endl;

    return 0;
}