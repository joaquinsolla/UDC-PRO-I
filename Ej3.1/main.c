#include <stdio.h>

//subprograma
void imprimir(int n) {
    int j;

    for (int j = 0; j < n; ++j) {
        printf("Una línea más\n");
    }

}


//programa principal
int main() {
    int lineas;

    printf("Teclee el número de líneas a imprimir: ");
    scanf("%d", &lineas);
    imprimir(lineas);
    return 0;
}