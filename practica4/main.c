/* Escribe un programa que haga la conversion de euros a pesetas.
Para ello pedirá al usuario que introduzca los euros a convertir
y mostrara por consola la equivalencia de los euros a convertir*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float euros;

    float pesetas = 166.5;

    printf("Introduzca la cantidad en euros\n");

    scanf("%f", &euros);

    printf("%.1f Euro son: %.1f pesetas",euros, euros*pesetas);

}
