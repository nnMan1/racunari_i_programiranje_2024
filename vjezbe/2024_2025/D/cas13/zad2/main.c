#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a < b ? b : a;
}

double valuePoly(double a[], int n, double x) {
    ///racuna vrijednost polinoma a stepena n u tacki x

    int tmp = 1; //cuva vrijednost x^i
    double s = 0;

    for(int i=0;i<=n;i++) {
        s += a[i] * tmp;
        tmp *= x;
    }

    return s;
}

int addPoly(double a[], int na, double b[], int nb, double c[]) {
    ///smjesta koeficijente polinoma a + b u c
    ///vraca stepen polinoma c

    int tmp = 0;

    for(int i=0;i<=max(na, nb);i++) {
        c[i] = 0;

        if(i <= na)
            c[i] += a[i];

        if(i <= nb)
            c[i] +=  b[i];

        if(c[i] != 0)
            tmp = i;
    }

    return tmp;
}

int main()
{
    int na;
    scanf("%d", &na); //stepen polinoma

    double a[na+1]; //koeficijenti polinoma
    for(int i=0;i<=na;i++)
        scanf("%lf", &a[i]);

    int nb;
    scanf("%d", &nb); //stepen polinoma

    double b[nb+1]; //koeficijenti polinoma
    for(int i=0;i<=nb;i++)
        scanf("%lf", &b[i]);

    double c[max(na, nb)];
    int nc = addPoly(a, na, b, nb, c);

    for(int i=0;i<=nc;i++)
        printf("%lfx^%d + ", c[i], i);

    return 0;
}
