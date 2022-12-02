#include <stdio.h> //El simbolo < > le indica al compilador que busque en la carperta predefinida.
#include <stdlib.h>
/*Son datos que van a mentener su valor durante toda la ejecucion del programa y no son mutables
ES UNA BUENA PRACTICA que las constantes sean totalmente UPPERCASE.
*/

// Directiva de procesador (preprocessor define): Esta forma es usada por el proprocesador del compilador.
// Esta forma es conciderada como una macro y no como una variable (directiva de procesador).
// Al tener el simbolo '#' se indica al compilador que debe preprocesar la funcionalidad antes que otras declaraciones del código.
// El compilador creara otro programa donde la costante será buscada, emparejara y reemplaza a las expresiones que defianmos en el código.
// Libera espacio de memoria pero aumenta los tiempos de compilación.
// No puede charease el tipo de tipo de dato.
// No necesita cerrarse con ; y no necesitan el simbolo de asignacion =.
#define edad 35
#define PI 3.1416

// Declaracion de Contantes: Esta forma es considerada como una variable. Se puede verficar su tipo de Dato.
// Pueden uasrse apuntadores en ellas.
// Necesita cerrarse con ;
// Pueden contener los sufijos: 'L o l: Long', 'U o u: unsigned', 'll o LL: long long',
const int COSTHOTDOG = 100;
const int PRICE = 13.1416L; // Ejemplo de constante con sufijo indicando que es un nuemero de tipo long.
const float BILL = 100.05;
const char NEWLINE = '\n';


int main(int argc, char const* argv[])
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

    /*
    CUANDO USAR:
    - #define es genial para definir todos los valores al principio.
    - #define al principio nos permite su configuirarlos facilmente al estar en un mismo lugar.
    - const es conveniente cuando la cosntante no sera global en todo el código.
    */
    }
