#include <stdio.h>
//Ejercicio18 asteriscos
int main(void) {
    int n;

    printf("Introduce un entero n >= 1: ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Error: entrada invalida o n < 1.\n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            putchar('*');
        }
        putchar('\n');
    }
}
