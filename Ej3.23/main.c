#include <stdio.h>

void pedirNota (int *nota) {

    printf("Introduce un número entero entre 0 y 100: ");
    scanf("%d", nota);

    while (*nota<0 || *nota>100) {
        printf("Introduce un número entero entre 0 y 100: ");
        scanf("%d", nota);
    }
}

char calculaPuntuacion (float x) {

    char letra;

    if (x>=90 && x<=100) letra='A';
    if (x>=80 && x<90) letra='B';
    if (x>=70 && x<80) letra='C';
    if (x>=60 && x<70) letra='D';
    if (x>=0 && x<60) letra='E';

    return letra;            // IMPORTANTE //
}

void calculaMedia (int nota1, int nota2, int nota3, int nota4) {

    float media;
    char escala;

    pedirNota(&nota1);
    pedirNota(&nota2);
    pedirNota(&nota3);
    pedirNota(&nota4);

    media = (float) (nota1+nota2+nota3+nota4)/4;
    escala = calculaPuntuacion(media);
    printf("La media es: %.2f y la escala: %c", media, escala);
}

int main() {

    int n1, n2, n3, n4;
    calculaMedia(n1, n2, n3, n4);


    return 0;
}