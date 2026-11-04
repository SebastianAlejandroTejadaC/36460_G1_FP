#include <stdio.h>
//Ejercicio 10 factorial
int main(void) {
    int n;
    long long resultado = 1;

    printf("Introduce un numero entero n >= 0: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Error: entrada invalida o n < 0.\n");
        return 1;
    }

    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }

    printf("%d! = %lld\n", n, resultado);

}
