#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char ime[15] = {'V', 'e', 'l', 'i', 'b', 'o', 'r', '\0'};

    char ime[15] = "Velibor";

    /*for(int i=0;ime[i]!='\0';i++)
        printf("%c", ime[i]);
    */
    scanf("%s", ime);
    printf("%s\n", ime);

    for(int i=2;i<5;i++)
        printf("%c", ime[i]);



    return 0;
}
