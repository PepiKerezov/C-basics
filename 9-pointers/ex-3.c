#include <stdio.h>
#include <string.h>

int main()
{

    int a = 5;
    int b = 10;

    swap(&a, &b);

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    return 0;
}

void swap(void *p1, void *p2)
{
    *(int *)p1;
    *(int *)p2;

    int temp = *(int *)p1;
    *(int *)p1 = *(int *)p2;
    *(int *)p2 = temp;
}