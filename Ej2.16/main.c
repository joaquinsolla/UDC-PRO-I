#include <stdio.h>

int main() {

    int edad;
    char nombre [15];

    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Edad: ");
    scanf("%d", &edad);

    if (edad<32) {
        printf("%s es JOVEN (<32)", nombre);
    }
    if (32<=edad && edad<75) {
        printf("%s es ADULTA", nombre);
    }
    if (edad>=75) {
        printf("%s es ANCIANA (>=75)", nombre);
    }
    return 0;
}