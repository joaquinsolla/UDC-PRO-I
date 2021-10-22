#include <stdio.h>

int main() {

    int num, i, j, fila=1;

    printf("Introduce el número de filas: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++){
        for (j=1; j<=i; j++){
            printf("%d ", fila);
            fila++;
        }
        printf("\n");
    }
    return 0;
}
