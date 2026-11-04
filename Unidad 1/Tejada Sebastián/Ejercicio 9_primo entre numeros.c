#include <stdio.h>
//Ejercicio9 Primo entre numeros

int main() {
    int N1, N2, i, j, k;
    int primo;

    printf("Ingrese N1 y N2: ");
    scanf("%d %d", &N1, &N2);

    if (N1 > N2) {
        printf("N1 debe ser menor o igual a N2\n");
    } else {
        k = 0;
        i = N1;

        while (i <= N2) {
            if (i <= 1) {
                primo = 0;
            } else {
                primo = 1;
                j = 2;
                while (primo && j < i) {
                    if (i % j == 0) {
                        primo = 0;
                    }
                    j = j + 1;
                }
            }

            if (primo) {
                printf("%d\n", i);
                k = k + 1;
            }

            i = i + 1;
        }

        printf("cantidad de primos: %d\n", k);
    }
}
