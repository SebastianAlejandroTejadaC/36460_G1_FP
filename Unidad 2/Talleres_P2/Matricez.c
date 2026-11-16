#include<stdio.h>
void main()
{
    int filas, columnas;
    int i, j;

    float matriz[100][100]; // nos permite guardar los fload en las matricez

    do {
        printf("Ingrese el numero de filas (maximo 100): "); //mensaje de ingreso de filas
        scanf("%d", &filas);

        printf("Ingrese el numero de columnas (maximo 100): ");//mensaje de ingreso de columnas
        scanf("%d", &columnas);

        if (filas <= 0 || filas > 100 || columnas <= 0 || columnas > 100) {  // comprueba los datos de ingreso, para que la matriz exista
            printf("Error: ingrese un tamano entre 1 y 100.\n");
        }

    } while (filas <= 0 || filas > 100 || columnas <= 0 || columnas > 100);

    printf("\nIngrese los datos de la matriz:\n");  //mensaje de ingreso los datos de la matriz

    for (i = 0; i < filas; i++) {           //control filas
        for (j = 0; j < columnas; j++) {    //control columnas

            do {
                printf("Ingrese el dato [%d][%d]: ", i, j); //mensaje de ingreso de valores para cada elemento de la matriz
                scanf("%f", &matriz[i][j]);

                if (matriz[i][j] < 0) {    //comprueba si los numeros ingresados son negativos o positivos
                    printf("Error: no se permiten numeros negativos.\n"); // mensaje de error si los numero singresados son negativos
                }

            } while (matriz[i][j] < 0); // repeticion de ingreso de datos, siempre que sea negativo
        }
    }

    printf("\nLa matriz ingresada es:\n");

    for (i = 0; i < filas; i++) {           //control filas
        for (j = 0; j < columnas; j++) {   //control columnas
            printf("%.2f\t", matriz[i][j]);   //imprime la matriz
        }
        printf("\n");   // salto de linea
    }

}
