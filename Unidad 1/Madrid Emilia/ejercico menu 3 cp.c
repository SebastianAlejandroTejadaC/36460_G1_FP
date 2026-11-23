#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Declaracion de funciones (Tema 8)
void validarFecha();
void desplegarSerieLetras();
void desplegarSerieNumeros();

int main() {
    int opcion;

    // Bucle principal del menu (Tema 7)
    do {
        system("cls"); // Limpia la pantalla al regresar al menu
        printf("MENU\n");
        printf("1. Validar fecha\n");
        printf("2. Deplegar serie letras\n");
        printf("3. Deplegar serie numero\n");
        printf("4. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                validarFecha();
                break;
            case 2:
                desplegarSerieLetras();
                break;
            case 3:
                desplegarSerieNumeros();
                break;
            case 4:
                printf("Salir...\n");
                break;
            default:
                printf("Opcion no valida\n");
                break;
        }

        // Pausa antes de volver a limpiar y mostrar el menu si no eligio Salir
        if (opcion != 4) {
            printf("\nPresione una tecla para continuar...");
            getch();
        }

    } while (opcion != 4);

    return 0;
}

// Implementacion de funciones (Tema 8)

void validarFecha() {
    int anio, mes, dia, maxDias;
    // Arreglo bidimensional para los nombres de los meses (Tema 10)
    char meses[12][15] = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    // Validar anio (1900 a 2015 inclusive)
    do {
        printf("Ingrese anio (1900 - 2015): ");
        scanf("%d", &anio);
    } while (anio < 1900 || anio > 2015);

    // Validar mes (1 a 12 inclusive)
    do {
        printf("Ingrese mes (1 - 12): ");
        scanf("%d", &mes);
    } while (mes < 1 || mes > 12);

    // Determinar maximo de dias segun el mes seleccionado
    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        maxDias = 30;
    } else {
        if (mes == 2) {
            maxDias = 29; // Segun observacion: admite 29 sin comprobar bisiesto
        } else {
            maxDias = 31;
        }
    }

    // Validar dia segun el rango del mes
    do {
        printf("Ingrese dia (1 - %d): ", maxDias);
        scanf("%d", &dia);
    } while (dia < 1 || dia > maxDias);

    // Mostrar resultado con el formato requerido
    printf("Fecha valida: %d de %s de %d\n", dia, meses[mes - 1], anio);
}

void desplegarSerieLetras() {
    int n, i;
    char letraArriba, letraAbajo;

    // Solicitar cantidad mayor que cero
    do {
        printf("Ingrese la cantidad de terminos (> 0): ");
        scanf("%d", &n);
    } while (n <= 0);

    // Primera fila: comienza en 'a' y avanza de 2 en 2
    letraArriba = 'a';
    for (i = 0; i < n; i++) {
        printf("%c\t", letraArriba);
        letraArriba = letraArriba + 2;
    }
    printf("\n");

    // Segunda fila: guiones de separacion visual
    for (i = 0; i < n; i++) {
        printf("-\t");
    }
    printf("\n");

    // Tercera fila: comienza en 'b' y avanza de 2 en 2
    letraAbajo = 'b';
    for (i = 0; i < n; i++) {
        printf("%c\t", letraAbajo);
        letraAbajo = letraAbajo + 2;
    }
    printf("\n");
}

void desplegarSerieNumeros() {
    int n, i;
    // Reinicio de valores iniciales cada vez que se entra a la opcion
    int num1 = 1;
    int num2 = 5;

    // Solicitar cantidad (no negativo, permite 0)
    do {
        printf("Ingrese la cantidad de terminos (>= 0): ");
        scanf("%d", &n);
    } while (n < 0);

    // Imprimir parejas completas
    for (i = 1; i <= n / 2; i++) {
        printf("%d, %d", num1, num2);
        if (i < n / 2 || n % 2 != 0) {
            printf(", ");
        }
        num1 = num1 + 2;
        num2 = num2 + 2;
    }

    // Si la cantidad solicitada es impar, imprime el ultimo termino de la primera subsecuencia
    if (n % 2 != 0) {
        printf("%d", num1);
    }
    printf("\n");
}
