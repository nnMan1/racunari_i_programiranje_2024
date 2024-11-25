#include <stdio.h>
#include <stdlib.h>

/*
Napisati program koji nalazi maksimalni element niza
*/

int arr_min(int arr[], int n) {
    int m = arr[0];

    for(int i=0;i<n;i++)
        if(arr[i] < m)
            m = arr[i];

    return m;
}


int main()
{

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    int m = arr[0];
    for(int i=0;i<n;i++)
        if(arr[i] > m)
            m = arr[i];

    printf("Maksimum niza je %d\n", m);
    printf("Minimum niza je %d\n", arr_min(arr, n));

    return 0;
}
