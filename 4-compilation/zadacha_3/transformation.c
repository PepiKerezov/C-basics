#include <stdlib.h>
#include <string.h>
#include "transformation.h"

struct transformation Trans_function(char string[])
{
    struct transformation Trans;

    size_t lenght = strlen(string);
    int isnum = 1;
    int i = 0;
    if (string[0] == '-')
    {
        i = 1;
    }
    for (; i < lenght; i++)
    {
        if (string[i] < '0' || string[i] > '9')
        {
            isnum = 0;
        }
    }
    if (isnum)
    {
        Trans.result = atoi(string);
        Trans.error[0] = '\0';
    }
    else
    {
        Trans.result = 0;
        strcpy(Trans.error, "Invalid input string");
    }
    return Trans;
}