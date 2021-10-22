#include <stdio.h>

int main(void) {

    float base;
    float altura;
    float area;

    printf ("Inserta la base: \n");
    scanf ("%f", &base);

    printf ("Inserta la altura: \n");
    scanf ("%f", &altura);

    area = (base*altura)/2;
    printf ("La superficie del triángulo de base %2.2f y altura %2.2f es %2.2f", base, altura, area);

    return 0;
}