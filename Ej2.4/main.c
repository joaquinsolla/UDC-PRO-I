#include <stdio.h>

int main() {

    int n1, n2, n3;

    printf("Introduce los 3 números (separados por comas)\n");
    scanf("%d, %d, %d", &n1, &n2, &n3);

    if (n1<n2) {
        if (n3<n2)
            printf("El mayor número es %d", n2);
        else
            printf("El mayor número es %d", n3);
    }
        else {
            if (n1<n3)
                printf("El mayor número es %d", n3);
            else
                printf("El mayor número es %d", n1);
        }
    return 0;
}