#include <stdio.h>
#include <stdlib.h>
/**
ucitava dva broja i ispisuje manji od njih.*/
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    if(a < b)
        printf("%d", a);
    else
        printf("%d", b);

    return 0;
}
