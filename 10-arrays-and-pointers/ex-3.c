#include <stdio.h>

void strhalf(char str[], char **p)
{
    int len = 0;
    for (int i = 0; *(str + i) != '\0'; i++)
    {
        len++;
    }
    *p = *p + (len / 2);
}

int main()
{

    char str[] = "Ivane";
    char *p = str;
    printf("%s \n", p);
    strhalf(str, &p);

    printf("%s \n", p);

    return 0;
}