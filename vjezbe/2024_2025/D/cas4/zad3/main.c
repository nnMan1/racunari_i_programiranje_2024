#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);

    int j = x % 10;
    int d = x / 10 % 10;
    int s = x / 100;

    int z = 100 * j + 10 * d + s;

    printf("%d", z);

    return 0;
}
