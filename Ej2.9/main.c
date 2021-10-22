#include <stdio.h>

int main() {

    int anioN = 0, anioA = 0, mesN = 0, mesA = 0, diaN = 0, diaA = 0, edadD, edadM, edadA;

    printf("Introduce tu día de nacimiento:\n");
    scanf("%d", &diaN);
    printf("El mes:\n");
    scanf("%d", &mesN);
    printf("El año:\n");
    scanf("%d", &anioN);

    printf("Introduce a qué día del mes estamos:\n");
    scanf("%d", &diaA);
    printf("El mes actual:\n");
    scanf("%d", &mesA);
    printf("El año actual:\n");
    scanf("%d", &anioA);

edadA = anioA-anioN;
edadM = mesA-mesN;
edadD = diaA-diaN;

if (edadM<0) {
    edadA--;
    edadM = 12+edadM;
}

if (edadD<0) {
    edadM--;
    edadA = 30+edadD;
}

printf("Su edad es de: %d años, %d meses, %d días.\n", edadA, edadM, edadD);

    return 0;
}