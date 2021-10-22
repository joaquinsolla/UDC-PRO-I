#include <stdio.h>

int fibonacci (int n){
    int i=0;
    long int fibo=1, fibon=1, fibon1=0;

    for (i=2; i<= n; i++) {
        fibo=fibon+fibon1;
        fibon1=fibon;
        fibon=fibo;
    }
    printf("El valor del número de Fibonacci es: %ld\n", fibo);

}

void prueba (int n){
    printf("Introduce un número mayor a 0: ");
    scanf("%d", &n);

fibonacci(n);

}

int main() {

    int num;

prueba(num);

    return 0;
}