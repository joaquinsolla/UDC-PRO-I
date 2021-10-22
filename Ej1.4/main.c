#include <stdio.h>

int main(void) {

    float base;
    float altura;
    float perimetro;

    printf ("Introduce la base del rectángulo: \n");
    scanf ("%f", &base);

    printf ("Introduce la altura del rectángulo: \n");
    scanf ("%f", &altura);

    perimetro = 2*base + 2*altura;

    printf ("El perímetro del rectángulo de base %2.2f y altura %2.2f es %2.2f.\n", base, altura, perimetro);

    return 0;
}