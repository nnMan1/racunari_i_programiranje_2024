#include <stdio.h>
#include <stdlib.h>

int main()
{
    int total = 0;
    int i = 1;

    while(i <= 10) {
        int mark;
        scanf("%d", &mark);

        total = total + mark;
        i = i + 1;
    }

    float avg = (float)total / 10;
    printf("%f", avg);
    return 0;
}
