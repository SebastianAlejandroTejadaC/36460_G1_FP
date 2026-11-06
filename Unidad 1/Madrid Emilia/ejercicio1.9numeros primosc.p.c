// Problema 1.9 Numeros primos comprendidos entre dos numeros dados
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea dos limites y muestre los numeros primos comprendidos entre ellos.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int inicio, fin, numero, divisor, esPrimo, intercambio;
    int encontrados = 0;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el primer limite: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &inicio) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el segundo limite: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &fin) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    if (inicio > fin) {
        intercambio = inicio;
        inicio = fin;
        fin = intercambio;
    }

    // Muestra el resultado obtenido.
    printf("Numeros primos entre %d y %d: ", inicio, fin);

    // Repite el proceso hasta completar el calculo.
    for (numero = inicio; numero <= fin; numero++) {
    // Evalua la condicion indicada en el enunciado.
        if (numero < 2) continue;

        esPrimo = 1;
    // Repite el proceso hasta completar el calculo.
        for (divisor = 2; divisor <= numero / divisor; divisor++) {
    // Evalua la condicion indicada en el enunciado.
            if (numero % divisor == 0) {
                esPrimo = 0;
                break;
            }
        }

        if (esPrimo) {
    // Muestra el resultado obtenido.
            printf("%d ", numero);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("No hay numeros primos");
    }

    printf("\n");
    return 0;
}
