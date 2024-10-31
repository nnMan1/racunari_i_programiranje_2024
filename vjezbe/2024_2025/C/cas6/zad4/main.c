#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    int m;

    scanf("%f%d", &x, &m);

    float s = 0;
    float p = 1; //x ^ n

    for(int n=0;n<=m;n++) {
        s += (2*n + 1) * p / ((n + 1) * (n + 1));

        p = p * x;
    }

    printf("Suma je: %f", s);

    return 0;
}
