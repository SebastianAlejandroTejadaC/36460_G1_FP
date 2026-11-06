// Problema 1.7 Raiz cuadrada entera
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un entero no negativo y calcule su raiz cuadrada entera.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    long long numero, raiz = 0;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un numero entero no negativo: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lld", &numero) != 1 || numero < 0) {
    // Muestra el resultado obtenido.
        printf("El numero debe ser no negativo.\n");
        return 1;
    }

    // Repite el proceso hasta completar el calculo.
    while ((raiz + 1) <= numero / (raiz + 1)) {
        raiz++;
    }

    // Muestra el resultado obtenido.
    printf("La raiz cuadrada entera es: %lld\n", raiz);
    return 0;
}
