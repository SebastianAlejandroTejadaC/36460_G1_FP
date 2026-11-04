#include <stdio.h>
//Ejercicio15
int main(void) {
    int anio;

    printf("Introduce un anio: ");
    if (scanf("%d", &anio) != 1 || anio <= 0) {
        printf("Error: entrada invalida o anio no positivo.\n");
        return 1;
    }

    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        printf("%d SI es bisiesto.\n", anio);
    } else {
        printf("%d NO es bisiesto.\n", anio);
    }

    return 0;
}
