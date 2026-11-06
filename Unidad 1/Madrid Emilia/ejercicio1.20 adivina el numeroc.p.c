/ Problema 1.20 Adivina el numero
// Elaborado por: Emilia Madrid
// Desarrolle un programa que permita adivinar un numero secreto entre 1 y 100.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    const int secreto = 37;
    int intento, intentos = 0;

    printf("Adivina el numero entre 1 y 100.\n");

    // Repite el proceso hasta completar el calculo.
    do {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese tu intento: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
        if (scanf("%d", &intento) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        intentos++;

        if (intento < secreto) {
            printf("Mas alto.\n");
        } else if (intento > secreto) {
            printf("Mas bajo.\n");
        } else {
            printf("Correcto. Adivinaste en %d intentos.\n", intentos);
        }
    } while (intento != secreto);

    return 0;
}
