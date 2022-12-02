#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Salida de datos: para la salida se usa printf. en consola de los datos se debe especificar el tipo de dato a imprimir: %d , %f, %lf, %c*/

    int numero = 6;
    float numero2 = 3.14;
    double numero3 = 1000.5;
    char caracter = 'd';



    printf("El primer numero es %d \n", numero); // para los numeros int se hace referencia con %d (\n es salto de linea)

    printf("El valor de la variable numero2 es %f \n", numero2); // imprimira un numero con varios decimales. Se hace referencia con %f


    printf("El valor de la variable numero2 es %.2f \n", numero2); // Para delimitar la cantidad de decimales se indica el .2 en la referencia.

    printf("El valor de la variable numero3 es %lf \n", numero3); // se hace referencia con %lf

    printf("El valor del caracter es %c \n", caracter); // se hace referecnia con %c


    /* Entrada de datos: Para la entrada de datos se usa scanf*/

    int n;
    printf("Ingresa un numero\n");
    scanf("%d", &n);


    printf("El numero introducido es %d \n", n);
}
