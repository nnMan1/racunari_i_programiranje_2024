#include <stdio.h>
#include <stdlib.h>

int main()
{
    int y;
    int x = y = 5;
    if(x == 1)
        printf("True");
    else
        printf("False");

    /*for(int i=1;i<=10;i++) {
        for(int j=1;j<=10;j++) {
            printf("%d ", i * j);
        }
        printf("\n");
    }*/

    /**
    Istampati sve brojeve izmedju 1 i 10 osim broja 5
    */
    /*
    int i = 1;

    while(i <= 10) {
        if(i == 5)
            continue;

        printf("%d\n", i);
        i++;
    }
    */
    /*
    for(int i=1;i<=20;i++) {

        if(i == 5)
            continue;

        printf("%d ", i);

        if(i == 10)
            break;
    }*/


    /*
    int n;
    scanf("%d", &n);

    int i = 0;

    do {
        printf("%d ", i);
        i++;
    } while(i <= n);
    */
    /*
    int i = 0;
    while(i++ < 5) {
        printf("%d ", i);
    }*/
    /*
    for(int i=5;i>0;i-=2) {
        printf("%d ", i);
    }
    */
/*
    char x; //
    scanf("%c", &x);
*/
    /*switch(x) {
        case 'a':
        case 'A':
            printf("A");
            break;
        case 'b':
        case 'B':
            printf("B");
            break;
        case 'c':
        case 'C':
            printf("C");
            break;
        case 'd':
        case 'D':
            printf("D");
            break;
        default:
            printf("Neko drugo slovo");
    }*/
/*
    if(x == 'a' || x == 'A')
        printf("A");
    else if(x == 'b' || x == 'B')
        printf("B");
    else if(x == 'c' || x == 'C')
        printf("C");
    else if(x == 'd' || x == 'D')
        printf("D");
    else
        printf("Neko drugo slovo");
*/
    return 0;
}
