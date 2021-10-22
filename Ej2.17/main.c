#include <stdio.h>

int main() {
    char c;
    int ascii;

    printf("Introduce un caracter: ");
    scanf("%c", &c);

    ascii = (int) c;

    if ((ascii>65 && ascii<=90) || (ascii>=97 && ascii<=122)) {
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            printf("%c es una vocal", c);
        else printf("%c es una consonante", c);
    } else if (ascii >=48 && ascii<=57)
        printf("%c es un dígito", c);
    else printf("%c es un caráacter especial", c);
    return 0;
}