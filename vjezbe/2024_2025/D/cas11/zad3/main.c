#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];// = {5, 6, 3, 32, 43, 23, 2};

    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);

    int m = arr[0];

    for(int i=1;i<n-1;i++)
        if(arr[i] > m)
            m = arr[i];

    printf("%d ", m);

    /*for(int i=0;i<n;i++)
        printf("%d ", arr[i]);*/

    /*
    arr[0] = 5;
    arr[1] = 4;
    arr[2] = 9;
    arr[7] = 6;*/

    /*for(int i=0;i<10;i++)
        arr[i] = i * i;*/

   /* printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    printf("%d ", arr[4]);
    printf("%d ", arr[5]);
    printf("%d ", arr[6]);
    printf("%d ", arr[7]);
    printf("%d ", arr[8]);
    printf("%d ", arr[9]);*/

    return 0;
}
