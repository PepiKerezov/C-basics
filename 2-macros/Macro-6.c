#include <stdio.h>

#define SWAP(A, B, TYPE) \
    TYPE temp = A;       \
    A = B;               \
    B = temp;

#define SORT(ARRAY, SIZE, TYPE, COMPARE)            \
    for (int i = 0; i < SIZE - 1; i++)              \
    {                                               \
        for (int j = 0; j < SIZE - i - 1; j++)      \
        {                                           \
            if (ARRAY[j] COMPARE ARRAY[j + 1])      \
            {                                       \
                SWAP(ARRAY[j], ARRAY[j + 1], TYPE); \
            }                                       \
        }                                           \
    }

int main()
{
    int Array[] = {5, 2, 9, 1, 5};
    int arraySize = sizeof(Array);
    SORT(Array, arraySize, int, <);

    printf("\nsorting in ascending order: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", Array[i]);
    }

    SORT(Array, arraySize, int, >);

    printf("\nsorting in descending order: ");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", Array[i]);
    }

    return 0;
}