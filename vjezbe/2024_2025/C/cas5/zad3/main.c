#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_students = 10;
    int sum = 0;
    int i = 1;

    while(i <= 10) {
        int mark;
        scanf("%d", &mark);

        sum = sum + mark;
        i = i + 1;
    }

    printf("%f", (float)sum / num_students);
    return 0;
}
