#include <stdio.h>


int main()

{

double a, b, media;


printf("Ingrese dos numeros: ");

scanf("%lf %lf", &a, &b);

media = (a + b) / 2;

printf("La media es: %.2f\n", media);

return 0;

}
