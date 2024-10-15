#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;

    scanf("%f%f%f", &a, &b, &c);

    float d = b * b - 4 * a * c;

    if(d > 0) {
        float x1 = (-b - sqrt(d)) / (2 * a);
        float x2 = (-b + sqrt(d)) / (2 * a);

        printf("x1 = %f\nx2 = %f", x1, x2);
    }

    if(d == 0) {
        float x = -b/(2 * a);
        printf("x = %f", x);
    }

    if(d < 0)
        printf("Nema rjesenja");

    return 0;
}
