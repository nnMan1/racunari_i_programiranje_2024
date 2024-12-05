#include <stdio.h>
#include <stdlib.h>

void read_array(int arr[], int n) {
    for(int i=0;i<n;i++)
        scanf("%d", &arr[i]);
}

int oddSegments(int arr[], int n) {
    int m = 0;

    for(int p=0;p<n;p++) {
        int k;

        for(k=p;k<n;k++)
            if(arr[k] % 2 == 0)
                break;

        if(k - p > m)
            m = k - p;
    }

    return m;
}

int oddSegmentsV2(int arr[], int n) {
    int m = 0;
    int cur = 0;

    for(int i=0;i<n;i++) {
        if(arr[i] % 2 == 1)
            cur ++;
        else
            cur = 0;

        if(cur > m)
            m = cur;
    }

    return m;
}



int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    read_array(arr, n);
    printf("%d", oddSegmentsV2(arr, n));


    return 0;
}
