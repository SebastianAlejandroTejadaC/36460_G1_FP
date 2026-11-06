// Problema 1.12 Suma de digitos
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un numero entero y calcule la suma de sus digitos.

// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    long long numero, temporal;
    int digito, suma = 0;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un numero entero: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lld", &numero) != 1) {
        printf("Entrada no valida.\n");
        return 1;
    }

    temporal = (numero < 0) ? -numero : numero;

    // Repite el proceso hasta completar el calculo.
    while (temporal > 0) {
        digito = (int)(temporal % 10);
        suma += digito;
        temporal /= 10;
    }

    // Muestra el resultado obtenido.
    printf("La suma de los digitos es: %d\n", suma);
    return 0;
}
