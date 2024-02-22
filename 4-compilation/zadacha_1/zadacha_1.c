#include <stdio.h>
#define MACRO(A, B) (A + B) * (A + B)

int main()
{
    int a = 5;
    int b = 10;
    int c = MACRO(a, b);
    printf("c = %d", c);
    return 0;
}