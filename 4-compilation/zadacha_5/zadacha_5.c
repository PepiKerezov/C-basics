#include <stdio.h>
#include "maths.h"

int main()
{
    int num = 5;
    long result = factorial(num);

    printf("Factorial of %u is: %lu\n", num, result);

    return 0;
}
