#include <stdio.h>
#include <stdlib.h>

void printarr(int arr[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void permutation(int arr[], int used[], int n, int k) {
    ///postavlja k-tu cifru permutacije
    if(k == n) {
        printarr(arr, n);
        return;
    }

    for(int i=1;i<=n;i++) { //sve potecijalno moguce k-te cifre
        if(!used[i]) { //ako cifra nije vec iskoristena
            arr[k] = i; //postavimo je na k-to mjesto
            used[i] = 1; //kazemo da smo je iskoristili

            permutation(arr, used, n, k+1);

            used[i] = 0; //ispitali smo sta moze sa cifrom i
                        //na poziciji k. Vise ne koristimo cifru i
                        //za ovu poziciju pa mozemo da je oslobodimo
        }
     }
}

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n]; ///elementi permutacije
    int used[n+1]; ///elementi koje smo iskoristili

    for(int i=0;i<=n;i++)
        used[i] = 0;

    permutation(arr, used, n , 0);

    return 0;
}
