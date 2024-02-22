#include <stdio.h>
#include <string.h>

int main()
{

    char str[255];

    printf("enter string");

    fgets(str, sizeof(str), stdin);

    char result[255];

    char *p = str;

    int i = 0;

    while (p != strchr(str, '\n'))
    {
        result[i] = str[i];
        i++;
        p++;
    }
    printf("Result = %s", result);
    printf("Result = %s", result);

    return 0;
}