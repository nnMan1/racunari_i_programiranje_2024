#include <stdio.h>
#include <stdlib.h>
/**
    Napisati program koji provjerava koji je sjutrasnji datum
    Unose se dan, mjesec i godina, stampati dan, mjesec
    i godinu sjutrasnjeg datuma
*/
int main()
{
    int d, m, g;
    scanf("%d%d%d", &d, &m, &g);

    //or -> ||
    //and -> &&
    /*if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
        if(d < 31)
            d = d + 1;
        else {
            d = 1;
            if(m != 12)
                m = m + 1;
            else {
                m = 1;
                g = g + 1;
            }
        }
    } else {
        if(m != 2) {
            if(d < 30)
                d = d + 1;
            else {
                d = 1;
                m = m + 1;
            }
        } else {
            if(g % 400 == 0 || g % 100 != 0 && g % 4 == 0) {
                if(d < 29) {
                    d = d + 1;
                } else {
                    d = 1;
                    m = 3;
                }
            } else {
                if(d < 28) {
                    d = d + 1;
                } else {
                    d = 1;
                    m = 3;
                }
            }
        }
    }*/


    int br_dan_mjes = 30;

    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        br_dan_mjes = 31;

    if(m == 2)
        br_dan_mjes = (g % 400 == 0 || g % 100 != 0 && g % 4 == 0) ? 29 : 28;

    if(d == br_dan_mjes) {
        d = 1;
        m = m + 1;
    } else {
        d = d + 1;
    }

    if(m == 13) {
        m = 1;
        g = g + 1;
    }
    printf("%d.%d.%d.", d, m,g);

    //Dan sjutra, mjesec sjutra, godina sjutra
    return 0;
}
