#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

int main()
{
    {
        int a = 1;
        int b = 3;
        int c = 1;

        struct QuadraticRootsResult result;
        result = findroots(a, b, c);
        if (result.norealroots == '0')
            printf("Koreni %lf %lf ", result.x1, result.x2);
        else
            printf("no real roots ");
    }

    {
        float a = 1;
        float b = -10;
        float c = 1;

        struct QuadraticRootsResult result;
        result = findroots(a, b, c);
        if (result.norealroots == '0')
            printf("Koreni %lf %lf ", result.x1, result.x2);
        else
            printf("no real roots ");
    }

    {
        double a = 1;
        double b = 1;
        double c = 1;

        struct QuadraticRootsResult result;
        result = findroots(a, b, c);
        if (result.norealroots == '0')
            printf("Koreni %lf %lf ", result.x1, result.x2);
        else
            printf("no real roots ");
    }
}