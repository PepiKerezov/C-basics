#include <stdio.h>
#include "mystrings.h"

int strlenght(char string[])
{
    int i = 0;
    for (i = 0; string[i] != '\0'; i++)
    {
    }
    return i;
}

void strconcat(char *string1, char *string2)
{
    int i = 0;

    while (string1[i] != '\0')
    {
        i++;
    }

    for (int j = 0; string2[j] != '\0'; j++, i++)
    {
        string1[i] = string2[j];
    }
    string1[i] = '\0';
}

int strcompare(char string1[], char string2[])
{
    int i = 0;
    int j = 0;
    int a = 0;

    for (i = 0; string1[i] != '\0' && string2[i] != '\0'; i++)
    {

        if (string1[i] < string2[i])
        {
            a = -1;
            break;
        }
        if (string1[i] > string2[i])
        {
            a = 1;
            break;
        }
    }

    return a;
}