#include<stdio.h>

void llenarVector(int vector[], int indice, int tamano) {
    if (indice == tamano) return;
    printf("Ingresa el valor para la posicion [%d]: ", indice);
    scanf("%d", &vector[indice]);
    llenarVector(vector, indice + 1, tamano);
}

void mostrarVector(int vector[], int indice, int tamano) {
    if (indice == tamano) {
        printf("\n");
        return;
    }
    printf("%d ", vector[indice]);
    mostrarVector(vector, indice + 1, tamano);
}

void main()
{
   int op,n, filas, columnas;
   int i, j;

   int vector[100];
   float matriz[100][100]; // nos permite guardar los fload en las matricez


  do {                    // menu a pantalla
    printf("Menu\n");
    printf("1. Matrices\n"); // opcion 1
    printf("2. Vector\n");  // opcion 2
    printf("3. Salir\n");  // opcion 3
    printf("Ingrese Opcion: ");   // mensaje ingreso de datos
    scanf("%d",&op);          // lectura de dato ingreso de datos

    switch(op)
    {
    case 1:  //caso 1 Maticez

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
        break;


    case 2:  // caso 2 Vector

        printf("Cuantos elementos tendra el vector: ");  //Mensaje ingreso de datos
            scanf("%d", &n);

            if (n <= 0 || n > 100) {                  //Validacion dedatos de entrada
                printf("Tamano invalido.\n");
                break;
            }

            printf("Ingrese los valores");            //Mensaje de ingreso de valores
            llenarVector(vector, 0, n);

            printf("El vector es: ");                 //Mostar el vector final
            mostrarVector(vector, 0, n);
            break;


    case 3:  // caso 3 salida del menu

         printf("Saliendo del programa...\n");  //Mensaje de salida
         break;

    default:
        printf("Opcion invalida. Intente de nuevo.\n");  //mensaje defaul si op no corresponde a alguna opcion
    }

} while (op != 3);


}
