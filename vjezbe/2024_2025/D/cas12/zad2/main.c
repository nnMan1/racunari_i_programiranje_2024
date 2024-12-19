#include <stdio.h>
#include <stdlib.h>

int br_pojavljivanja(char str[], char c){
    int br = 0;

    for(int i=0;str[i]!='\0';i++)
        if(str[i] == c)
            br++;

    return br;
}

int duzina(char str[]) {
    ///nalazi duzinu stringa
    int br = 0;

    for(int i=0;str[i]!='\0';i++)
        br ++;

    return br;
}

void stampaj_obratno(char str[]) {
    for(int i=duzina(str)-1;i>=0;i--)
        printf("%c", str[i]);
}

void stampaj_obratno_rec(char str[], int l) {
    if(l == 0)
        return;

    printf("%c", str[l-1]); //stampaj posljednje slovo
    stampaj_obratno_rec(str, l-1);  //stampaj obratno presostali l-1 slova
}

int iskljucivo_velika(char str[]) {
    for(int i=0;str[i]!='\0';i++)
        if('A' > str[i] || 'Z' < str[i])
            return 0;

    return 1;
}

int razliciti(char str[]) {
    /*for(int i=0;str[i]!='\0';i++)
        if(br_pojavljivanja(str, str[i]) > 1)
            return 0;*/

    int freq[256] = {0};

    for(int i=0;str[i] != '\0'; i++)
        freq[str[i]] ++;

    for(int i=0;i<256;i++)
        if(freq(i) > 1)
            return 0;

    return 1;
}

int razlicite_cifre(int x) { //provjerava da li su sve cifre nekog broja razlicite
    int freq[10] = {};

    while(x != 0) {
        freq[x % 10] ++;
    }

    for(int i=0;i<10;i++)
        if(freq[i] > 1)
            return 0;

    return 1;
}

int main()
{
    char str[100], c;

    scanf("%[^\n]s", str);
    printf("%d", razliciti(str));
    //stampaj_obratno_rec(str, duzina(str));
    /*scanf("%c", &c); ///ucitava karakter za novi red
    scanf("%c", &c); ///ucitava karakter koji nas interesuje

    printf("Karakter %c se javlja %d puta u stringu %s", c, br_pojavljivanja(str, c), str);
*/
    return 0;
}
