#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0;i<2*n;i++) {
        for(int j=0;j<(n - 1 - (i / 2)) * 4;j++)
            printf(" ");

        if(i % 2 == 0)
            for(int j=0;j<=4*(i+1);j++)
                printf("%c", j % 4 == 0 ? '+' : '-');
         else
            for(int j=0;j<=4*i;j++)
                printf("%c", j % 4 == 0 ? '|' : ' ');


        printf("\n");
    }

    for(int j=0;j<=4*(2*n - 1);j++)
        printf("%c", j % 4 == 0 ? '+' : '-');


    return 0;
}
