#include <stdio.h>

int main() {

    int n;

    do {printf("Introduce un número (Introduce uno entre 20 y 30 para salir): ");
    scanf("%d", &n);

    }   while (n<20 ||n>30);
    return 0;
}