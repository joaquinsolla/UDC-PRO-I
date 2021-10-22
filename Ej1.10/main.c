#include <stdio.h>

int main() {

    float c1, c2, c3, c4, c5, c6, prod;

    printf("Introduce las 3 coordenadas del primer vector:\n");
    scanf("%f, %f, %f", &c1, &c2, &c3);

    printf("Introduce las 3 coordenadas del segundo vector:\n");
    scanf("%f, %f, %f", &c4, &c5, &c6);

    prod=c1*c4+c2*c5+c3*c6;
    printf("El producto escalar es %f.\n", prod);

    return 0;
}