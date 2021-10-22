#include <stdio.h>

int main() {

    const float IVA=1.24;
    float preciosinIVA, precioconIVA;

    printf ("Introduce el precio sin IVA del prodecuto:\n");
    scanf("%f", &preciosinIVA);

    precioconIVA = preciosinIVA*IVA;

    printf ("El precio con IVA del producto es %.2f:\n", precioconIVA);

       return 0;
}