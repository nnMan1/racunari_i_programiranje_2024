#include <stdio.h>
#include <stdlib.h>

//674563457545 => {13 5 4 5 7 5 4 3 6 5 4 7 6 0 0 0 0 0 0 0 0 0}
//1234 = > {4 4 3 2 1}
//na poziciji pamtimo broj cifara
//na poziciji 1 pamtimo cifru jedinica
//na poziciji 2 cifru desetica ...

void print_number(int arr[]) {
    for(int i=arr[0];i>0;i--)
        printf("%d", arr[i]);
}

void add(int a[], int b[], int c[]) {
    ///sabrati brojeve predstavljene pomocu nizova a i b
    ///zapisati rezultat u c

    c[0] = (b[0] > a[0] ? b[0] : a[0]) + 1;

    for(int i=1;i<=c[0];i++) {
        c[i] = 0;
        if(i <= a[0])
            c[i] += a[i];

        if(i <= b[0])
            c[i] += b[i];
    }

    for(int i=1;i<c[0];i++) {
        c[i+1] += c[i] / 10;
        c[i] %= 10;
    }

    while(c[c[0]] == 0 && c[0] != 0)
        c[0] --;

}

int main()
{
    int a[100] = {1, 1}; //broj jedan = 2^0 u nasem predstavljanju
    int c[100] = {0};

    for(int i=1;i<=100;i++) {
        add(a, a, c);

        for(int j=0;j<100;j++)
            a[j] = c[j];
    }

    print_number(a);

    return 0;
}
