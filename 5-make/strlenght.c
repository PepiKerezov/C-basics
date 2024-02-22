#include <stdio.h>
#include "mystrings.h"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Error - Wrong number of parameters");
    }
    else
    {
        printf("%d", strlenght(argv[1]));
    }
}