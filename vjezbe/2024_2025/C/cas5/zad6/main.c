#include <stdio.h>
#include <stdlib.h>

/*Provjeriti da li je broj Hemingov*/

int main()
{
    int n;
    scanf("%d", &n);

    while(n % 2 == 0)
        n /=  2;

    while(n % 3 == 0)
        n /= 3;

    while(n % 5 == 0)
        n /= 5;

    printf("%s", n ==  1 ? "Hemingov" : "Nije Hemingov");
    return 0;
}
