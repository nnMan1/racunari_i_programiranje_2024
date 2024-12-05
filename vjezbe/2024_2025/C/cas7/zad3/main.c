#include <stdio.h>
#include <stdlib.h>

int zbir_djelilaca(int a) {
    int s=0;

    for(int i=1;i<a;i++)
        if(a % i == 0)
            s += i;

    return s;
}

int prost_broj(int n) {
    ///vraca 1 ako je broj prost inace vraca 0

    for(int i=2;i<n;i++)
        if(n % i == 0)
            return 0;

    return 1;
}

void print(int n) {
    printf("%d", n);
    return;
}

int NZD(int a, int b) {
    while(b != 0) {
        int q = a % b;
        a = b;
        b = q;
    }

    return a;
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    int nzd = NZD(a, b);
    printf("NZD(%d, %d) = %d", a, b, nzd);

    /*int n = 24;

    int s = zbir_djelilaca(n);

    printf("Zbir djelilaca je %d.\n%s", s,
            prost_broj(n) ? "Broj je prost" : "Broj nije prost");
    */
    return 0;
}
