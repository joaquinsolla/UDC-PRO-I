#include <stdio.h>

int main() {

    int num1, num2;

    printf("Introduce el primer número entero:\n");
    scanf("%d", &num1);
    printf("Introduce el segundo número entero:\n");
    scanf("%d", &num2);


    if (num2==0)
        printf("El primer número no es divisible por el segundo ya que este es 0");
    else
        printf("El primer número sí es divisible entre el segundo .\n");

    return 0;
}