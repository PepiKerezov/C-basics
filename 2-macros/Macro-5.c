#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A;       \
    A = B;               \
    B = temp;

int main()
{
    int x = 5, y = 10;

    SWAP(x, y, int);

    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}