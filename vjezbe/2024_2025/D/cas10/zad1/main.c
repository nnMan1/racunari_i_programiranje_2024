#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zbir(int a, int b) {
    int z = a + b;

    a = a + 1;

    return z;
}

int zbir_cifara(int n) {
    int s = 0;

    while(n != 0) {
        s += n % 10;
        n /= 10;
    }

    return s;
}

int max_susjedne(int x) {
    ///Nalazi maksimalno rastojanje izmedju susjednih cifara

    int r = 0;

    while(x >= 10) {
        if(r < abs(x % 10 - x % 100))
            r = abs(x % 10 - x % 100);

        x /= 10;
    }

    return x;
}

int main()
{
    int x, y;
    scanf("%d%d", &x, &y);

    for(int i=x; i<=y;i++)
        if(max_susjedne(i) < 3)
            printf("%d\n", i);

   /* printf("%d\n", zbir(x, y));
    printf("%d\n", zbir_cifara(x));*/

   /* double x;
    scanf("%lf", &x);

    printf("sqrt(%lf) = %lf\n", x , sqrt(x));
    printf("fabs(%lf) = %lf\n", x , fabs(x));
    printf("ceil(%lf) = %lf\n", x , ceil(x));
    printf("floor(%lf) = %lf\n", x , floor(x));
    printf("pow(%lf, 3) = %lf\n", x , pow(x, 3));
    printf("sin(%lf) = %lf\n", x , sin(x));
*/

    return 0;
}
