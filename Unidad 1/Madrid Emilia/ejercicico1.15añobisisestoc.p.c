// Problema 1.15 Anio bisiesto
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un anio y determine si es bisiesto o no.
// NRC:364e60

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    int anio;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un anio: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%d", &anio) != 1 || anio <= 0) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese un anio valido.\n");
        return 1;
    }

    // Evalua la condicion indicada en el enunciado.
    if ((anio % 400 == 0) || (anio % 4 == 0 && anio % 100 != 0)) {
    // Muestra el resultado obtenido.
        printf("%d es un anio bisiesto.\n", anio);
    } else {
    // Muestra el resultado obtenido.
        printf("%d no es un anio bisiesto.\n", anio);
    }

    return 0;
}
