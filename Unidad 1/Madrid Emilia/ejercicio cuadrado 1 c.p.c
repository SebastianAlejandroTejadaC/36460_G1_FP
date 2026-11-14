#include <stdio.h>

int main() {
    int op, n, fil;
    float res = 0, i;

    do {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                {
                    int opFig;
                    do {
                        printf("\n--- SUBMENU FIGURAS (CUADRADOS) ---\n");
                        printf("1. Cuadrado completo\n");
                        printf("2. Cuadrado vacio\n");
                        printf("3. Cuadrado con diagonal\n");
                        printf("4. Regresar\n");
                        printf("Ingrese opcion: ");
                        scanf("%d", &opFig);

                        if (opFig >= 1 && opFig <= 3) {
                            printf("Ingrese numero de filas: ");
                            scanf("%d", &fil);
                        }

                        switch(opFig) {
                            case 1:
                                // 1. Cuadrado completo
                                for(int r = 0; r < fil; r++) {
                                    for(int c = 0; c < fil; c++) {
                                        printf("* ");
                                    }
                                    printf("\n");
                                }
                                break;

                            case 2:
                                // 2. Cuadrado vacio
                                for(int r = 0; r < fil; r++) {
                                    for(int c = 0; c < fil; c++) {
                                        if(r == 0 || r == fil - 1 || c == 0 || c == fil - 1) {
                                            printf("* ");
                                        } else {
                                            printf("  ");
                                        }
                                    }
                                    printf("\n");
                                }
                                break;

                            case 3:
                                // 3. Cuadrado con diagonal
                                for(int r = 0; r < fil; r++) {
                                    for(int c = 0; c < fil; c++) {
                                        if(r == 0 || r == fil - 1 || c == 0 || c == fil - 1 || r == c) {
                                            printf("* ");
                                        } else {
                                            printf("  ");
                                        }
                                    }
                                    printf("\n");
                                }
                                break;

                            case 4:
                                // Regresar al menú principal
                                break;

                            default:
                                printf("Opcion invalida.\n");
                        }
                    } while(opFig != 4);
                }
                break;

            case 2:
                printf("Opcion Serie seleccionada.\n");
                break;

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while(op != 3);

    return 0;
}
