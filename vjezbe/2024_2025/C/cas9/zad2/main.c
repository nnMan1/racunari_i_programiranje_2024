#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int baci_kocku() {
    ///vraca slucajan broj izmedju 1 i 6

    int t = rand();
    t %= 6; //t je izmejdu 0 i 5
    t += 1; //t je izmedju 1 i 6
    //rand() % 6 + 1

    return t;
}

int baci_par_kockica() {
    return baci_kocku() + baci_kocku();
}

int igra() {
    int s = baci_par_kockica();
    printf("%d\n", s);

    if(s == 7 || s == 11) {
        printf("Pobijedio\n");
        return 1;
    }

    if(s == 2 || s == 3 || s == 12) {
        printf("Izgubio");
        return 0;
    }

    while(1) {
        int s1 = baci_par_kockica();
        printf("%d\n", s1);

        if(s1 == s) {
            printf("Pobijedio");
            return 1;
        }

        if(s1 == 7) {
            printf("Izgubio");
            return 0;
        }
    }
}

int main()
{
    srand(time(NULL));

    //printf("RAND_MAX  = %d\n", RAND_MAX);

    igra();

    return 0;
}
