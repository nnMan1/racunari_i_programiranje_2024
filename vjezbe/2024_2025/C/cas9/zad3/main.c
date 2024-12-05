#include <stdio.h>
#include <stdlib.h>
#include "../zad1/num_lib.h"

int globalna; //postoji sve dok se program ne zavrsi

void ne_radi_nista() {

    static int broj_poziva = 0;
    broj_poziva ++;
    printf("Broj poziva funkcije ne radi nista%d \n", broj_poziva);

    register int lokalna = 3; //postoji samo unutar funkijce ne radi nista
    globalna ++;
}

int main()
{
    printf("%d\n", factoriel(5));
    globalna = 5;

    ne_radi_nista();
    ne_radi_nista();
    ne_radi_nista();
    ne_radi_nista();

    printf("%d", globalna);
    ///printf("%d", lokalna);

    return 0;
}
