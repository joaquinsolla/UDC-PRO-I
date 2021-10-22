#include <stdio.h>
#include <math.h>

int main(void) {

    float radio, area, pi, volumen;
    pi=3.14159;

    printf ("Introduce el radio de la esfera:\n");
    scanf ("%f", &radio);

    area = (4*pi*(pow(radio, 2)));
    volumen = (4/3)*pi*(pow(radio, 3));

    printf ("El área de la esfera es %f y su volumen es %f.", area, volumen);

    return 0;
}