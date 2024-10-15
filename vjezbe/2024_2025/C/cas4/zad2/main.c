#include <stdio.h>
#include <stdlib.h>

/*
izracunati zbir cifara trocifrenog broja
*/

int main()
{
    int x;

    printf("Unesite trocifren broj: ");
    scanf("%d", &x);

    int j = x % 10;
    int d = (x / 10) % 10;
    int s = x / 100;

    int z = j + d + s;

    printf("Zbir cifara boja %d je %d", x, z);

    return 0;
}
