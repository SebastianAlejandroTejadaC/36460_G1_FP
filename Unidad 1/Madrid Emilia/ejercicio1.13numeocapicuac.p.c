// Problema 1.13 Numero capicua
// Elaborado por: Emilia Madrid
// Desarrolle un programa que lea un numero entero no negativo y determine si es capicua.
//NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    long long numero, original, invertido = 0, digito;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese un numero entero no negativo: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lld", &numero) != 1 || numero < 0) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese un numero no negativo.\n");
        return 1;
    }

    original = numero;

    // Repite el proceso hasta completar el calculo.
    while (numero > 0) {
        digito = numero % 10;
        invertido = invertido * 10 + digito;
        numero /= 10;
    }

    if (original == invertido) {
    // Muestra el resultado obtenido.
        printf("%lld es un numero capicua.\n", original);
    } else {
    // Muestra el resultado obtenido.
        printf("%lld no es un numero capicua.\n", original);
    }

    return 0;
}
