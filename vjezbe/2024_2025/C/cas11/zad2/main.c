#include <stdio.h>
#include <stdlib.h>

void read_array(int arr[], int n) {
    ///uctavanje niza
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

void sort_array(int arr[], int n) {
    ///sortiranje niza
    for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
    if(arr[i] > arr[j]) {
        int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
    }
}

void bubble_sort(int arr[], int n) {
    for(int i=0;i<n;i++)
    for(int j=0;j<n-1;j++)
    if(arr[j] > arr[j+1]) {
        int tmp = arr   [j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
    }
}

void print_array(int arr[], int n) {
    ///stampa niza
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

int sum_array(int arr[], int n) {
    ///iterativno nalazenje sume elemenata niza
    int s = 0;

    for(int i=0;i<n;i++)
        s += arr[i];

    return s;
}

int sum_array_rec(int arr[], int n) {
    ///rekurzivno nalazenje sume elemenata niza

    if(n == 0)
        return 0;

    return sum_array_rec(arr, n-1) + arr[n-1];
}


int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    read_array(arr, n);
    bubble_sort(arr, n);
    print_array(arr, n);
    printf("\n");

    printf("suma elemenata niza je: %d", sum_array_rec(arr, n));

    return 0;
}
