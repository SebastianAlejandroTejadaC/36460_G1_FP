// Problema 1.8 Numero primo
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un entero mayor que 1 y determine si es primo o no.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int numero, divisor;
    int esPrimo = 1;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un entero mayor que 1: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &numero) != 1 || numero <= 1) {
    // Muestra el resultado obtenido.
        printf("El numero debe ser mayor que 1.\n");
        return 1;
    }

    // Repite el proceso hasta completar el calculo.
    for (divisor = 2; divisor <= numero / divisor && esPrimo; divisor++) {
    // Evalua la condicion indicada en el enunciado.
        if (numero % divisor == 0) {
            esPrimo = 0;
        }
    }

    if (esPrimo) {
    // Muestra el resultado obtenido.
        printf("%d es primo.\n", numero);
    } else {
    // Muestra el resultado obtenido.
        printf("%d no es primo.\n", numero);
    }

    return 0;
}
