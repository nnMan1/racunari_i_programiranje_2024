#ifndef NUM_LIB_H_INCLUDED
#define NUM_LIB_H_INCLUDED

#include <stdlib.h>

int factoriel(int n) {

    //printf("factoriel(%d)", n);

    if(n == 1)
        return 1;

    int t = factoriel(n - 1);
    return n * t;
}

int prost(int x) {

    for(int i=2;i<=sqrt(x);i++)
        if(x % i == 0)
            return 0;

    return 1;
}

int zbir_cifara(int x) {
    int s = 0;

    while(x != 0) {
        s += x % 10;
        x /= 10;
    }

    return s;
}

int zbir_cifara_rec(int x) {
    if(x == 0)
        return 0;

    int s = zbir_cifara_rec(x / 10);
    s += x % 10;

    return s;
}

int max_cifra(int x) {

    int m = 0;

    while(x != 0) {
        if(x % 10 > m)
            m = x % 10;

        x = x / 10;
    }

    return m;
}

int max_cifra_rec(int x) {
    if(x == 0)
        return 0;

    int t = max_cifra_rec(x / 10);

    if(x % 10 > t)
        return x % 10;

    return t;
}

#endif // NUM_LIB_H_INCLUDED
