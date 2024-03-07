#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "roots.h"

double* roots(double a, double b, double c) {
    double d = sqrt(b*b - 4*a*c);
    static double arr[2];
    if (d > 0) {
        arr[0] = (-b + d) / (2*a);
        arr[1] = (-b - d) / (2*a);
    }
    if (d == 0) {
        arr[0] = (-b) / (2*a);
    }
    if (d < 0) {
        arr[0] = 1000000;
    }
    return arr;
}
