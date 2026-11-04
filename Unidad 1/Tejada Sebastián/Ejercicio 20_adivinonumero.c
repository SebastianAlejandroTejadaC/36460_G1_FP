#include <stdio.h>

//Ejercicio20 adivino numero
int main(void) {
    int objetivo, intento;
    int intentos = 0;

       objetivo = 42;


    printf("He pensado un numero entre 1 y 100. ¡Adivinalo!\n");

    while (1) {
        printf("Tu intento: ");
        if (scanf("%d", &intento) != 1) {
            printf("Error: entrada invalida.\n");
            while (getchar() != '\n');
            continue;
        }

        if (intento < 1 || intento > 100) {
            printf("Por favor, introduce un numero entre 1 y 100.\n");
            continue;
        }

        intentos++;

        if (intento < objetivo) {
            printf("Mas alto.\n");
        } else if (intento > objetivo) {
            printf("Mas bajo.\n");
        } else {
            printf("¡Acertaste! Lo lograste en %d intentos.\n", intentos);
            break;
        }
    }


}
