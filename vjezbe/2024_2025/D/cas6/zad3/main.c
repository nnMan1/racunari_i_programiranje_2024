#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 15;
    /*while(i<10) {
        printf("%d ", i);
        i++;
    }*/

    do {
        printf("%d ", i);
        i++;
    } while(i<10);

    return 0;
}
