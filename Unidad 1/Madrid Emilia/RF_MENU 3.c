#incluide<stdlib.h>
#incluide<stdlib.h>

int main()
   int opcion 0=;

  //Menu 3 requisitos funcionales
    prinft (''menu pricipal\n'');
    prinft (''1. ''validar fecha \n'');
    prinft (''2. ''desplegar serie de letras\n'');
    prinft (''3. ''despelgar serie de numeros\n'');
    prinft (''4. ''salir\n'');

     swith opcion {

        case 1:// Limpia pantalla antes de ejecutar la opción

                printf("1. VALIDAR FECHA \n");
                printf("Ingrese el anio: \n");
                scanfscanf("%d", &anio);
                printf("Ingrese el mes: \n");
                scanfscanf("%d", &mes)
                printf("Ingrese el dia: \n");
                scanfscanf("%d", &dia);
                fechaValida = 1; // Asumimos que es válida (1 = sí, 0 = no)

                // Validamos que el año y el mes tengan rangos lógicos
                if (anio < 1 || mes < 1 || mes > 12 || dia < 1) {
                    fechaValida = 0;
                } else {
                    // Calculamos cuántos días tiene el mes ingresado
                    if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                        diasMaximos = 30;
                    } else if (mes == 2) {
                        // Comprobación de año bisiesto
                        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
                            diasMaximos = 29;
                        } else {
                            diasMaximos = 28;
                        }
                    } else {
                        diasMaximos = 31;
                    }

                    // Verificamos si el día no sobrepasa el máximo del mes
                    if (dia > diasMaximos) {
                        fechaValida = 0;
                    }
                }
