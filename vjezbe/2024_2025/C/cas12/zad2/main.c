#include <stdio.h>
#include <stdlib.h>

void popuni_matricu(int n, int m, int matr[][m]) {
    for(int i=0;i<10;i++) //brojac po vrstama
        for(int j=0;j<10;j++) //za fiksiranu vrstu obijdemo sve kolone
            matr[i][j] = (i + 1) * (j + 1);
}

void print_matricu(int n, int m, int matr[][m]) {
    for(int i=0;i<10;i++) {
        for(int j=0;j<10;j++)
            printf("%d ", matr[i][j]);

        printf("\n"); //na kraju svake vrste stampamo \n
    }
}

int main()
{
    int matr[10][10];

    popuni_matricu(10, 10, matr);
    print_matricu(10, 10, matr);

    return 0;
}
