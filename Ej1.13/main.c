#include <stdio.h>

int main() {

    float rad1, rad2, rad3, pi;
    pi=3.14159;
    printf("Introduce el radio de los círculos,\n1: ");
    scanf("%f",&rad1);
    printf("2: ");
    scanf("%f", &rad2);
    printf("3: ");
    scanf("%f", &rad3);

    printf("RADIO\t\tPERIMETRO\t\tAREA\n=====\t\t=========\t\t=====\n");
    printf("%.2f\t\t%.2f\t\t\t%.2f\n", rad1, rad1*pi*2, pi*rad1*rad1);
    printf("%.2f\t\t%.2f\t\t\t%.2f\n", rad2, rad2*pi*2, pi*rad2*rad2);
    printf("%.2f\t\t%.2f\t\t\t%.2f\n", rad3, rad3*pi*2, pi*rad3*rad3);

    return 0;
}