// Problema 1.4 Intervalo
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un numero y determine si pertenece a un intervalo.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    double numero, limiteInferior, limiteSuperior;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el numero: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lf", &numero) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el limite inferior: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lf", &limiteInferior) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el limite superior: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lf", &limiteSuperior) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    // Evalua la condicion indicada en el enunciado.
    if (limiteInferior > limiteSuperior) {
    // Muestra el resultado obtenido.
        printf("El intervalo no es valido.\n");
    } else if (numero >= limiteInferior && numero <= limiteSuperior) {
    // Muestra el resultado obtenido.
        printf("%.2f pertenece al intervalo.\n", numero);
    } else {
    // Muestra el resultado obtenido.
        printf("%.2f no pertenece al intervalo.\n", numero);
    }

    return 0;
}
