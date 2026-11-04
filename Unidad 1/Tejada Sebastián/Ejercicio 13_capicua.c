#include <stdio.h>
//Ejercicio13 capicua
int main(void) {
    long long n, original, invertido = 0;
    int digito;

    printf("Introduce un entero positivo: ");
    if (scanf("%lld", &n) != 1 || n <= 0) {
        printf("Error: entrada invalida o numero no positivo.\n");
        return 1;
    }

    original = n;

    while (n > 0) {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }

    if (invertido == original)
        printf("%lld SI es capicua.\n", original);
    else
        printf("%lld NO es capicua.\n", original);

    return 0;
}
