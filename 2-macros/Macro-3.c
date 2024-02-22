#include <stdio.h>

#define DEBUG_VARIABLE(variable)         \
    printf("Variable: %s\n", #variable); \
    printf("Value: %d\n", variable);     \
    printf("File: %s\n", __FILE__);      \
    printf("Line: %d\n", __LINE__);

int main()
{
    int var = 42;
    DEBUG_VARIABLE(var);
    return 0;
}