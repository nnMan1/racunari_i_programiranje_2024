#include <stdio.h>
#include <stdlib.h>

/*
Provjeriti da li je broj n prost
*/

int main()
{
    int n;
    scanf("%d", &n);

    int p = 1;
    for(int i=2;i<=sqrt(n);i++)
        if(n % i == 0) {
            p = 0;
            break;
        }

    if(p)
        printf("Prost");
    else
        printf("Nije prost");
    return 0;
}
