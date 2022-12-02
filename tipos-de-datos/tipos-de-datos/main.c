#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Tipos de datos*/
    //Tomado de Curso CV en platzi
/*
Basic Types:
(A) Aritemeticos emteros:   int 4 Bytes -> -2,147,483,648 to 2,147,483,647
                        unsigned int 4 Bytes-> 0 to 4,494,967,295
                    short 2 Bytes -> -32,767 to 32,767
                        unsigned short 2 Bytes -> 0 to 65,535
                    long 8 Bytes -> -9223372036854775808 to 9223372036854775807
                        unsigned long -> 18446744073709551615

(B) De punto flotante float:
                    float 4 Bytes -> 1.2E-38 to 3.4E+38. 6 decimal places
                    double 8 Bytes -> 2.3E-308 to 1.7E+308. 15 decimal places
                    long double 10 Byetes ->  3.4E-4932 to q.qE+4932. 19 decimal places.

(C) Others:
            void: Especifica que no hay valor disponible, se usa en 3 escenarios:
                1.- Funcion retorna un tipo de dato void.
                        void function()
                2.- Funcion tiene argumento de tipo void
                        int randon(void)
                3.- Puntero o apuntador que va a la direccion en memoria de un objeto, pero no le importa el tipo de dato que tenga.


*/

    /* Variables*/
    // Las variables en C deben definirse con su tipo ya que es un lenguaje de tipado fuerte y no dinamico.
    // El ejemplo abajo muestra la declaracion de una variable de tipo nuemro.

    int numero_entero; // esta es una variable definida
    int numero_entero = 16; // esta es una variable definida con su valor

    float numero_real_simple = 5.6;

    double numero_real_doble = 1000.3457;

    // variable de tipo caracter o texto
    char caracter = 't';


}

