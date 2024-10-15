#include <stdio.h>
#include <stdlib.h>

//učitava trocifren broj i od njega formira broj sa ciframa u obrnutom
//redosledu


int main()
{
    int x;
    scanf("%d", &x);

    int j = x % 10;
    int d = x / 10 % 10;
    int s = x / 100;

    int t = 100 * j + 10 *d + s;

    printf("%d", t);

    return 0;
}
