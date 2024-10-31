#include <stdio.h>
#include <stdlib.h>

/**
Stampati sve cifre broja x bez duplikata
*/

int main()
{
    int x;
    scanf("%d", &x);

    while(x != 0) {
        int n = x / 10;
        int k = x % 10;

        int s = 0;

        while(n != 0) {
            if(n % 10 == k)
                s = 1;

            n /= 10;
        }

        if (s == 0) {
            printf("%d", k);
        }

        x /= 10;
    }

    return 0;
}
