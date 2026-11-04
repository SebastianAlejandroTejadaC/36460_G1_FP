#include <stdio.h>
//Ejercicio17 binario
int main(void) {
    long long n;

    printf("Introduce un entero positivo: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Error: entrada invalida.\n");
        return 1;
    }

    if (n == 0) {
        printf("0 en binario es: 0\n");
        return 0;
    }

    int bits[64];
    int i = 0;

    long long original = n;

    while (n > 0) {
        bits[i++] = n % 2;
        n /= 2;
    }

    printf("%lld en binario es: ", original);
    for (int j = i - 1; j >= 0; j--)
        printf("%d", bits[j]);
    printf("\n");

}
