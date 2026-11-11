#include<stdio.h>
void main()
{
  int i,j,n;
  do {
    printf("Ingrese la dimension");
    scanf("%d",&n);
  }
  while (n<=0);
  for (i=1;i<=n;i++) //filas
  {
  for(j=1;j<=n;j++) //columnas
    printf("*");
    printf("\n");

  }

}
