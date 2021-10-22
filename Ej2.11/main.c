#include <stdio.h>
#include <math.h>
int main() {

    float x1, x2, a, b, c;

    printf("Introduce el valor de a: ");
    scanf("%f", &a);
    printf("Introduce el valor de b: ");
    scanf("%f", &b);
    printf("Introduce el valor de c: ");
    scanf("%f", &c);

    x1 = (-b + sqrtf(b*b - 4*a*c)) / (2*a);
    x2 = (-b - sqrtf(b*b - 4*a*c)) / (2*a);


    printf("Las soluciones de la ecuación de segundo grado son:\nx1:%f y x2:%f", x1, x2);

    return 0;
}