#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n >= 85)
        printf("10");
    else
        if(n >= 75)
            printf("9");
        else
            if(n >= 65)
                printf("8");
            else
                if(n >= 55)
                    printf("7");
                else
                    if(n >= 45)
                        printf("6");
                    else
                        printf("5");
    return 0;
}
