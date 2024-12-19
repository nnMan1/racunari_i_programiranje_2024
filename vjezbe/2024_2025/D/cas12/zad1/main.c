#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void read_int(int x) {
    scanf("%d", &x);
}

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void print_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void update_array(int a, int arr[], int n) {
    ///svaki element niza arr mijenja po sljedecim pravilima:
    ///ako je element veci od 0, umanjuje ga za a
    ///a u suprotnom ga uvecava za a

    for(int i=0;i<n;i++)
        if(arr[i] > 0)
            arr[i] -= a;
        else
            arr[i] += a;
}

void update_array_rec(int a, int arr[], int n) {
    ///rekurzivnu funkciju
    ///svaki element niza arr mijenja po sljedecim pravilima:
    ///ako je element veci od 0, umanjuje ga za a
    ///a u suprotnom ga uvecava za a

    if(n == 0)
        return;

    if(arr[n-1] > 0)
        arr[n-1] -= a;
    else
        arr[n-1] += a;

    update_array_rec(a, arr, n-1);
}

int min_array(int a, int arr[], int n) {
    ///vraca minimalni element niza arr koji je veci  od a
    ///ako takav element ne postoji vratiti a-1

    /*
    int m = a - 1;
    int i = 0;

    while(i < n && arr[i] <= a)
        i++;

    if(i == n)
        return a-1; ///ako smo stigli do kraja niza i nismo nasli element veci od a vracmo a-1

    m = arr[i]; ///postavljamo minimum na prvi element u nizu koji je veci od a
    */

    int m = INT_MAX;
    int i = 0;
    for(;i<n;i++) ///ispitamo ostale elemente da li su veci od a i menji od dosadasnjeg minimuma
        if(arr[i] > a && arr[i] < m)
            m = arr[i];

    return m == INT_MAX ? a - 1 : m;

}

int min_array_rec(int a, int arr[], int n) {
    ///rekurzivna funkcija
    ///vraca minimalni element niza arr koji je veci  od a
    ///ako takav element ne postoji vratiti a-1
    if(n == 0)
        return a-1;

    int m = min_array_rec(a, arr, n-1); ///najmanji element koji je veci od a medju prvih n-1 clanova niza

    if(arr[n-1] > a) { ///ako je posljednji elem veci od a -> kandidat za min
        if(m == a-1 || m > arr[n-1]) ///ako medju prvih n-1 nije bilo broja veceg od a
            m = arr[n-1];           ///ili je bilo ali je taj broj veci od poslednjeg elem niza
    }

    return m;
}

int min_array_index(int a, int arr[], int n) {
    ///vraca indeks minimalnog elementa niza koji je veci od a.
    ///ako takav element ne postoji vratiti -1

    int m = -1;

    for(int i=0;i<n;i++)
        if(arr[i] > a && (m == -1 || arr[m] > arr[i]))
            m = i;

    return m;
}

int min_array_index_rec(int a, int arr[], int n) {
    ///rekurzivnu funkciju
    ///vraca indeks minimalnog elementa niza koji je veci od a.
    ///ako takav element ne postoji vratiti -1

    if(n == 0)
        return -1;

    int m = min_array_index_rec(a, arr, n-1);

    if(arr[n-1] > a && (m == -1 || arr[m] > arr[n-1]))
        m = n-1;

    return m;
}



int main()
{
    int n, a;
    //read_int(n); //Ne moze ovako, jer se za int predaje kopija
    scanf("%d%d", &n, &a);

    int arr[n];
    read_array(arr, n);

    printf("%d", min_array_index_rec(a, arr, n));




    return 0;
}
