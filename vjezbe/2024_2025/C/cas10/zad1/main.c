#include <stdio.h>
#include <stdlib.h>

unsigned int evenDigits(unsigned int n) {
    if(n == 0)
        return 0;

    int last_digit = n % 10;

    if(last_digit % 2 == 0)
        return evenDigits(n / 10);
    else
        return evenDigits(n / 10) * 10 + last_digit;
}

unsigned int oddDigits(unsigned int n) {
    if(n == 0)
        return 0;

    if(n % 2 == 0)
        return oddDigits(n / 10) * 10 + n % 10;
    else
        return (oddDigits(n / 10) * 10 + n % 10) * 10;
}

unsigned int digitsSum(unsigned int n) {
    int s = 0;

    while(n != 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

unsigned int digitsSumRec(unsigned int n) {
    if(n == 0)
        return 0;

    return digitsSumRec(n / 10) + n % 10;
}

unsigned int digitalRoot(unsigned int n) {

    int s=digitsSumRec(n);

    if(s < 10)
        return s;

    return digitalRoot(s);
}

int pow_iter(int a, int b) {
    int p = 1;

    for(int i=1;i<b;i++)
        p *= a;

    return p;
}

int pow_rec(int a, int b) {
    if(b == 0)
        return 1;

    //return pow_rec(a, b-1) * a;
    int tmp = pow_rec(a, b / 2);
    tmp *= tmp;

    if(b % 2 == 1)
        tmp *= a;

    return tmp;
}


long long int pow_rec_mod(int a, int b, int k) {
    if(b == 0)
        return 1;

    //return pow_rec(a, b-1) * a;
    long long int tmp = pow_rec_mod(a, b / 2, k);
    tmp = (tmp * tmp) % pow_rec(10, k);

    if(b % 2 == 1)
        tmp = (tmp * a) % pow_rec(10, k);


    return tmp;
}

int NZD_iter(int a, int b) {
    while(b != 0) {
        int q = a % b;
        a = b;
        b = q;
    }

    return a;
}

int NZD_rec(int a, int b){
    if(b == 0)
        return a;

    return NZD_rec(b, a % b);
}


int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    int y = NZD_iter(a, b);

    printf("%d", y);

    return 0;
}
