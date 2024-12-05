#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    scanf("%d", &x);

    if(x == 1)
        printf("%d", x + 1);
    else
        if(x == 2)
            printf("%d", x + 3);
        else
            if(x == 5)
                printf("%d", x);
            else
                printf("Ostali");

/*
    switch(x) {
    case 1:
        printf("%d\n", x + 1);
        break;
    case 2:
        printf("%d\n", x + 3);
        break;
    case 5:
        printf("%d\n", x);
        break;
    default:
        printf("Ostali");
    }

    /*for(int i=10;i>0;i--)
        printf("%d ", i);

    /*for(int i=1, j=2;i<=5 || j < 7;i++, j+=2)
        printf("%d %d\n", i, j);


    /*int i = 1;
    while(i <= 5) {
        printf("%d ", i);

        i++;
    }*/
    return 0;
}
