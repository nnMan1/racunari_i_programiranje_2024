#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int counter = 0;

    int mark;
    printf("Unesite ocjene. Kad zavrsite sa unosom ocjena unesite -1.\n");
    scanf("%d", &mark);

    while(mark != -1) {
        total = total + mark;
        counter = counter + 1;

        scanf("%d", &mark);
    }

    if(counter > 0)
        printf("%f", (float)total / counter);
    else
        printf("Unesite makar jednu ocjenu");

    return 0;
}
