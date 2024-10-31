#include <stdio.h>
#include <stdlib.h>

/*
za date brojeve k i n,
naci sumu s = k + k^2 + k^3 + ... + k^n
*/

int main()
{
    int k, n;
    scanf("%d%d", &k, &n);

    int i=1;
    int s=0;
    int e=k;

    while(i<=n) {
        s = s + e;
        e = e * k;
        i++;
    }

    printf("%d", s);
    return 0;
}
