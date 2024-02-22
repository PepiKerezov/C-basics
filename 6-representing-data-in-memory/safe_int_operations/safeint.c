#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include "safeint.h"

struct SafeResult safeadd(int num1, int num2)
{
    struct SafeResult Result;
    long long flag = num1 + num2;
    if (flag < INT_MAX && flag > INT_MIN)
    {
        Result.value = num1 + num2;
        Result.errorflag = '0';
    }
    else
    {
        Result.errorflag = '1';
    }
    return Result;
}
struct SafeResult safesubstract(int num1, int num2)
{
    struct SafeResult Result;
    long long flag = num1 - num2;
    if (flag < INT_MAX && flag > INT_MIN)
    {
        Result.value = num1 - num2;
        Result.errorflag = '0';
    }
    else
    {
        Result.errorflag = '1';
    }
    return Result;
}
struct SafeResult safemultiply(int num1, int num2)
{
    struct SafeResult Result;
    long long flag = num1 * num2;
    if (flag < INT_MAX && flag > INT_MIN)
    {
        Result.value = num1 * num2;
        Result.errorflag = '0';
    }
    else
    {
        Result.errorflag = '1';
    }
    return Result;
}
struct SafeResult safedivide(int num1, int num2)
{
    struct SafeResult Result;
    long long flag = num1 / num2;
    if (flag < INT_MAX && flag > INT_MIN)
    {
        Result.value = num1 / num2;
        Result.errorflag = '0';
    }
    else
    {
        Result.errorflag = '1';
    }
    return Result;
}
struct SafeResult safestrtoint(char *string)
{
    struct SafeResult Result;
    int len = strlen(string);
    Result.value = 0;
    for (int i = 0; i < len; i++)
    {
        Result = safemultiply(Result.value, 10);
        if (Result.errorflag = '1')
            break;
        int temp = (int)string[i];
        Result = safeadd(Result.value, temp);
        if (Result.errorflag = '1')
            break;
    }
    return Result;
}
