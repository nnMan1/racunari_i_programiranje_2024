#include <stdio.h>
#include <stdlib.h>

int main()
{
    int br_bodova;
    scanf("%d", &br_bodova);

   /* if(br_bodova > 50)
        printf("Polozio");
    else
        printf("Pao");*/

    //br_bodova > 50 ? printf("Polozio") : printf("Pao");
    printf("%s", br_bodova > 50 ? "Polozio" : "Pao");
    return 0;
}
