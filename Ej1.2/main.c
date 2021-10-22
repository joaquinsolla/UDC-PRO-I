#include <stdio.h>

int main(void) {

        int edad;
        char nombre [50];
        char apellido [50];

        printf ("Introduzca su nombre: \n");
        scanf ("%s", nombre);

        printf ("Introduzca su apellido: \n");
        scanf ("%s", apellido);

        printf ("Introduzca su edad: \n");
        scanf ("%d", &edad);

        printf ("Sr./Sra. %s, le quedan aún %d años para jubilarse.\n", apellido, 67-edad);


    return 0;
}