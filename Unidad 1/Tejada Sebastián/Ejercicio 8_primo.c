#include <stdio.h>
//Ejercicio8 primo
int main() {
    int n, i;
    int esPrimo;

    printf("Ingrese un numero entero mayor que 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Error: el numero debe ser mayor que 1.\n");
    } else {
        esPrimo = 1;
        i = 2;

        while (i * i <= n && esPrimo) {
            if (n % i == 0) {
                esPrimo = 0;
            }
            i = i + 1;
        }

        if (esPrimo) {
            printf("%d es primo.\n", n);
        } else {
            printf("%d no es primo.\n", n);
        }
    }

}
