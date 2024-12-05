#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <float.h>
#include "num_lib.h"

int sum(int x, int y) {
    int z = x + y;

    x = x + 2;

    return z;
}

double proizvod(double x, double y) {
    return x * y;
}

int main()
{
    printf("max_cifra %d\n", max_cifra(357655));
    printf("max_cifra_rec %d\n", max_cifra_rec(357655));

    /*
    printf("char min = %d, char max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("short min = %d, short max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("int min = %d, int max = %d\n", INT_MIN, INT_MAX);
    printf("long long int min = %ld, int max = %ld\n", LONG_MIN, LONG_MAX);
    printf("float min = %.20f, flaot max = %f\n", FLT_EPSILON, FLT_MAX);


    /*int t;
    scanf("%d", &t);

    printf("%d", prost(t));*/

    return 0;
}
