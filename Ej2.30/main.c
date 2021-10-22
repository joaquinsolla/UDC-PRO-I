#include <stdio.h>

int main() {

    int n=-1, sump=0, sumi=0;
    printf("A continuación introduzca los números enteros de los que desee calcular la suma separados por espacios:\n");

    while (n!=0) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            sump = sump + n;
        } else { sumi = sumi + n; }
    }

printf("Pares: %d\nImpares: %d\n", sump, sumi);

    return 0;
}