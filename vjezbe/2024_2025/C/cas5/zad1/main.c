#include <stdio.h>
#include <stdlib.h>

/*
Napisati program koji ucitava broj bodova
studenta na ispitu. Potrebo je stampati da li
je student polozio ili pao.
*/

/*ako student ima 48 poena i manje od 50,
poklonicemo mu 2 poena da bi polozio*/

int main()
{
    int n;
    scanf("%d", &n);

    /*if(n >= 48 && n < 50)
        n = n + 2;
    else
        n = n + 0;*/
    /*if(n >= 50)
        printf("Polozio");
    else
        printf("Pao");*/

    n = n + (n >= 48 && n < 50 ? 2 : 0);
    //n >= 50 ? printf("Polozio") : printf("Pao");
    printf("%s", n>=50 ? "Polozio" : "Pao");

    /*ako je broj bodova paran stampari 1
    inace stampati 2 pomocu ternarnog operatora.*/

    //print("%d", n % 2 == 0 ? 1 : 2);

    return 0;
}
