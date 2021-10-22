#include <stdio.h>

int main() {

    int i=0, sump=0, j=1, sumi=0;

    do {sump=sump+i;
    i=i+2;
    } while (i<=100);
    printf("Pares: %d\n", sump);

    do {sumi = sumi + j;
        j = j + 2;
    } while (j<=100);
    printf("Impares: %d\n", sumi);

    return 0;
}