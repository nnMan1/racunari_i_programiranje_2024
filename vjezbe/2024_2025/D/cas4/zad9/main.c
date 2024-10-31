#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d, s, r;
    scanf("%d%d%d", &d, &s, &r);

    int D = d + 2 * r;
    int S = s + 2 * r;

    printf("%d", 2 * (D + S));

    return 0;
}
