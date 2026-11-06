// Problema 1.16 Numero perfecto
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un entero positivo y determine si es un numero perfecto.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int numero, divisor, suma = 0;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un entero positivo: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &numero) != 1 || numero <= 0) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese un numero positivo.\n");
        return 1;
    }

    // Repite el proceso hasta completar el calculo.
    for (divisor = 1; divisor <= numero / 2; divisor++) {
    // Evalua la condicion indicada en el enunciado.
        if (numero % divisor == 0) {
            suma += divisor;
        }
    }

    // Evalua la condicion indicada en el enunciado.
    if (suma == numero && numero != 0) {
    // Muestra el resultado obtenido.
        printf("%d es un numero perfecto.\n", numero);
    } else {
    // Muestra el resultado obtenido.
        printf("%d no es un numero perfecto.\n", numero);
    }

    return 0;
}
