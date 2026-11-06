 Problema 1.19 Segundo mayor de una secuencia
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea una secuencia de numeros y encuentre el mayor y el segundo mayor distinto.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int cantidad, i, numero;
    int mayor, segundoMayor;
    int haySegundo = 0;

    // Solicita los datos necesarios al usuario.
    printf("Cuantos numeros va a ingresar? ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &cantidad) != 1 || cantidad < 2) {
        printf("Debe ingresar al menos dos numeros.\n");
        return 1;
    }

    // Repite el proceso hasta completar el calculo.
    for (i = 1; i <= cantidad; i++) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese el numero %d: ", i);
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
        if (scanf("%d", &numero) != 1) {
            printf("Entrada no valida.\n");
            return 1;
        }

        if (i == 1) {
            mayor = numero;
        } else if (numero > mayor) {
            segundoMayor = mayor;
            mayor = numero;
            haySegundo = 1;
        } else if (numero < mayor && (!haySegundo || numero > segundoMayor)) {
            segundoMayor = numero;
            haySegundo = 1;
        }
    }

    if (haySegundo) {
    // Muestra el resultado obtenido.
        printf("El mayor es: %d\n", mayor);
    // Muestra el resultado obtenido.
        printf("El segundo mayor distinto es: %d\n", segundoMayor);
    } else {
        printf("No existe un segundo mayor distinto.\n");
    }

    return 0;
}
