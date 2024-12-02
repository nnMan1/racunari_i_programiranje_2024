#include <stdio.h>
#include <stdlib.h>

int bojenje_zgrade(int n) {
    if(n == 1)
        return 3;

    if(n == 2)
        return 8;

    return 2 * bojenje_zgrade(n-1) + 2 * bojenje_zgrade(n - 2);
}


int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", bojenje_zgrade(n));

    return 0;
}
