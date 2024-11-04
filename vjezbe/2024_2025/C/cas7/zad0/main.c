#include <stdio.h>
#include <stdlib.h>

/**
Za unijeto n stampati piramidu kao sa slike

n = 5
        1
      1 2
    1 2 3
  1 2 3 4
1 2 3 4 5
  1 2 3 4
    1 2 3
      1 3
        1
*/


int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {

        for(int j=1;j<=n-i;j++)
            printf("  ");

        for(int j=1;j<=i;j++)
            printf("%d ", j);

        printf("\n");
    }

    for(int i=n-1;i>=1;i--) {

        for(int j=1;j<=n-i;j++)
            printf("  ");

        for(int j=1;j<=i;j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
