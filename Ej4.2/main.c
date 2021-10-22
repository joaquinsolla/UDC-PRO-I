#include <stdio.h>

#define TAM 7

void leerfraguelagay (char animal[][TAM]){
    for (int i=0; i<TAM ; i++) {
        printf("Introduce el animal %d: ", i+1);
        scanf("%s", animal[i]);
    }

}

void imprimirfraguelagay (char animal[][TAM]){
    for (int i=0; i<TAM ; i++) {
        printf("El animal %d es %s\n", i+1, animal[i]);
    }

}


int main() {

char fraguela[TAM][20];

leerfraguelagay(fraguela);
imprimirfraguelagay(fraguela);


    return 0;
}