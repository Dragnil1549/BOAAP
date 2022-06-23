#include <stdio.h>

int isprime(int);

int main(void)
{
    int number;
    int i;
    int first, second, third;

    for (i = 10; i * i < 1000; ++i) {
        if (isprime(i)) {
            number = i * i;
            first = number / 100;
            second = (number - first * 100) / 10;
            third = number % 10;
            if (first < second && second < third)
                printf("number = %i\n", number);
        }
    }
    return 0;
}

int isprime(int n)
{
    int i;
    for (i = 2; i < (n / 2); i++)
        if ((n / i) > 1 && (n % i) == 0)
            return 1;
    return 0;
}