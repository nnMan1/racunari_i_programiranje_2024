#include <stdio.h>
#include <stdlib.h>

int simetrican(int arr[], int l, int r) {
    if(l >= r)
        return 1;

    if(arr[l] != arr[r])
        return 0;

    return simetrican(arr, l+1, r-1);
}

void max_simetrican(int arr[], int n) {

    int ml = 0, mr = 0; //cuvamo pocetak i kraj najduzeg podniza

    for(int i=0;i<n;i++) //pocetak podniza
        for(int j=i+1;j<n;j++) //kraj podniza
            if(simetrican(arr, i, j) && mr - ml < j - i) {
                ml = i;
                mr = j;
            }

    for(int k=ml;k<=mr;k++)
        printf("%d ", arr[k]);
}

int main()
{
    int arr[] = {1, 2, 3, 2, 5, 4, 5 ,2 ,2 ,1};
    max_simetrican(arr, 10);
    return 0;
}
