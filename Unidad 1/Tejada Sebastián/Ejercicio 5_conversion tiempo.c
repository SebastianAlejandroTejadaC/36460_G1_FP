#include <stdio.h>
//Ejercicio 5 conversion tiempo

int main() {
    int c, dias, horas, minutos, segundos, resto;

    printf("Ingresa el numero de segundos del evento: ");
    scanf("%d", &c);

    //dias completos (1 dia = 86400 seg)
    dias  = c / 86400;
    resto = c % 86400;

    //horas completas (1 hora = 3600 seg)
    horas = resto / 3600;
    resto = resto % 3600;

    //Calcular minutos completos (1 minuto = 60 seg)
    minutos  = resto / 60;
    segundos = resto % 60;

    printf("\n--- Conversion ---\n");
    printf("Dias:     %d\n", dias);
    printf("Horas:    %d\n", horas);
    printf("Minutos:  %d\n", minutos);
    printf("Segundos: %d\n", segundos);
}
