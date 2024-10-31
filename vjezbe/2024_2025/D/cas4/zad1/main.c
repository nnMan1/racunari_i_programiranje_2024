#include <stdio.h>
#include <stdlib.h>

/*
Napisati program koji ucitava dva broja
i stampa njihov zbir
*/

int main()
{
    //printf("Marko kaze: \"Programiranje nije tesko.\"");

    int a;
    int b;
    int z;

    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);

    z = a + b;

    printf("Zbir brojeva je %d.", z);
    return 0;
}

