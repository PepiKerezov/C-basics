#include <stdio.h>
#define DEBUG
#define SIZE 5

int sort(int arr[])
{
    int i, j;
    int sorted = 0;
    for (i = 0; i < SIZE - 1; i++)
    {

        for (int j = 0; j < SIZE - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                sorted = 1;
            }
        }
    }
    int sum = 0;
    for (i = 0; i < SIZE; i++)
    {
        if (i % 3 == 0)
            sum += arr[i];
    }
    printf("%d", sum);
#ifdef DEBUG
    for (i = 0; i < SIZE; i++)
    {
        printf("%d", arr[i]);
        if (i % 3 == 0)
            printf("%d", arr[i]);
    }
#endif
}

int main()
{
    int arr[SIZE] = {23, 2, 11, 124, 50};
    sort(arr);
    return 0;
}