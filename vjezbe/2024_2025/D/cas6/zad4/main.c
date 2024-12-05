#include <stdio.h>
#include <stdlib.h>

/**
Unosimo 10 brojeva.
Ako se unese broj -1 zaustaviti unos.
Stampati zbir unesenih brojeva.
*/

int main()
{
    int a;
    /*
    scanf("%d", &a);
    int i=1, s=0;

    while(i <= 10 && a != -1) {
        s += a;
        scanf("%d", &a);
    }*/

    int s = 0;
    for(int i=0;i<10;i++) {
        scanf("%d", &a);

        if(a == -1)
            break;

        s += a;
    }

    printf("%d", s);
    return 0;
}
