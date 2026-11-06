/ Problema 1.17 Conversion de decimal a binario
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un entero no negativo y lo convierta a su representacion binaria.
// NRC:36460
#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    unsigned int numero, temporal;
    int bits[32], cantidad = 0, i;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un entero no negativo: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%u", &numero) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    temporal = numero;

    if (temporal == 0) {
        bits[cantidad++] = 0;
    } else {
    // Repite el proceso hasta completar el calculo.
        while (temporal > 0) {
            bits[cantidad++] = (int)(temporal % 2);
            temporal /= 2;
        }
    }

    // Muestra el resultado obtenido.
    printf("El numero binario es: ");
    // Repite el proceso hasta completar el calculo.
    for (i = cantidad - 1; i >= 0; i--) {
    // Muestra el resultado obtenido.
        printf("%d", bits[i]);
    }

    printf("\n");
    return 0;
}
