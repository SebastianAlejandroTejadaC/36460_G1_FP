#include <stdio.h>
//Ejercicio 3, Divisible, Tejada

void main()
{
	int n1,n2;

	printf("Ingrese numero 1: ");
	scanf("%d",&n1);
	printf("Ingrese numero 2: ");
	scanf("%d",&n2);

	if (n2==0){
		printf("Error no se puede divir para 0");
		printf("\n");
		printf("Vuelve a ingresar");
	}
	else if(n1%n2==0){

        printf("EL numero %d\n",n1);
        printf("\n");
        printf("Si es divisible para %d\n",n2);
	}
    else{
        printf("EL numero %d\n",n1);
        printf("\n");
        printf("No es divisible entre %d\n",n2);
    }
}
