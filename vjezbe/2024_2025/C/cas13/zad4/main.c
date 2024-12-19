#include <stdio.h>
#include <stdlib.h>

int napadaju(int i1, int j1, int i2, int j2) {
    ///provjerava da li se dame na pozicijama (i1, j1) i (i2, j2) napadaju

    if(i1 == i2 || j1 == j2 || i1 - j1 == i2 - j2 || i1 + j1 == i2 + j2)
        return 0;

    return 1;
}

int postavi_damu(int n, int dame[], int k) {

    if(k == n)
        return 1;

    ///postavi damu u vrstu k
    for(int i=0;i<n;i++) { ///pokusamo da postavimo damu u vrstu k i kolonu j
        ///treba da ispitamo da li napada neku od ranije postavljenih dama

        int ok = 1;

        for(int j=0;j<k;j++) {
            if(!napadaju(k, i, j, dame[j])) { //da li napada damu u koloni j
                ok = 0;
                break;
            }
        }

        if(ok) { ///ako ne napada ni jednu vec postavljenu damu
            dame[k] = i; ///postavimo damu k na poziciju i
            if(postavi_damu(n, dame, k+1)) {
                return 1;
            }
        }

    }

    return 0;
}

void stampaj_tablu(int n, int dame[]) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(dame[i] != j)
                printf(". ");
            else
                printf("D ");
        }
        printf("\n");
    }
}

void telefon(int n, int arr[], int k) {
    if(n == k) {
        ///istampaj arr
        return;
    }

    if(arr[k-1] == 1) {
        arr[k] = 8;
        telefon(n, arr, k+1);

        arr[k] = 6;
        telefon(n, arr, k+1);
    }
}

int main()
{
    int n; //broj dama
    scanf("%d", &n);

    int dame[n];

    for(int i=0;i<n;i++)
        dame[i] = -1; ///znaci da se u toj vrsti ne nalazi dama

    postavi_damu(n, dame, 0);
    stampaj_tablu(n, dame);

    return 0;
}
