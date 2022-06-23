#include <stdio.h>

int doCnt(const int arr[], int size) {
    int cnt = 0;
    const int* p = arr;

    for (; (0 < size) && (*arr == 0); --size, ++arr) { ; }

    for (p = arr; (0 < size); --size, ++p) {
        if (*p) {
            cnt += (*arr < 0) ^ (*p < 0);
            arr = p;
        }
    }

    return cnt;
}

int main() {
    int arr[] = { 0, -2, 0, -10, 2, -1, 0, 0, 3, 2, -3 };

    printf("cnt = %d\n", doCnt(arr, sizeof(arr) / sizeof(*arr)));

    return 0;
}