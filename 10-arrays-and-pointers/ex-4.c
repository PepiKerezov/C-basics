#include <stdio.h>

void printArr(int (*p)[4], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
}

int main()
{

    int arr[3][4] = {
        {1, 2, 5, 4},
        {4, 8, 9, 10},
        {12, -1, 32, 2}};

    printArr(arr, 3);

    return 0;
}