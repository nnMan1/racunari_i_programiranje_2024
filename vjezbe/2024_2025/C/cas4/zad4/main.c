#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y;
    scanf("%f%f", &x, &y);

    float a = (x + y) / 2;
    float g = sqrt(x * y);

    printf("Aritm = %f \nGeom = %f", a, g);

    return 0;
}
