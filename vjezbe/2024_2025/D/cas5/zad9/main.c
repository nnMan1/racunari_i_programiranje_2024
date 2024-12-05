#include <stdio.h>
#include <stdlib.h>

/*
Napisati program koji nalazi drugu najmanju cifru broja
*/

int main()
{
    int n;
    scanf("%d", &n);

    int md = 10;
    int md2 = 10;

    while(n != 0) {
        if(n % 10 < md) {
            md2 = md;
            md = n % 10;
        } else
            if(n % 10 < md2)
                md2 = n % 10;

        n /= 10;
    }

    printf("%d %d", md, md2);

    return 0;
}
