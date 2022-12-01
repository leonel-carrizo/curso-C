/* Escribe un programa que pida al usuario el valor de la base y la altura de un rectangulo
y con ellos calcula su area.  A = b * h */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b, h;

    printf("Por favor introduzca el valor de la base\n");
    scanf("%f", &b);

    printf("Por favor introduzca el valor de la altura\n");
    scanf("%f", &h);

    float area = b * h;

    printf("El area del rectangulo es: %.1f", area);
}
