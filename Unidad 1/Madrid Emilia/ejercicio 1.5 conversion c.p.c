// Problema 1.5 Conversion de unidades de tiempo
// Elaborado por: Emilia Madrid
// Desarrolle un programa que convierta una cantidad de segundos en dias, horas, minutos y segundos.
// NRC:36460

#include <stdio.h>

int main(void) {
    // Declaracion de variables necesarias para resolver el problema.
    long long totalSegundos;
    long long dias, horas, minutos, segundos, resto;

    // Solicita los datos necesarios al usuario.
    printf("Ingrese el tiempo en segundos: ");
    // Lee los datos y comprueba que la entrada sea valida.
    // Evalua la condicion indicada en el enunciado.
    if (scanf("%lld", &totalSegundos) != 1 || totalSegundos < 0) {
    // Solicita los datos necesarios al usuario.
        printf("Ingrese una cantidad valida de segundos.\n");
        return 1;
    }

    dias = totalSegundos / 86400;
    resto = totalSegundos % 86400;
    horas = resto / 3600;
    resto %= 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    // Muestra el resultado obtenido.
    printf("%lld dias, %lld horas, %lld minutos y %lld segundos.\n",
           dias, horas, minutos, segundos);

    return 0;
}
