#include <stdio.h>

long int factorial (int n) {
    if (n<=1)
    return 1;
    else
        return n*factorial(n-1);
    }

int main() {
    int num;
    long int resul;

    printf ("Teclea un número: ");
    scanf("%d", &num);
    resul=factorial(num);
    printf("El factorial del número es: %ld\n", resul);
    return 0;
}


//Otra forma:

#include <stdio.h>

int factorial(int n){

    int factor=1;

if (n<=1) {factor=1;}
else{
    for (int i=1; i<=n; i++){
    factor=factor*i; }
}
    return factor;
};


int main() {

int numero, resultado;

    printf("Introduce un número: ");
    scanf("%d", &numero);

    resultado=factorial(numero);

    printf("El factorial de %d es %d.", numero, resultado);

    return 0;
}