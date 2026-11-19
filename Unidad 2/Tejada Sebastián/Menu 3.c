#include<stdio.h>
#include<stdlib.h> // biblioteca para borrar pantalla

void main()
{
   int op,anio, mes, dia;
   int maxDias;

   int cantidadletras;
   char letraprincipal, letrabajo;

   int nNum, i, a, b;


  do {                                           // menu a pantalla
    printf("Menu Principal \n");
    printf("1. Validar fecha \n");             // opcion 1
    printf("2. Desplegar serie letras \n");   // opcion 2
    printf("3. Desplegar serie numero \n");  // opcion 3
    printf("4. Salir \n");                  // opcion 4
    printf("Ingrese Opcion: ");            // mensaje ingreso de datos
    scanf("%d",&op);                      // lectura de dato ingreso de datos

    switch(op)
    {
    case 1:  //caso 1 Validar fecha

    do {
        printf("Ingrese el anio (1900 - 2015): ");  // mensaje ingreso de año
        scanf("%d", &anio);                        // lectura de año ingresado

    } while (anio < 1900 || anio > 2015);        // Bucle hasta que el año este dentro intervalo


    do {
        printf("Ingrese el mes (1 - 12): ");    // mensaje ingreso de mes
        scanf("%d", &mes);            // lectura de mes ingresado
    } while (mes < 1 || mes > 12);   // Bucle hasta que el mes este dentro del intervalo


    if (mes == 2) {        // Mes febrero
        maxDias = 29;     // Dias de febrero
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) { // Mes: Noviembre, Abril Julio y Septiembre
        maxDias = 30;     // Dias de: Nov, Abr, Jul, Sep
    } else {
        maxDias = 31;    // Dias de meses sobrantes
    }

    do {
        printf("Ingrese el dia (1 - %d) : ", maxDias);   // mensaje ingreso del dia
        scanf("%d", &dia);                    // lectura del dia ingresado
    } while (dia < 1 || dia > maxDias);      // Bucle hasta que el dia este dentro del intervalo del mes correspondiente


    switch (mes) {  //Meses
        case 1:
            printf("\n%d de Enero de %d\n  \n", dia, anio);
            break;

        case 2:
            printf("\n%d de Febrero de %d\n  \n", dia, anio);
            break;

        case 3:
            printf("\n%d de Marzo de %d\n   \n", dia, anio);
            break;

        case 4:
            printf("\n%d de Abril de %d\n  \n", dia, anio);
            break;

        case 5:
            printf("\n%d de Mayo de %d\n  \n", dia, anio);
            break;

        case 6:
            printf("\n%d de Junio de %d\n  \n", dia, anio);
            break;

        case 7:
            printf("\n%d de Julio de %d\n  \n", dia, anio);
            break;

        case 8:
            printf("\n%d de Agosto de %d\n \n", dia, anio);
            break;

        case 9:
            printf("\n%d de Septiembre de %d\n  \n", dia, anio);
            break;

        case 10:
            printf("\n%d de Octubre de %d\n  \n", dia, anio);
            break;

        case 11:
            printf("\n%d de Noviembre de %d\n  \n", dia, anio);
            break;

        case 12:
            printf("\n%d de Diciembre de %d\n  \n", dia, anio);
            break;


    }
    getchar();
    getchar();
    system("cls"); //sistema para borrar pantalla

    break;

    case 2:  //caso 2 Desplegar serie letras

     do {
        printf("Ingrese la cantidad de terminos (mayor que 0): "); // mensaje ingreso de datos
        scanf("%d", &cantidadletras);                                    // lectura de datos ingresados

    } while (cantidadletras <= 0);                  //Bucle hasta que el numero sea mayor a 0


    letraprincipal = 'a';
    for (i = 0; i < cantidadletras; i++) {      // Fila arriba comienza en a
        printf("%c   ", letraprincipal);
        letraprincipal+= 2;
    }

    printf("\n"); //salto de linea


    for (i = 0; i < cantidadletras; i++) {   // Fila de guiones
        printf("-   ");
    }
    printf("\n");



    letrabajo = 'b';
    for (i = 0; i < cantidadletras; i++) {  // Fila abajo comienza en b
        printf("%c   ", letrabajo);
        letrabajo += 2;
    }

    getchar();
    getchar();
    system("cls"); //sistema para borrar pantalla

    break;

    case 3:  //caso 3 Desplegar serie numero

    do {
        printf("Ingrese la cantidad de terminos (mayores a 0): "); // mensaje ingreso de datos
        scanf("%d", &nNum);                                       // lectura de datos ingresados
    } while (nNum < 0);                                          // bucle hasta que el numero ingresado sea mayor o igual a 0

    if (nNum == 0) {                                            //condicion si el numero ingresado es cero
        printf(".....\n");                                     // no se imprimen terminos

    } else {
        a = 1;  // secuencia 1
        b = 5;  // secuencia 2

        if (nNum % 2 == 0) {                      // si el numero es par, parejas completas
            for (i = 0; i < nNum / 2; i++) {
                printf("%d, %d", a, b);          //impresion de la secuencia de numeros

                if (i < nNum / 2 - 1) printf(", "); //imprecion de comas entre numeros

                a += 2;
                b += 2;
            }


        } else {                               // si el numero es impar: pareja completa y un último termino de la secuancia 1

            for (i = 0; i < nNum / 2; i++) {
                printf("%d, %d, ", a, b);      //impresion de la secuencia de numeros

                a += 2;
                b += 2;
            }
            printf("%d\n", a);  // último término de la subsecuencia A
        }
    }

    getchar();
    getchar();
    system("cls");  //sistema para borrar pantalla

    break;


    case 4:  //caso 4 Salir
        printf("Salir ...\n");
           break;

    default:
        printf("Opcion no valida \n");
    }

} while (op != 4);


}
