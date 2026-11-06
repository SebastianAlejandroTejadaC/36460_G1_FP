// Problema 1.6 Maximo, minimo y media de alturas
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea varias alturas y calcule la mayor, la menor y la media.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int cantidad, i;
    double altura, maximo, minimo, suma = 0.0;

    // Solicita los datos necesarios al usuario.
    printf("Cuantas alturas va a ingresar? ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &cantidad) != 1 || cantidad <= 0) {
    // Muestra el resultado obtenido.
        printf("La cantidad debe ser mayor que cero.\n");
        return 1;
    }

    // Repite el proceso hasta completar el calculo.
    for (i = 1; i <= cantidad; i++) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese la altura %d: ", i);
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
        if (scanf("%lf", &altura) != 1 || altura <= 0) {
    // Muestra el resultado obtenido.
            printf("Altura no valida.\n");
            return 1;
        }

        if (i == 1) {
            maximo = altura;
            minimo = altura;
        } else {
            if (altura > maximo) maximo = altura;
            if (altura < minimo) minimo = altura;
        }

        suma += altura;
    }

    // Muestra el resultado obtenido.
    printf("Altura maxima: %.2f\n", maximo);
    // Muestra el resultado obtenido.
    printf("Altura minima: %.2f\n", minimo);
    // Muestra el resultado obtenido.
    printf("Altura media: %.2f\n", suma / cantidad);

    return 0;
}
