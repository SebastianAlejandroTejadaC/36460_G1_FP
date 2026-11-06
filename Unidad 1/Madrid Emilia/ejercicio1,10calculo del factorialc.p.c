// Problema 1.10 Calculo del factorial
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un entero no negativo y calcule su factorial.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int numero, i;
    unsigned long long factorial = 1;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un entero entre 0 y 20: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &numero) != 1 || numero < 0 || numero > 20) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese un valor entre 0 y 20.\n");
        return 1;
    }

    // Repite el proceso hasta completar el calculo.
    for (i = 1; i <= numero; i++) {
        factorial *= (unsigned long long)i;
    }

    // Muestra el resultado obtenido.
    printf("El factorial de %d es: %llu\n", numero, factorial);
    return 0;
}
