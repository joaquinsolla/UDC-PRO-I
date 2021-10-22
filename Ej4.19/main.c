#include <stdio.h>
#include <stdlib.h>

#define ARRAY 3
#define TAM 500

void randomizar (int x[ARRAY][TAM]){
int maximo=10;
    for (int i = 0; i < ARRAY; i++) {
        for (int j = 0; j < TAM; j++) {
            x[i][j]=rand() % maximo;
        }
    }
}

void imprimir (int x[ARRAY][TAM]) {
    printf("La lista desordenada es:\n");
    for (int i = 0; i < ARRAY; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}

void ordenar (int x[ARRAY][TAM]){
    int temp=0;
    for (int a=0; a<ARRAY; a++) {
        for (int i=1; i < TAM; i++) {            //Atención en i=1
            for (int j=0; j < TAM-1; j++) {      //Atención en TAM-1
                if (x[a][j] > x[a][j+1]) {
                    temp = x[a][j];
                    x[a][j] = x[a][j+1];    //Intercambio
                    x[a][j+1]=temp;

                }
            }
        }
    }
}

void imprimirordenado (int x[ARRAY][TAM]){
    printf("La lista ordenada es:\n");
    for (int i = 0; i < ARRAY; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
}


int main() {
int numero[ARRAY][TAM];

randomizar(numero);
imprimir(numero);
ordenar(numero);
imprimirordenado(numero);

    return 0;
}