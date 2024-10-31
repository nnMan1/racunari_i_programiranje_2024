#include <stdio.h>
#include <stdlib.h>

/*Naci prosjecnu ocjenu studenata ciji je broj
nepoznat. Ocjene se unose sve dok se ne unese -1
*/

int main()
{
    int sum = 0;
    int cnt = 0;

    int mark;
    scanf("%d", &mark);

    while(mark != -1) {
        sum = sum + mark;
        cnt = cnt + 1;
        scanf("%d", &mark);
    }

    if(cnt == 0)
        printf("Unesi makar jednog student");
    else
        printf("Prosjecna ocjena je %f", (float)sum / cnt);
    return 0;
}
