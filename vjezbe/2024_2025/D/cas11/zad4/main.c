#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[] = {'M', 'a', 'r', 'k', 'o', '\0'};
    char str2[] = "Marko";
    char str3[50];

    /*for(int i=0;i<5;i++)
        printf("%c", str2[i]);*/
    printf("%s\n", str2);

    scanf("%s", str3);
    printf("%s", str3);

    return 0;
}
