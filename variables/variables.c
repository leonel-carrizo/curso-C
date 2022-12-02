/* Variable: Es el nombre que se le da a un espacio de memoria reservado donde se almacenara un valor.
            Cada variable va a tener un tipo y estos son los mismos que en lso tipos de datos y de la misma manera determian el tamaño que se está reservando en la memoria.+

                        Para tener en cuentra:
            - Las variables se pueden declarar fuera del main() ordenadas en archivos.
            - Los nombres de ñas variables deben comenzar con una letra, si comieza con un simbolo no se reconocera.
            - Al igual que todo el lenguaje deben cerrarse con un punto y coma ;
            - Las variables pueden inicalizarse con un valor.
            - Las varianles char también pueden tener valores númericos.
            - Es recomendable comentar que acontinuación se declaran las variables.
            - Si se uaran las variables en diferentes archivos a lo largo del código, se debe indicar con el comando 'extern' -> extern int a;
*/
#include <stdio.h>
#include <stdlib.h>
/* Comment Exemples
//variable Declarations.
int i, j, k; //Variables auxiliares.
int minutosEstacionados;
unsigned int minimumMinutes = 30; //Recuerda que el tipo unsigned se usa para delimitar los valores a los positivos.

// Variables char
char y = 'y';
unsigned char dailyWorkHours;
*/

//variable Declarations
extern int a, b, c;
float f, g, h;
int main(int argc, char const *argv[])
{
//variable definition
int a, b, c;


//variable Initialization
    a = 1;
    b = 34;

    c = a + b;

    printf("Value of sum: %d\n", c);

    g = 1000.9999999999;
    f = 1.111111;

    h = g + f;

        printf("Value of sum: %f\n",h);
    return 0;
}