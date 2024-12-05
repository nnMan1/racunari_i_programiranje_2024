#include <stdio.h>
#include <stdlib.h>
#include "my_lib.h"

int N = 100;
extern int M;
//M promjenljiva postoji ali se nalazi u nekom drugom fajlu

void f1() {
    static int x = 0;
    x ++;

    printf("%d\n", x);
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    printf("NZD(%d, %d) = %d\n", a, b ,NZD(a, b));
    printf("NZS(%d, %d) = %d\n", a, b ,NZS(a, b));
    printf("zbir_cifara_rec(%d) = %d \n", a, zbir_cifara_rec(a));
    printf("evenDigits(%d) = %d\n", a, evenDigits(a));
    printf("oddDigits(%d) = %d\n", a, oddDigits(a));

    //register int x;
   /* printf("%d\n", M);
    for(int i=2;i<=N;i++)
        if(prost_broj(i))
            printf("%d ", i);*/

    return 0;
}
