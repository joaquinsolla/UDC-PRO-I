#include <stdio.h>

int main() {

    int num;

    printf("Introduce un número entero:\n");
    scanf("%d", &num);

    if (num>=0)
        printf("El número es positivo\n");
    else
        printf("El número es negativo\n");

    return 0;
}