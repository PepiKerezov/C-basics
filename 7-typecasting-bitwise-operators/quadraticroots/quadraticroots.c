#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

struct QuadraticRootsResult findroots(double a, double b, double c)
{
    struct QuadraticRootsResult result;
    double D;
    D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        result.norealroots = '1';
    }
    else if (D == 0)
    {
        result.norealroots = '0';
        result.x1 = (-1 * b) / (2 * a);
        result.x2 = (-1 * b) / (2 * a);
    }
    else
    {
        result.norealroots = '0';
        result.x1 = (-1 * b) + (sqrt(D)) / (2 * a);
        result.x2 = (-1 * b) - (sqrt(D)) / (2 * a);
    }
    return result;
}