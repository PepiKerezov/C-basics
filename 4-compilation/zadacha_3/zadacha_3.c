#include "transformation.h"
#include <stdio.h>

int main()
{
    char str1[] = "123";
    char str2[] = "12ab3";
    struct transformation Valid = Trans_function(str1);
    printf("Input: %s, Result: %ld, Error: %s\n", str1, Valid.result, Valid.error);
    struct transformation Invalid = Trans_function(str2);
    printf("Input: %s, Result: %ld, Error: %s\n", str2, Invalid.result, Invalid.error);
    return 0;
}