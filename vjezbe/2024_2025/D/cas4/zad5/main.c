#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(a == b)
        printf("%d je jedanak sa %d\n", a, b);

    if(a != b)
        printf("%d je razlicit od %d\n", a, b);

    if(a > b)
        printf("%d je veci od %d\n", a, b);

    if(a < b)
        printf("%d je manji od %d\n", a, b);

    if(a >= b)
        printf("%d je veci ili jednak od %d\n", a, b);

    if(a <= b)
        printf("%d je manji ili jednak od %d\n", a, b);

    return 0;
}
