#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//naci povrsinu trougla sa stranicama a, b ,c

int main()
{
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    double s = (a + b +c) / 2;
    double p = sqrt(s * (s-a) * (s-b) * (s-c));

    printf("Povrsina trougla je %lf", p);

    return 0;
}
