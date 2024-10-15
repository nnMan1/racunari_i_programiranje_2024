#include <stdio.h>
#include <stdlib.h>

/*
Napisati program
koji racuna zbir dva broja.

Korisnik unosi dva broja.
Stampati zbir brojeva.
*/

int main()
{

    //printf("Marko: \"dsadas\"\n");
    int a; //imacu jednu promjenljivu koja se zove x i cjelobrojna je
    int b;
    int z;

    printf("a = ");
    scanf("%d", &a); //sa "%d" smo rekli da ucitavamo cio broj
                      //sa  &a smo rekli da se vrijednost smjesta u pr a
    printf("b = ");
    scanf("%d", &b);

    z = a + b;

    printf("a + b = %d", z);

    return 0;
}
