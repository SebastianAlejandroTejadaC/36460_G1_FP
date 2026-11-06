// Problema 1.3 Divisible
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un dividendo y un divisor y determine si la division es exacta.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int dividendo, divisor;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el dividendo: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &dividendo) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el divisor: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &divisor) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    if (divisor == 0) {
        printf("No se puede dividir para cero.\n");
    } else if (dividendo % divisor == 0) {
    // Muestra el resultado obtenido.
        printf("%d es divisible para %d.\n", dividendo, divisor);
    } else {
    // Muestra el resultado obtenido.
        printf("%d no es divisible para %d.\n", dividendo, divisor);
    }

    return 0;
}
