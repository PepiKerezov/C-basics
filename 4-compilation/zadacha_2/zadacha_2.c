#include <stdio.h>

int main()
{
    int a = 12;
    int b = 18;
    int i;
    for (i = 1; i <= a * b; i++)
    {
        if (i % a == 0)
        {
            if (i % b == 0)
            {
                break;
            }
        }
    }
    printf("NOK = %d", i);
    return 0;
}