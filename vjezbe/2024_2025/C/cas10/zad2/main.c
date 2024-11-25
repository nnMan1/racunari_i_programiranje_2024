#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    //int arr[5] = {2, 5, 8, 9 ,4};
    int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    /*scanf("%d", &n);

    int arr[n];

    /*arr[0] = 5;
    arr[1] = 5 + 2;
    arr[2] = arr[1] + 7;
    arr[3] = arr[0] - 8;
    arr[4] = 9;*/

    /*scanf("%d", arr[0]);
    scanf("%d", arr[1]);
    scanf("%d", arr[2]);
    scanf("%d", arr[3]);
    scanf("%d", arr[4]);*/
    /*
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);*/

    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);


    return 0;
}
