#include <stdio.h>
#include <stdlib.h>

void print_perm(int perm[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ", perm[i]);

    printf("\n");
}

void perms(int perm[], int n, int used[], int k) {
    if(k == n) {
        print_perm(perm, n);
        return;
    }

    for(int i=1;i<=n;i++) {
        if(used[i] == 0) {
            perm[k] = i; ///postavimo vrijednost i na poziciju k
            used[i] = 1; ///kazemo da je vrijednost iskoristena da je ne bi koristili kasnije

            perms(perm, n, used, k+1);

            used[i] = 0; ///oslobadjamo vrijednost i,
                         ///na poziciji k cemo da koristimo neku drugu vrijednost
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    int perm[n];
    int used[n+1];

    for(int i=0;i<n+1;i++)
        used[i] = 0;

    perms(perm, n, used, 0);



    return 0;
}
