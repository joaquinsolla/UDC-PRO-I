#include <stdio.h>

int main(void) {

    int edad;
    char nombre [50];

    printf ("Introduce tu nombre: \n");
    scanf ("%s", nombre);

    printf ("Introduce tu edad; \n");
    scanf ("%d", &edad);

    printf ("Hola %s, tienes %d años.\n", nombre, edad);

    return 0;
}