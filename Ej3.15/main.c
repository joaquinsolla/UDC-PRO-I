#include <stdio.h>

void EsVocal (char c) {
    switch (c){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U': printf("Es vocal");
            break;
        default : printf("No es vocal");
            break;
    }
}

int main() {
char c;

printf("Introduce una letra: ");
scanf("%c", &c);

EsVocal(c);

    return 0;
}