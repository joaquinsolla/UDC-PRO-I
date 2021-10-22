#include <stdio.h>
#include <math.h>


int main(void) {

    double lado1, lado2, lado3, semiperi, area;

    printf("Introduce el primer lado del triángulo: \n");
    scanf ("%lf", &lado1);

    printf("Introduce el segundo lado del triángulo: \n");
    scanf ("%lf", &lado2);

    printf("Introduce el tercer lado del triángulo: \n");
    scanf ("%lf", &lado3);

    semiperi = (lado1 + lado2 + lado3)/2;
    area = sqrt(semiperi*(semiperi-lado1)*(semiperi-lado2)*(semiperi-lado3));
    printf("La superficie del rectángulo es %f.", area);

    return 0;
}