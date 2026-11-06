#include <stdio.h>


int main()

{

double x, v, r;


printf("Ingrese un numero: ");

scanf("%lf", &x);

if (x < 0)

{

v = -x;

}

else

{

v = x;

}

r = v * v * v;

printf("|x|^3 = %.2f\n", r);

return 0;

}
