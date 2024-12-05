#include <stdio.h>
#include <stdlib.h>

/*
Provjeriti da li je broj n prost
*/

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);

    for(int n=a;n<=b;n++) {
        int p = 1;
        for(int i=2;i<=sqrt(n);i++)
            if(n % i == 0) {
                p = 0;
                break;
            }

        if(p)
            printf("%d ", n);
    }
    return 0;
}
