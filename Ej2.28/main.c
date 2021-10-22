#include <stdio.h>

int main() {

    int n=-1, sum=0;
    printf("A continuación introduzca los números enteros de los que desee calcular la suma separados por espacios:\n");

    while (n!=0) {
        scanf("%d", &n);
        sum = sum + n;
    }

    printf("%d", sum);



    return 0;
}