#include <stdio.h>

int main() {

    int errores=0;
    char carac;

printf("Teclee caracteres y acaba con ENTER\n");
    do {
        carac=getchar();
        if ((!( ((carac>='a')&& (carac <='z')) || ((carac >='A') && ((carac <='Z'))))))
            errores++;
    }   while (carac != '\n');



printf("%d", errores);




    return 0;
}