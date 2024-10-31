#include <stdio.h>
#include <stdlib.h>


/**
Provjeriti da li se cifra k sadrzi u broju n
*/

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);


    int s = 0;

    while(n != 0) {
        if(n % 10 == k)
            s = 1;

        n /= 10;
    }

    if(s)
        printf("Sadrzi");
    else
        printf("Ne sadrzi");

    return 0;
}
