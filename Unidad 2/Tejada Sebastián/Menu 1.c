#include<stdio.h>
#include <stdlib.h>

void main()
{
  int op,n,fil,j; // declaracion de variables
  float i;         
  long long a,b,c;

  do {                    // menu a pantalla
    printf("Menu\n");
    printf("1. Figura\n"); // opcion 1
    printf("2. Serie\n");  // opcion 2
    printf("3. Salir\n");  // opcion 3
    printf("Ingrese Opcion: ");   // mensaje ingreso de datos
    scanf("%d",&op);          // lectura de dato ingreso de datos

    switch(op)   
    {
    case 1:  //caso 1 figura
        do {
           printf("Ingrese Numero de filas: "); // mensaje ingreso de datos
           scanf("%d",&fil);                    // lectura de dato ingreso de datos

        } while (fil<=0);

        for (i=1;i<=fil;i++) {          //filas de la figura
            for(j=1;j<=fil;j++){       //columnas de la figura
                if (i == 1 || i == fil || j == 1 || j == fil) // imprimir los lados de la figura
                printf("*");
            else
                printf(" ");

            }
            printf("\n"); // salto de linea
        }
        break;


    case 2:  // caso 2 serie de fibonacci
        do {
           printf("Introduce un entero n >= 1: ");  // mensaje ingreso de datos
           if (scanf("%d", &n) != 1 || n < 1) {     // validadion de entrada de datos
               printf("Error: entrada invalida o n < 1.\n"); // mensaje de error
               while (getchar() != '\n');
               n = 0;
           }

        } while (n < 1); // Repite el proceso mientras el número ingresado sea menor que 1

        a = 0;
        b = 1;

        printf("Primeros %d terminos de Fibonacci:\n", n);
        for (int i = 1; i <= n; i++) {      // Recorre desde 1 hasta n para calcular y mostrar los términos de Fibonacci
            printf("%lld", a);              // Imprime el término actual de la serie
            if (i < n) printf(", ");
            c = a + b;                      // Suma los dos términos anteriores para obtener el siguiente número
            a = b;                          // Actualiza a con el valor de b
            b = c;                          // Actualiza b con el nuevo término calculado
        }
        printf("\n");
        break;


    case 3:  // caso 3 salida del menu

         printf("Saliendo del programa...\n");  //Mensaje de salida
         break;

    default:
        printf("Opcion invalida. Intente de nuevo.\n");  //mensaje defaul si op no corresponde a alguna opcion
    }

} while (op != 3);

    return 0;

}



