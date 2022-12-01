/* typedef enum. (tipo de dato enumerado) Datos que solo van a poder tomar un conjunto de valores determinados. Se pueden definir una serie de datos propios que solo acepten valores de determiando conjunto.  */
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    /*tipo de dato para almacenar los dias de la sema*/
    typedef enum
    {
        lunes,
        martes,
        miercoles,
        jueves,
        viernes,
        sabado,
        domingo
    } semana; 
    /*A cada valor dentro del conjunto se le asigna un valor numerico. lunes=0, martesa=1, miercoles=2, juves=3, viernes=4, sabado=5, domingo=6*/

    semana dia_semana1 = 3;
/*Para este ejemplo solo serán posibles los días de la semana declarados en el conjunto tipo de dato semana a diferencia de si se escogiera otro como int, float, char, long*/

    if (dia_semana1 == 3) {
        printf("el dia es lunes\n");
    }
    else {
        printf(" Es otro dia\n");
    }

    return 0;
}
