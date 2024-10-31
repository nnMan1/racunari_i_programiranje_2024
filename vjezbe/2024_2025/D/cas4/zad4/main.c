#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float s = (a + b + c) / 2;
    float p = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("P = %f", p);

    return 0;
}
