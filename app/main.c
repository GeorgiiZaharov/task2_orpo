#include <stdio.h>
#include <stdlib.h>

#include "roots.h"

int main() {
    double arr[2];
    if (roots(arr, 1, -5, 6)){
        printf("%f %f\n", arr[0], arr[1]);
    }
    else{
        printf("NO ROOTS");
    }
    return 0;
}
