#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    for(int i=1;i<10000;i++) {
        int s_i = 1;

        int k;
        for(k = 2;k<sqrt(i);k++)
            if(i % k == 0) {
                s_i += k;
                s_i += i / k;
            }

        if(k * k == i)
            s_i += k;

        int j = s_i;

        if(i >= j)
            continue;

        int s_j = 1;

        for(k = 2;k<sqrt(j);k++)
            if(j % k == 0) {
                s_j += k;
                s_j += j / k;
            }

        if(k * k == i)
            s_j += k;

        if(s_j == i) {
            printf("%d %d\n", i, j);
        }

    }
    return 0;
}
