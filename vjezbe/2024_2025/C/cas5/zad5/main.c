#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pao = 0;
    int poloz = 0;
    int i = 1;

    while(i <= 10) {
        int mark;
        scanf("%d", &mark);

        if(mark > 50)
            poloz = poloz + 1;
        else
            pao = pao + 1;

        i = i + 1;
    }

    printf("Poloz: %d\nPao: %d", poloz, pao);
    return 0;
}
