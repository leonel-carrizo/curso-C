/*Son datos que van a mentener su valor durante toda la ejecucion del programa y no son mutables*/
#include <stdio.h>
#include <stdlib.h>

// se debe declarar la directiva.
#define edad 35
#define PI 3.1416

int main(int argc, char const *argv[])
{
    printf("La edad es: %d.\n", edad);

    int radio;
    float result;
    printf("Ingrese el radio del circulo\n");
    scanf("%d", &radio);
    result = radio * radio * PI;

    printf("El area del circulo es: %.4f.\n\n", result);

    printf("Hola estoy cansado\n");

    return 0;
}
