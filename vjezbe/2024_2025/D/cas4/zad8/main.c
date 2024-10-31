#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float p;
    scanf("%f", &p);

    float r = sqrt(p / M_PI);
    float o = 2 * r * M_PI;

    printf("%f", o);

    return 0;
}
