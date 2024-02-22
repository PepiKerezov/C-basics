#include <stdio.h>
#include <math.h>

void FourthPower(long array[], size_t size)
{
    for (size_t i = 0; i < size; ++i)
    {
        array[i] = pow(array[i], 4);
    }
}

int main()
{

    long numbers[] = {2, 3, 4, 5, 6};
    size_t size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Numbers:\n");
    for (size_t i = 0; i < size; ++i)
    {
        printf("%ld ", numbers[i]);
    }

    FourthPower(numbers, size);

    printf("Numbers raised to the fourth power:\n");
    for (size_t i = 0; i < size; ++i)
    {
        printf("%ld ", numbers[i]);
    }

    return 0;
}
