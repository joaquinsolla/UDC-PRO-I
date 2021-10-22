#include <stdio.h>
#include <math.h>

int main() {

    char nombre[20];
    float peso, altura, IMC=0;

    printf("Introduzca su nombre: ");
    scanf("%s", nombre);
    printf("Introduzca su altura en centímetros: ");
    scanf("%f", &altura);
    printf("Introduzca su peso en kilogramos: ");
    scanf("%f", &peso);

    IMC = peso / pow((altura/100), 2);

    if (IMC<18.5) printf("%s, según el índice de masa corporal (IMC=%.2f), tiene usted un PESO INSUFICIENTE para su estatura.", nombre, IMC);
    else if (IMC>=18.5 && IMC<25) printf("%s, según el índice de masa corporal (IMC=%.2f), tiene usted un PESO NORMAL para su estatura.", nombre, IMC);
    else if (IMC>=25 && IMC<27) printf("%s, según el índice de masa corporal (IMC=%.2f), tiene usted SOBREPESO DE GRADO I para su estatura.", nombre, IMC);
    else if (IMC>=27 && IMC<30) printf("%s, según el índice de masa corporal (IMC=%.2f), tiene usted SOBREPESO DE GRADO II para su estatura.", nombre, IMC);
    else printf("%s, según el índice de masa corporal (IMC=%.2f), es usted UN PUTO OBESO para su estatura.", nombre, IMC);

    return 0;
}