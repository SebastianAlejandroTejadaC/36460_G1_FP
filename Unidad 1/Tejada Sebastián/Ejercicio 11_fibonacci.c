#include <stdio.h>
//Ejercicio 11
int main(void) {
    int n;

    printf("Introduce un entero n >= 1: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: entrada invalida o n < 1.\n");
        return 1;
    }

    long long a = 0, b = 1, c;

    printf("Primeros %d terminos de Fibonacci:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%lld", a);
        if (i < n) printf(", ");
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
