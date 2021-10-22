//JOAQUÍN SOLLA VÁZQUEZ      GRUPO 1.2

#include <stdio.h>
#define TAM 10

void leer(int datos[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("Introduce el valor de la fila %d, columna %d: ", i+1, j+1);
            scanf("%d", &datos[i][j]);
        }
    }
}

void imprimir(int datos[TAM][TAM]){

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            printf("El valor de la fila %d, columna %d es: %d\n", i+1, j+1, datos[i][j]);
        }
    }
}

void contar(int datos[TAM][TAM]){

    int positivos=0, negativos=0, ceros=0;

    for(int i=0; i<TAM; i++){
        for(int j=0; j<TAM; j++){
            if ((datos[i][j])>0) {positivos=positivos+1;}
            if ((datos[i][j])<0) {negativos=negativos+1;}
            if ((datos[i][j])==0) {ceros=ceros+1;}
        }
    }
    printf("La matriz tiene %d números positivo(s), %d negativo(s) y %d cero(s).\n", positivos, negativos, ceros);
}

void identidad(int datos[TAM][TAM]){

    for (int i=0; i<TAM; i++) {
        for (int j=0; j<TAM ; j++) {
            if(i==j){(datos[i][j])=1;}
            else {(datos[i][j])=0;}
        }
    }
}



int main() {

    int num[TAM][TAM];

    leer(num);
    imprimir(num);
    contar(num);
    identidad(num);


    return 0;
}