#include <stdio.h>
//Ejercicio 7,Raiz entera
void main()
{
    int n,i,r;
    printf("Ingrese un numero : ");
	scanf("%d",&n);
	i=1;
	while (i*i<=n) {
            i=i+1;
	}
    r=i-1;
    printf("Raiz entera: %d\n",r);
}
