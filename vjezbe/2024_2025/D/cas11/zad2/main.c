#include <stdio.h>
#include <stdlib.h>

int zbir_cifara(int n) {
    int s = 0;

    while(n != 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

int zbir_cifara_rec(int n) {
    if(n < 10)
        return n;

    return n % 10 + zbir_cifara_rec(n / 10);
}

int digitalni_korijen(int n) {
    while(n >= 10)
        n = zbir_cifara(n);

    return n;
}

int digitalni_korijen_rec(int n) {
    if(n < 10)
        return n;

    int s = zbir_cifara_rec(n);
    return digitalni_korijen_rec(s);
}

int pow(int a, int b) {

    int p = 1;

    for(int i=1;i<=b;i++)
        p = p * a;

    return p;
}

int pow_rec_v1(int a, int b) {

    if(b == 0)
        return 1;

    return pow_rec_v1(a, b-1) * a;

}

int pow_rec_v2(int a, int b) {
    if(b == 0)
        return 1;

    int tmp = pow_rec_v2(a, b / 2);
    tmp = tmp * tmp;

    if(b % 2 != 0)
        tmp *= a;

    return tmp;
}

long long int pow_rec_mod(int a, int n, int m) {
    if(n == 0)
        return 1;

    long long int tmp = pow_rec_mod(a, n / 2, m);
    tmp = (tmp * tmp) % m;

    if(n % 2 != 0)
        tmp = (tmp * a) % m;

    return tmp;
}

int main()
{
    int a, b, k;
    scanf("%d%d%d", &a, &b, &k);

    printf("%d", pow_rec_mod(a, b, pow_rec_v2(10, k)));
    return 0;
}
