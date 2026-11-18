#include<stdio.h>
#include<stdlib.h> // biblioteca para borrar pantalla

void main()
{
   int op,anio, mes, dia;
   int maxDias;

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
        printf("Ingrese el mes: ");    // mensaje ingreso de mes
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
        printf("Ingrese el dia: ", maxDias);   // mensaje ingreso del dia
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
            printf("\n  %d de Abril de %d\n  \n", dia, anio);
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
    printf("\n"); //salto de linea
    getchar();
    system("cls");
    break;

    case 2:  //caso 2 Desplegar serie letras

    system("cls");

    case 3:  //caso 3 Desplegar serie numero


    case 4:  //caso 4 Salir
        printf("Salir ...\n");
           break;

    default:
        printf("Opcion no valida \n");
    }

} while (op != 4);


}

