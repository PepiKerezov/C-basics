#include <stdio.h>
#include <stdbool.h>

void bubblesort(
    int arr[], int arrlen,
    int (*compare)(const void *const, const void *const),
    void (*swapelements)(void *, void *));

int compareasc(const void *const p1, const void *const p2);
int comparedesc(const void *const p1, const void *const p2);
void swap(void *p1, void *p2);

int main()
{

    int arr[] = {1, 2, 14, 34, 215, 1212, 10, -1212, -1, 98};

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }

    bubblesort(arr, sizeof(arr) / sizeof(arr[0]), compareasc, swap);
    printf("\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }

    bubblesort(arr, sizeof(arr) / sizeof(arr[0]), comparedesc, swap);
    printf("\n");
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubblesort(
    int arr[], int arrlen,
    int (*compare)(const void *const, const void *const),
    void (*swapelements)(void *, void *))
{
    int i, j;
    bool swapped;
    for (i = 0; i < arrlen - 1; i++)
    {
        swapped = false;
        for (j = 0; j < arrlen - i - 1; j++)
        {
            if ((*compare)(&arr[j], &arr[j + 1]) == 1)
            {
                (*swapelements)(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
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

    if (*(int *)p1 < *(int *)p2)
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

void swap(void *p1, void *p2)
{

    int temp = *(int *)p1;
    *(int *)p1 = *(int *)p2;
    *(int *)p2 = temp;
}