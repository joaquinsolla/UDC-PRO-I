#include <stdio.h>

int main() {

    int i=0, n;
    printf("Introduce un número: ");
    scanf("%d", &n);
    printf("TABLA DE MULTIPLICAR DEL %d\n", n);

    while (i<=10)
    {printf("%d x %d = %d\n", n, i, n*i);
        i++;}
    return 0;
}