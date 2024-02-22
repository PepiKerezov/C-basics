#include <stdio.h>
#include "safeint.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Wrong number of arguments");
    }
    else
    {
        struct SafeResult flag1 = safestrtoint(argv[1]);
        struct SafeResult flag2 = safestrtoint(argv[2]);
        if (flag2.errorflag = '0')
        {
            if (flag1.errorflag = '0')
            {
                struct SafeResult Result = safedivide(argv[1], argv[2]);
                printf("%d", Result.value);
            }
            else
                printf("First value is not supported");
        }
        else
            printf("Second value is not supported");
    }
    return 0;
}