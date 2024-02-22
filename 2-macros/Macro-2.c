#include <stdio.h>
#define COMPARE(a, b) c = (a > b) ? a : b

int main()
{
    int a = 7;
    int b = 5;
    int c;
    COMPARE(a, b);
    printf("%d", c);
    return 0;
}