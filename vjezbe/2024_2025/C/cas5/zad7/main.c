#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int n = 5;

    //++n //prvo uveca pa iskoristi u izrazu
    //n++ // prvo se iskoristi u izrazu pa uveca
/*
    printf("%d\n", n++);
    printf("%d", n);*/

    //int m = 7 + n++;

    //printf("%d %d", n, m);

    //Napisati kod koji štampa zbir kvadrata
    //svih cijelih brojeva iz intervala [a,b]

    int a, b;
    int s = 0;

    scanf("%d%d", &a, &b);

    int i = a;

    while(i <= b) {
        s = s + i * i;
        i ++;
    }

    printf("%d", s);

    return 0;
}
