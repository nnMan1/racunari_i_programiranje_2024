#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double aritmeticka_sredina(int arr[], int n) {
    ///racuna aritmeticku sredinu brojeva
    int s = 0;

    for(int i=0;i<n;i++)
        s += arr[i];

    return (double)s / n;
}

int zad18(int arr[], int n, double eps, int ret[] ) {
    ///vraca broj elemenata niza arr
    ///koji su na rastojanju manjem od eps od aritmeticke sredine niza arr
    ///u niz ret pocevsi od pocetka stavljati elemente koji zadovoljavaju uslov

    double as = aritmeticka_sredina(arr, n);
    int cnt = 0;

    for(int i=0;i<n;i++)
        if(fabs(arr[i] - as) < eps)
            ret[cnt++] = arr[i];

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    printf("%lf\n", aritmeticka_sredina(arr, n));

    int brr[n];
    int cnt = zad18(arr, n, 1, brr);

    for(int i=0;i<cnt;i++)
        printf("%d ", brr[i]);
    return 0;
}
