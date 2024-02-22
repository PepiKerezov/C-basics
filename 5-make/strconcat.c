#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Error - Wrong number of parameters");
    }
    if (strlenght(argv[1]) > 50)
    {
        printf("The first string is too long");
    }
    else if (strlenght(argv[2]) > 50)
    {
        printf("The second string is too long");
    }
    else
    {
        strconcat(argv[1], argv[2]);
        printf("%s", argv[1]);
    }
}