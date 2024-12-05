#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5;

    printf("%d \n", ++x);
    printf("%d ", x);

    return 0;
    int pass = 0;
    int fail = 0;

    int i = 1;

    while(i <= 10) {
        int mark;
        scanf("%d", &mark);

        if(mark == 1)
            pass++;
        else
            fail++;

        i++;
    }

    printf("Polozilo je %d studenata\n", pass);
    printf("Palo je %d studenata\n", fail);

    if(pass > 8)
        printf("Povecati platu profesoru");

    return 0;
}
