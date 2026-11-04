#include <stdio.h>
//Ejercicio14 max comun divisor
int main(void) {
    long long a, b, temp;

    printf("Introduce el primer entero positivo: ");
    if (scanf("%lld", &a) != 1 || a <= 0) {
        printf("Error: entrada invalida.\n");
        return 1;
    }

    printf("Introduce el segundo entero positivo: ");
    if (scanf("%lld", &b) != 1 || b <= 0) {
        printf("Error: entrada invalida.\n");
        return 1;
    }

    long long original_a = a, original_b = b;

    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }

    printf("El MCD de %lld y %lld es: %lld\n", original_a, original_b, a);

}
