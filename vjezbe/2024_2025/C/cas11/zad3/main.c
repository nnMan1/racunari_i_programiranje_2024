#include <stdio.h>
#include <stdlib.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

int search(int arr[], int n, int k) {
   //vraca indeks na kojem se prvi put javlja vrijednost k u nizu arr
   //vraca -1 ako se k ne nalazi u nizu

    for(int i=0;i<n;i++)
        if(arr[i] == k)
            return i;

    return -1;
}

int search_rec(int arr[], int n, int k) {
   //vraca indeks na kojem se prvi put javlja vrijednost k u nizu arr
   //vraca -1 ako se k ne nalazi u nizu
   //rekurzivna funkcija

   if(n == 0)
        return -1; ///ako je niz prazan sigurno ne sadrzi k

    if(arr[n-1] == k) {
        int tmp = search_rec(arr, n-1, k);

        if(tmp == -1)
            return n-1;

        return tmp;
    }

    return search_rec(arr, n-1, k); ///ako je posljednji elem razl od k, vidi ima li k nedje ranije
}

int search_last(int arr[], int n, int k) {
   //vraca indeks na kojem se posljednji put javlja vrijednost k u nizu arr
   //vraca -1 ako se k ne nalazi u nizu

   for(int i=n-1;i>=0;i--)
        if(arr[i] == k)
            return i;

    return -1;
}


int search_last_rec(int arr[], int n, int k) {
   //vraca indeks na kojem se posljednji put javlja vrijednost k u nizu arr
   //vraca -1 ako se k ne nalazi u nizu
   //rekurzivna funkcija
    if(n == 0)
        return -1;

    if(arr[n-1] == k)
        return n - 1;

    search_last_rec(arr, n-1, k);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    read_array(arr, n);

    printf("%d ", search_last_rec(arr, n, 5));


    return 0;
}
