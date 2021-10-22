#include <stdio.h>

void semana(char d) {

    switch (d){
        case 'L':
        case 'l': printf("Lunes");
        break;
        case 'M':
        case 'm': printf("Martes");
        break;
        case 'X':
        case 'x': printf("Miércoles");
        break;
        case 'J':
        case 'j': printf("Jueves");
        break;
        case 'V':
        case 'v': printf("Viernes");
        break;
        case 'S':
        case 's': printf("Sábado");
        break;
        case 'D':
        case 'd': printf("Domingo");
        break;
        default : printf("Letra incorrecta");
        break;
    }
}



int main() {

    char letra;

    printf("Introduce una letra del día de la semana: ");
    scanf("%c", &letra);
    semana(letra);

    return 0;
}