#include <stdio.h>
//Ejercicio 4 intervalo
void main()
{
    int x;

    printf("Ingrese numero: ");
	scanf("%d",&x);
	if (x>=0&&x<=10){
        printf("\n");
        printf("%d Si pertenece al intervalo de 0-10",x);

	}
     else{
        printf("\n");
        printf("%d No pertenece al intervalo de 0-10",x);

     }

	}


