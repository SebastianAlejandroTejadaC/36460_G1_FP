#include <stdio.h>
//Ejercicio19 mayor y seg mayor
int main(void) {
    long long n;
    long long mayor = 0, segundo = 0;
    int hayMayor = 0, haySegundo = 0;
    int cantidad = 0;

    while (1) {
        printf("Introduce un entero positivo (0 para terminar): ");
        if (scanf("%lld", &n) != 1) {
            printf("Error: entrada invalida.\n");
            while (getchar() != '\n');
            continue;
        }

        if (n == 0) break;

        if (n < 0) {
            printf("Error: solo se aceptan enteros positivos.\n");
            continue;
        }

        cantidad++;

        if (!hayMayor || n > mayor) {
            segundo = mayor;
            haySegundo = hayMayor;
            mayor = n;
            hayMayor = 1;
        } else if (!haySegundo || n > segundo) {
            segundo = n;
            haySegundo = 1;
        }
    }

    if (cantidad < 2) {
        printf("Se introdujeron menos de dos valores; no se puede determinar el segundo mayor.\n");
    } else {
        printf("El mayor es: %lld\n", mayor);
        printf("El segundo mayor es: %lld\n", segundo);
    }

}
