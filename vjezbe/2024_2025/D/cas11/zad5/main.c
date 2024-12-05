#include <stdio.h>
#include <stdlib.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void print_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void bubble_sort(int arr[], int n) {
    for(int k=0;k<n;k++) {
        for(int i=0;i<n-1;i++)
            if(arr[i] > arr[i+1]) {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i +1] = tmp;
            }
    }
}

void selection_sort(int arr[], int n) {
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++)
        if(arr[i] > arr[j]) {
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }
}

int zbir_elemanta(int arr[], int n) {
    int s = 0;

    for(int i=0;i<n;i++)
        s += arr[i];

    return s;
}

double prosjek(int arr[], int n) {
    return (double)zbir_elemanta(arr, n) / n;
}

int br_pojavljivanja(int arr[], int n, int k) {
    ///koliko puta se broj k javlja u arr

    int br = 0;

    for(int i=0;i<n;i++)
        if(arr[i] == k)
            br ++;

    return br;
}

int mode(int arr[], int n) {
    ///broj koji se javlja najve'i broj puta u nizu

    int m_val = arr[0];
    int cnt = br_pojavljivanja(arr, n, arr[0]);

    for(int i=1;i<n;i++) {
        if(br_pojavljivanja(arr, n, arr[i]) > cnt) {
            m_val = arr[i];
            cnt = br_pojavljivanja(arr, n, arr[i]);
        }
    }

    return m_val;
} ///ako je niz sortiran mode moze da se nadje za O(n) operacija

void inc(int x) {
    x++;
}

void inc_arr(int arr[], int n) {
    for(int i=0;i<n;i++)
        arr[i]++;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    read_array(arr, n);

    print_array(arr, n);
    printf("\n");

    selection_sort(arr, n);

    print_array(arr, n);
    printf("\n");

    printf("Avg(arr) = %lf\n", prosjek(arr, n));
    printf("Mode(arr) = %d\n", mode(arr, n));



    /*int x = 5;

    inc(x);
    printf("%d\n", x);

    int arr[] = {1, 3, 4, 6};
    inc_arr(arr, 4);
    inc(arr[0]);

    for(int i=0;i<4;i++)
        printf("%d ", arr[i]);*/

    return 0;
}
