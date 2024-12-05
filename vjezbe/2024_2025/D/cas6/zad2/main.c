#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a_cnt = 0;
    int b_cnt = 0;
    int c_cnt = 0;
    int d_cnt = 0;
    int e_cnt = 0;
    int f_cnt = 0;

    char mark;

    while(scanf("%c", &mark) != EOF) {
        switch(mark) {
        case '\n':
            break;
        case 'A':
        case 'a':
            a_cnt++;
            break;
        case 'B':
        case 'b':
            b_cnt++;
            break;
        case 'C':
        case 'c':
            c_cnt++;
            break;
        case 'D':
        case 'd':
            d_cnt++;
            break;
        case 'E':
        case 'e':
            e_cnt++;
            break;
        case 'F':
        case 'f':
            f_cnt++;
            break;
        default:
            printf("Ocjena mora biti A, B, C, D, E ili F.");
            break;
        }
    }

    printf("A-: %d\n", a_cnt);
    printf("B-: %d\n", b_cnt);
    printf("C-: %d\n", c_cnt);
    printf("D-: %d\n", d_cnt);
    printf("E-: %d\n", e_cnt);
    printf("F-: %d\n", f_cnt);
    return 0;
}
