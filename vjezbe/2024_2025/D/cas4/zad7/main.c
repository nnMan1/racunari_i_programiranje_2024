#include <stdio.h>
#include <stdlib.h>
/*
rešava kvadratnu jednacinu ax^2 + bx + c = 0 za zadate vrijednosti
parametara a b c.
*/
int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);

    float d = b * b - 4 * a *c;

    if(d > 0) {
        float x1 = (-b - sqrt(d)) / (2 * a);
        float x2 = (-b + sqrt(d)) / (2 * a);
        printf("x1 = %f \nx2 = %f", x1 , x2);
    } else {
        if(d == 0) {
            float x = -b / (2 * a);
            printf("x = %f", x);
        } else {
            printf("Jednacina nema rjes");
        }
    }

    return 0;
}
