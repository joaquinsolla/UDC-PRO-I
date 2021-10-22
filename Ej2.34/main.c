#include <stdio.h>

int main() {

    int n=0, i=0;
    long int fibo=1, fibon=1, fibon1=0;

    printf("Introduce un número mayor a 0: ");
    scanf("%d", &n);

    for (i=2; i<= n; i++) {
        fibo=fibon+fibon1;
        fibon1=fibon;
        fibon=fibo;
    }
    printf("El valor del número de Fibonacci es: %ld\n", fibo);

    return 0;
}