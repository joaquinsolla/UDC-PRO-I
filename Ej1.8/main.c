#include <stdio.h>

int main() {
    int edad;
    char nombre [50];
    float dcanas, dtrans, total;

    printf("Introduce tu nombre:\n");
    scanf("%s", &nombre);

    printf("Introduce tu edad:\n");
    scanf ("%d", &edad);

    printf("Introduzca usted el total de sus gastos semanales en cañas (en euros):\n");
    scanf ("%f", &dcanas);

    printf("Introduzca usted el total de sus gastos semanales en transporte (en euros):\n");
    scanf ("%f", &dtrans);

    total = dtrans+dcanas;

    printf("Nombre: %s\n", nombre);
    printf("Edad: %d\n", edad);
    printf("Gasto semanal en cañas: %.2f€\n", dcanas);
    printf("Gasto semanal en transporte: %.2f€\n", dtrans);
    printf("Gastos totales semanales: %.2f€\n", total);

    return 0;
}