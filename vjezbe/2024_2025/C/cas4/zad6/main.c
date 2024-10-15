#include <stdio.h>
#include <stdlib.h>

int main() {

    int a, b;
    scanf("%d%d", &a, &b);

    if(a == b) {
        printf("Brojevi su jednaki");
    }

    if(a != b)
        printf("Brojevi su razliciti");

    return 0;
}
