#include <stdio.h>
#include <stdbool.h>
int main() {

int n1, n3;
bool c3, c1;

printf("Escribe un número de 3 cifras: ");
scanf("%d", &n3);

printf("Escribe un número de 1 cifra: ");
scanf("%d", &n1);

if ( (n3 >= 100) && (n3 <= 999))
    c3 = true;
else
    c3 = false;
if ( (n1>=0) && ( n1 <=9) )
    c1 = true;
else
    c1 = false;
if (c1 && c3)
    printf("La multiplicación es: %d\n", n1*n3);
else if (!c1 && !c3)
    printf("Los dos números son negativos");
else if (!c1)
    printf("El número no es de una cifra\n");
    else
        printf("El número no es de tres cifras\n");

    return 0;
}