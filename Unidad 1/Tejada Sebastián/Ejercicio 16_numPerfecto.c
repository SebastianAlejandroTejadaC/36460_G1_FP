#include <stdio.h>
//Ejercicio16 Perfecto
int main(void) {
    long long n;

    printf("Introduce un entero positivo: ");
    if (scanf("%lld", &n) != 1 || n <= 1) {
        printf("%lld NO es perfecto.\n", n);
        return 1;
    }

    long long suma = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            suma += i;
            if (i != n / i)
                suma += n / i;
        }
    }

    if (suma == n)
        printf("%lld SI es perfecto.\n", n);
    else
        printf("%lld NO es perfecto.\n", n);
}
