#include <stdio.h>

int main()
{

    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);

    double *pa = &a;
    double *pb = &b;

    printf("pa = %p \n", pa);
    printf("pb = %p \n", pb);
    printf("*pa = %lf \n", *pa);
    printf("*pb = %lf \n", *pb);

    return 0;
}