#include <stdio.h>
#include <math.h>
float * raices(int a, int b, int c) {

    static float resultado[2];

    resultado[0]= (float) -b + sqrt((b*b)-4*a*c);
    resultado[1]= (float) -b - sqrt((b*b)-4*a*c);
    resultado[0]= (float) resultado[0] / (2*a);
    resultado[1]= (float) resultado[1] / (2*a);

    return resultado;
}

int main() {

    int x, y, z;
    float * valores;

    printf("Introduce el valor de A: "); scanf("%d", &x);
    printf("Introduce el valor de B: "); scanf("%d", &y);
    printf("Introduce el valor de C: "); scanf("%d", &z);

    valores=raices(x, y, z);

    //Dos formas de escribirlo
    printf("Las soluciones de la ecuación son: %.5f, %.5f\n",*(valores),*(valores + 1));
    printf("Las soluciones de la ecuación son: %.5f, %.5f\n",valores[0],valores[1]);
    return 0;
}