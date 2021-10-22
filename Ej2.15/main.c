#include <stdio.h>

int main() {
char letra;

    printf("B.- Bebé\nA.- Adolescente\nM.- Mujer\nH.- Hombre\n");


while ( (letra != 'S') && (letra != 's') ) {
    printf("Teclee una letra, s o S para salir: ");
    scanf("%c", &letra);

    switch (letra) {

        case 'B' :
        case 'b' :
            printf("Bebé\n");
            break;
        case 'A' :
        case 'a':
            printf("Adolescente\n");
            break;
        case 'M' :
        case 'm':
            printf("Mujer\n");
            break;
        case 'H' :
        case 'h':
            printf("Hombre\n");
            break;
        case 's' :
        case 'S' :;
        break;
        default : printf("Teclee un caracter válido");
    }
}
    return 0;
}