#include <stdio.h>
#include <stdlib.h>

void print_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);
}

void inc(int x) {
    x++;
}

void inc_arr(int arr[], int n) {
    arr[0]++; ///niz se predaje po referenci
            /// sve sto izmijenimo bice
            ///izmijenjeno u originalnom nizu
}

int main() {
    int a = 5;
    inc(a);
    printf("%d \n", a);

    int arr[10] = {5, 9, 3, 4, 5, 1};

    print_array(arr, 10);
    printf("\n");

    inc_arr(arr, 10);
    print_array(arr, 10);
    printf("\n");

    inc(arr[0]);
    print_array(arr, 10);

    return 0;
}
