// Problema 1.11 Serie de Fibonacci
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea la cantidad de terminos y muestre la serie de Fibonacci.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int cantidad, i;
    unsigned long long anterior = 0, actual = 1, siguiente;

    // Solicita los datos necesarios al usuario.
    printf("Cuantos terminos desea mostrar? ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &cantidad) != 1 || cantidad <= 0 || cantidad > 93) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese una cantidad entre 1 y 93.\n");
        return 1;
    }

    // Muestra el resultado obtenido.
    printf("Serie de Fibonacci: ");
    // Repite el proceso hasta completar el calculo.
    for (i = 1; i <= cantidad; i++) {
    // Muestra el resultado obtenido.
        printf("%llu ", anterior);
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }

    printf("\n");
    return 0;
}
