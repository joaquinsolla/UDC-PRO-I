#include <stdio.h>

int main() {

    int dia, mes, diastotales;

    printf("Escriba una fecha del año 2019 (dd mm)\n");
    scanf("%d %d", &dia, &mes);

    diastotales=30*mes + dia;
    printf("La fecha introducida corresponde al día %d del año", diastotales);

    return 0;
}