#include <stdio.h>

#define TAM 10
void leer(int numeros[]);
void imprimir(int numeros[]);

int main() {

    int num[TAM];

    leer(num);
    imprimir(num);

    return 0;
}

void leer(int numeros[]) {
    for (int i = 0; i < TAM; ++i) {
        printf("Escriba un número: ");
        scanf("%d", &numeros[i]);
    }

}

void imprimir (int numeros[]) {
    for (int i = 0; i < TAM; ++i) {
        printf("El valor de la posición %d es %d\n", i, numeros[i]);
    }

}