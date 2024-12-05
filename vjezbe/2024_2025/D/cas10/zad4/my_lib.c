#include "my_lib.h"

int M = 500;

int prost_broj(int n) {
    for(int i=2;i<=sqrt(n);i++)
        if(n % i == 0)
            return 0;

    return 1;
}

int NZD(int a, int b) {
    while(b != 0) {
        int q = a % b;
        a = b;
        b = q;
    }

    return a;
}

int NZS(int a, int b) {
    return a * b / NZD(a, b);
}

int zbir_cifara_rec(int n) {
    if(n == 0)
        return 0;

    int t = zbir_cifara_rec(n / 10);
    int s = t + n % 10;

    return s;
}

unsigned int evenDigits(unsigned int n) {
    if(n == 0)
        return 0;

    if(n % 2 == 0)
        return evenDigits(n / 10);

    return evenDigits(n / 10) * 10 + n % 10;
}

unsigned int oddDigits(unsigned int n) {
    if(n == 0)
        return 0;

    int tmp = oddDigits(n / 10);

    if(n % 2 == 0)
        return tmp * 10 + n % 10;

    return (tmp * 10 + n % 10) * 10;
}


