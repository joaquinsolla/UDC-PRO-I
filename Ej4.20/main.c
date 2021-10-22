#include <stdio.h>
#define TAM 15

struct alumno {
    char nombre [20];
    int nota;
};


void leerdatos (struct alumno alumnito[]){
    for (int i=0; i<TAM; i++){
        printf("Introduce el nombre del alumno %d: ", i+1);
        scanf("%s", alumnito[i].nombre);
        printf("Introduce su nota: ");
        scanf("%d", &alumnito[i].nota);
    }
}

void imprimiralumno (struct alumno alumno){
    printf("Alumno: %s\t\tNota: %d\n", alumno.nombre, alumno.nota);
}

void imprimirarray (struct alumno alumnito[]){
    printf("------------------------------------------------------\n");
    for (int i=0; i<TAM; i++){
        imprimiralumno(alumnito[i]);
    }
    printf("------------------------------------------------------\n");
}

int mejor (struct alumno alumnito[]){
    int cnt=0;
    for (int i=0; i<TAM; i++) {
        if (alumnito[i].nota>alumnito[cnt].nota) cnt=i;
    }
    return cnt;
}

int peor (struct alumno alumnito[]){
    int cnt=0;
    for (int i=0; i<TAM; i++) {
        if (alumnito[i].nota<alumnito[cnt].nota) cnt=i;
    }
    return cnt;
}


int main() {
    struct alumno alumnito[TAM];
    int mejorn, peorn;

    leerdatos(alumnito);

    mejorn = mejor(alumnito);
    peorn = peor(alumnito);

    imprimirarray(alumnito);
    printf("\n");

    printf("La mejor nota fue:\nNº de Alumno: %d\tNombre: %s\tNota: %d\n", mejorn+1, alumnito[mejorn].nombre, alumnito[mejorn].nota);
    printf("La peor nota fue:\nNº de Alumno: %d\tNombre: %s\tNota: %d\n", peorn+1, alumnito[peorn].nombre, alumnito[peorn].nota);
    return 0;
}