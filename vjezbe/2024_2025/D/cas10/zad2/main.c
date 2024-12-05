#include <stdio.h>
#include <stdlib.h>

double proizvod(double, double);

int minimum(int x ,int y);

int main()
{
    /*int x, y;
    scanf("%d %d", &x, &y);
    int c = proizvod(x, y);

    printf("%d", c);*/

    double a, b;
    scanf("%lf%lf", &a, &b);

    double c = minimum(a, b);
    printf("%lf", c);

    return 0;
}

double proizvod(double a, double b) {
    return a * b;
}

int minimum(int x, int y) {
    if(x < y)
        return x;

    return y;
}
