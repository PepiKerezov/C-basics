#include <stdio.h>

int main()
{

    int a = 5;
    int b = 10;

    int result = compareasc(&a, &b);
    printf("%d ", result);
    return 0;
}

int compareasc(const void *const p1, const void *const p2)
{
    int result = 0;

    if (*(int *)p1 > *(int *)p2)
    {
        result = 1;
    }
    else if (*(int *)p1 == *(int *)p2)
    {
        result = 0;
    }
    else
    {
        result = -1;
    }

    return result;
}

int comparedesc(const void *const p1, const void *const p2)
{
    int result = 0;

    if (*(int *)p1 > *(int *)p2)
    {
        result = -1;
    }
    else if (*(int *)p1 == *(int *)p2)
    {
        result = 0;
    }
    else
    {
        result = 1;
    }

    return result;
}