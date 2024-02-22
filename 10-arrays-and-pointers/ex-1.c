#include <stdio.h>

int strlen(char *arr)
{
    char *p = arr;
    int len = 0;
    while (*p != '\0')
    {
        len++;
        p++;
    }
    return len;
}

int main()
{

    char arr[] = "Ivane";
    int len = strlen(arr);
    printf("%d", len);

    return 0;
}