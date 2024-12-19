#include <stdio.h>
#include <stdlib.h>

int brPojavljivanja(char str[], char c) {
    int i = 0, br = 0;

    while(str[i] != '\0') {
        if(str[i] == c)
            br ++;

        i++;
    }

    return br;
}

int duzina(char str[]) {
    int br = 0;

    while(str[br] != '\0')
        br ++;

    return br;
}

void StampajObratnoIter(char str[]) {
    for(int i=duzina(str)-1;i>=0;i--)
        printf("%c", str[i]);
}

int IskljucivoVelika(char str[]) {
    //Provjediti da li se string sastoji samo od velikih slova i bjelina
    for(int i=0;str[i]!='\0';i++)
        if((str[i] < 'A' || str[i] > 'Z') && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
            return 0;

    return 1;
}

int Razlicita(char str[]) {
    /*for(int i=0;str[i] != '\0';i++)
        for(int j=i+1;str[j] != '\0'; j++)
            if(str[i] == str[j])
                return 0;
            */
    int freq[257] = {0};

    for(int i=0;str[i] != '\0';i++)
        freq[str[i]] ++; //povecamo broj pojavljivanja karaktera str[i]

    for(int c=0;c<257;c++)
        if(freq[c] > 1)  //ako se karakter c javlja vise od 1 puta
            return 0;   //vrati 0

    return 1;
}

int cifreBezPonavljanja(int x) {
    int arr[10] = {0};

    while(x != 0) {
        arr[x % 10] = 1;
        x /= 10;
    }

    int ret = 0;

    for(int i=1;i<10;i++)
        if(arr[i] != 0)
            ret = ret * 10 + i;

    if(arr[0] != 0)
        ret = ret * 10;

    return ret;
}

int sadrzi(char str1[], char str2[]) {

    for(int i=0;str2[i]!='\0';i++)
        if(brPojavljivanja(str1, str2[i]) == 0) //vidimo da li je br pojav karaktera str2[i] u str1 = 0
            return 0; //ako jeste to znaci da se str2[i] ne javlja u str1

    return 1; //svi karakteri iz str2 se javljaju u str1.
}

int HEXvalue(char c) {
    if('0' <= c && c <= '9')
        return c - '0';

    if('A' <= c && c <= 'F')
        return c - 'A' + 10;

    if('a' <= c && c <= 'f')
        return c - 'a' + 10;

    return -1;
}

int KonvertujHEX(char str[]) {
    int x = 0;

    for(int i=0;str[i]!='\0';i++) {
        int v = HEXvalue(str[i]);
        if(v != -1) //ako je neka od heksa dekadnih cifara
            x = x * 16 + v;
        else
            break;
    }

    return x;
}

int Palindrom(char str[]) {
    int l = duzina(str);

    for(int i=0;i<l/2;i++)
        if(str[i] != str[l - 1 - i])
            return 0;

    return 1;
}

int main()
{
    char str1[100];
    scanf("%s", str1);
    printf("%d", Palindrom(str1));
/*
    char str1[10];
    scanf("%s", str1);
    printf("%d", KonvertujHEX(str1));
/*
    char str1[100], str2[100];

    scanf("%s%s", str1, str2);

    printf("%d", sadrzi(str1, str2));
/*
    int x;
    scanf("%d", &x);
    printf("BezPonavljanja(x) = %d", cifreBezPonavljanja(x));

    char str1[100];
    char c;

    scanf("%[^\n]s", str1);
    printf("IskljucivoVelika(str) = %d\n", IskljucivoVelika(str1));
    printf("Razlicita(str) = %d\n", Razlicita(str1));

    /*
    scanf("%c", &c); //ucitavamo \n koje ostane nakon ucitavanja stringa
    scanf("%c", &c); //ucitamo karakter koji trazimo u stringu


    StampajObratnoIter(str1); printf("\n");
    printf("%s\n%c\n", str1, c);
    printf("%d", brPojavljivanja(str1, c));*/

    return 0;
}
