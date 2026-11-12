#include<stdio.h>
#include <stdlib.h>

void main()
{
  int op,n,fil,j;
  float i;
  long long a,b,c;

  do {
    printf("Menu\n");
    printf("1. Figura\n");
    printf("2. Serie\n");
    printf("3. Salir\n");
    printf("Ingrese Opcion: ");
    scanf("%d",&op);

    switch(op)
    {
    case 1:
        do {
           printf("Ingrese Numero de filas: ");
           scanf("%d",&fil);

        } while (fil<=0);

        for (i=1;i<=fil;i++) { //filas
            for(j=1;j<=fil;j++){ //columnas
                if (i == 1 || i == fil || j == 1 || j == fil)
                printf("*");
            else
                printf(" ");

            }
            printf("\n");
        }
        break;


    case 2:
        do {
           printf("Introduce un entero n >= 1: ");
           if (scanf("%d", &n) != 1 || n < 1) {
               printf("Error: entrada invalida o n < 1.\n");
               while (getchar() != '\n');
               n = 0;
           }

        } while (n < 1);

        a = 0;
        b = 1;

        printf("Primeros %d terminos de Fibonacci:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%lld", a);
            if (i < n) printf(", ");
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
        break;


    case 3:

         printf("Saliendo del programa...\n");
         break;

    default:
        printf("Opcion invalida. Intente de nuevo.\n");
    }

} while (op != 3);

    return 0;

}



