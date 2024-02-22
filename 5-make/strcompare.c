#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error - Wrong number of parameters");
    }
    else
    {
        if (strcompare(argv[1], argv[2]) == -1)
        {
            printf("First string is first");
        }
        else if (strcompare(argv[1], argv[2]) == 1)
        {
            printf("Second string is first");
        }
        else
        {
            printf("The two strings are equal");
        }
    }
}
