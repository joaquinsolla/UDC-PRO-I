#include <stdio.h>

int main() {
   int num, resto;

   printf("Introduce un número entero:\n");
   scanf ("%d", &num);


   resto = num % 2;

   if (resto>0)
       printf("Número impar\n");
   else
       printf("Número par\n");

    return 0;
}