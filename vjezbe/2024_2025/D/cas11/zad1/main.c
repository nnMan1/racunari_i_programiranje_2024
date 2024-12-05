#include <stdio.h>
#include <stdlib.h>

int broj_cifara(int n) {
    int br = 0;

    while(n != 0) {
        br ++;
        n /= 10;
    }

    return br;
}

int srednja_cifra(int n) {
    int br = broj_cifara(n);

    for(int i=0;i<br/2;i++)
        n /= 10;

    return n % 10;
}

int main()
{
    int x;
    scanf("%d", &x);

    printf("Srednja cifra je %d", srednja_cifra(x));
    return 0;
}
