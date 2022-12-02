#include <stdio.h>
#include <stdlib.h>

enum weekDays
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    enum weekDays today;
    today = Saturday;

    printf("Day %d\n", today+1);

    enum deck
    {
        corazones = 1,
        azotes = 5,
        espaada = 10,
        oro = 15,
    } cartas;

    cartas = oro;

        printf("Card Value %d\n", cartas);


    return 0;
}