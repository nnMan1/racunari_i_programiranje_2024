#include <stdio.h>
#include <stdlib.h>
/*Ispisati tablicu mnozenja*/
int main()
{
    int N = 5;

    printf("* |");

    for(int i=1;i<=N;i++)
        printf("%3d", i);

    printf("\n");

    for(int i=0;i<=N;i++)
        printf("---");

    printf("\n");

    for(int i=1;i<=N;i++) {
        printf("%-2d|", i);
        for(int j=1;j<=N;j++)
            printf("%3d", i * j);

        printf("\n");
    }
    return 0;
}
