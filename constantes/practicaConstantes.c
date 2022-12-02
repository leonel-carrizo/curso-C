#include <stdio.h>
#include <stdlib.h>

#define PIZZACOST 1.5
const char NEWLINE = '\n';

int main(int argc, char const *argv[])
{
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZZACOST * numberOfSlices;

    printf("Total Cost: %c %.2f", NEWLINE, costoPizzas);

    /* #Define es mejor cuando */

    return 0;
}