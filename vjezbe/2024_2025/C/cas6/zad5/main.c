#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 10;

    printf("* |");

    for(int i=1;i<=n; i++)
        printf("%3d", i);

    printf("\n");
    printf("---");
    for(int i=1;i<=n;i++)
        printf("---");

    printf("\n");

    for(int i=1;i<=n;i++) {
        printf("%-2d|", i);

        for(int j=1;j<=n;j++)
            printf("%3d", i * j);

        printf("\n");
    }
    return 0;
}
