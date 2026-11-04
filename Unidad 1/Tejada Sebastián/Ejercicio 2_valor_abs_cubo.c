#include <stdio.h>
#include <stdlib.h>
//Ejercicio 2 valor abs x
void main()
{
    int x,ab;

    printf("Ingrese numero: ");
	scanf("%d",&x);
	ab=abs(x)*abs(x)*abs(x);
	printf("Tu resultado es: %d\n",ab);


}
