#include <stdio.h>
//Ejercicio12 sumadigitos
int main(void) {
    long long n;
    int suma = 0;

    printf("Introduce un entero positivo: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("Error: entrada invalida o numero no positivo.\n");
        return 1;
    }

    long long original = n;

    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }

    printf("La suma de los digitos de %lld es: %d\n", original, suma);
    return 0;
}
