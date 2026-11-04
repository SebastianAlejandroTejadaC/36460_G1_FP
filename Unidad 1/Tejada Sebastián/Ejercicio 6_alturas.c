#include <stdio.h>
//Ejercicio 6 alturas
int main() {
    float altura, maximo, minimo, suma_alturas;
    int cantidad;
    int es_primera_altura;

    suma_alturas = 0;
    cantidad = 0;
    es_primera_altura = 1;

    printf("Ingrese una altura (0 para terminar): ");
    scanf("%f", &altura);

    while (altura != 0) {

        suma_alturas = suma_alturas + altura;
        cantidad = cantidad + 1;

        if (es_primera_altura) {
            maximo = altura;
            minimo = altura;
            es_primera_altura = 0;
        } else {
            if (altura > maximo) {
                maximo = altura;
            }

            if (altura < minimo) {
                minimo = altura;
            }
        }

        printf("Ingrese otra altura (0 para terminar): ");
        scanf("%f", &altura);
    }

    if (cantidad > 0) {
        printf("\n--- Resultados ---\n");
        printf("Cantidad de alturas ingresadas: %d\n", cantidad);
        printf("Altura Maxima: %.2f\n", maximo);
        printf("Altura Minima: %.2f\n", minimo);
        printf("Media de las alturas: %.2f\n", suma_alturas / cantidad);
    } else {
        printf("No se ingresaron alturas validas.\n");
    }

    return 0;
}
