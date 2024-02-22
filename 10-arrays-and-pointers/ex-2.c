#include <stdio.h>
#include <stdbool.h>

void bubblesort(
    int arr[], int arrlen);
void swap(void *p1, void *p2);

int main()
{

    int arr[] = {1, 2, 14, 34, 215, 1212, 10, -1212, -1, 98};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", *(arr + i));
    }
    bubblesort(arr, sizeof(arr) / sizeof(arr[0]));
    printf("\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", *(arr + i));
    }

    return 0;
}

void bubblesort(
    int arr[], int arrlen)
{

    bool swapped;
    for (int i = 0; i < arrlen - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < arrlen - i - 1; j++)
        {
            if (*(arr + j) > *(arr + +j + 1))
            {
                swap((arr + j), (arr + j + 1));
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void swap(void *p1, void *p2)
{

    int temp = *(int *)p1;
    *(int *)p1 = *(int *)p2;
    *(int *)p2 = temp;
}