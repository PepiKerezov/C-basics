#include <stdio.h>
#define SIZE 5

int main()
{

    int arr[SIZE] = {11, 54, 244, 50, 69};

#if defined _WIN32
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
#elif defined __linux__
    for (int i = 0; i < SIZE - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < SIZE; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }

#elif defined __APPLE__
    int i, key, j;
    for (i = 1; i < SIZE; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
#else
    int i, j;
    for (i = 0, j = SIZE - 1; i < SIZE / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

#endif

    return 0;
}