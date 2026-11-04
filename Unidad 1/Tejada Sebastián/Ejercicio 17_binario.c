#include <stdio.h>
//Ejercicio17 binario

int main(void) {  // inicio del programa//
    
    long long n;  //definicion de la variable del numero ingresado//
    int i = 0; //contador de de los numeros de bits//
    long long original = n; //definicion de la variable que guarda el numero original//


    
    printf("Introduce un entero positivo: ");
    
    if (scanf("%lld", &n) != 1 || n < 0) { //Comprobacion del numero ingresado es un entero positivo//
        printf("Error: entrada invalida.\n"); //imprime mensaje de error/
        return 1;
    }

    if (n == 0) { //comprueba si el numero ingresado es 0//
        printf("0 en binario es: 0\n"); //Numero binario del 0//
        return 0;
    }


    while (n > 0) { //convercion decimal a binario mediante divisiones consecutivas//
        bits[i++] = n % 2; //almacena el residuo de la division//
        n /= 2; //divide al numero para 2//
    }

    printf("%lld en binario es: ", original); //muestra el numero decimal original//
    for (int j = i - 1; j >= 0; j--) //recorre en orden desendente para mostrar desde el bit menos significativo//
        printf("%d", bits[j]); // imprime el numero decimal en binario//
    printf("\n"); //salto de linea

}
