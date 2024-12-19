#include <stdio.h>
#include <stdlib.h>

int duzina(char a[]) {
    int br = 0;
    for(int i=0; a[i]!='\0' ; i++)
        br ++;

    return br;
}

void flip(char a[]) {
    int l = duzina(a);

    for(int i=0; i<l/2 ; i++) {
        char t = a[i];
        a[i] = a[l-1-i];
        a[l-1-i] = t;
    }
}

int value(char a[]) {
    ///pretvara broj zapisan u obliku stringa u njegovu dekadnu vrijednost
    ///"123" -> 123
    int rez = 0;

    for(int i=0;a[i]!='\0';i++)
        rez = rez * 10 + (a[i] - '0');

    return rez;
}

void intToString(int n, char a[]) {
    int i;
    for(i=0; n != 0; i++, n /= 10)
        a[i] = '0' + n % 10;

    a[i] = '\0';
}

void add(char a[], char b[], char c[]) {
    ///stringovi a i b prestavljaju cijele pozivne brojeve
    ///u string c upisati vrijednost rezultata a + b

    ///"123" + "45" = "168"
    flip(a);
    flip(b);

    int i = 0, p=0;
    for(i=0; a[i] != '\0' && b[i] !='\0';i++) {
        int ca = a[i] - '0';
        int cb = b[i] - '0';
        p += ca + cb;

        c[i] = (p % 10) + '0';
        p = p / 10;
    }

    for(; a[i] != '\0';i++) {
        int ca = a[i] - '0';
        p += ca;

        c[i] = (p % 10) + '0';
        p = p / 10;
    }

    for(; b[i] != '\0';i++) {
        int cb = b[i] - '0';
        p += cb;

        c[i] = (p % 10) + '0';
        p = p / 10;
    }

    if(p != 0)
        c[i++] = p;

    c[i] = '\0';

    flip(a);
    flip(b);
    flip(c);
}

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);

    int c[100];
    add(a, b, c);

    printf("%s", c);
    return 0;
}
