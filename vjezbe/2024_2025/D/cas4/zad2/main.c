#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;

    scanf("%d", &x);

    int j = x % 10; //j = j mod 10;
    int d = (x / 10) % 10;
    int s = x / 100;

    int z = j + d + s;

    printf("Zbir cifara je %d.", z);
    return 0;
}
