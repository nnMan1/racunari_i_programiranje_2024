#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int s = 0;
    for(int i=1;i<=n+1;i++)
        s += i;

    s = (n+1)*(n+2) / 2;

    int br_t = 0;

    for(int i=0;i<=n;i++) {
        for(int j=i;j<=n;j++)
            br_t += i+j;
        //br_t += (i + n) * (n - i + 1) / 2 + (n-i+1) * i;
    }

    printf("%d %d", s, br_t);

    return 0;
}
