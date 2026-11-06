// Problema 1.14 Maximo comun divisor (algoritmo de Euclides)
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea dos enteros y calcule su maximo comun divisor mediante el algoritmo de Euclides.
//NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int a, b, residuo;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el primer numero: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &a) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el segundo numero: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &b) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Repite el proceso hasta completar el calculo.
    while (b != 0) {
        residuo = a % b;
        a = b;
        b = residuo;
    }

    // Muestra el resultado obtenido.
    printf("El MCD es: %d\n", a);
    return 0;
}
