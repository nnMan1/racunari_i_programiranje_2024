#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int baci_kocku() {
    int x = rand() % 6 + 1;
    return x;
}

void igra() {

    int k1 = baci_kocku();
    int k2 = baci_kocku();
    int score = k1 + k2;

    printf("%d %d\n", k1, k2);

    if(score == 7 || score == 11) {
        printf("Igrac pobjedjuje");
        return;
    }

    if(score == 2 || score == 3 || score == 12) {
        printf("Igrac je izgubio");
        return;
    }

    while(1) {
        k1 = baci_kocku();
        k2 = baci_kocku();
        printf("%d %d\n", k1, k2);

        if(k1 + k2 == score) {
            printf("Igrac pobjedjuje");
            return;
        }

        if(k1 + k2 == 7) {
            printf("Igrac je izgubio");
            return;
        }
    }
}

int main()
{
    srand(time(NULL));

    igra();
    return 0;
}
